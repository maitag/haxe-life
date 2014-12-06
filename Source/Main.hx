package;

import lime.app.Application;
import lime.graphics.RenderContext;
import lime.graphics.Image;
import lime.graphics.utils.ImageCanvasUtil;
import lime.Assets;

import haxe.Timer;

class Main extends Application {
	
	private var lastTime:Float;
	private var time:Float = 0.05;
	private var swap:Bool = false;
	private var spawnCells:Bool = false;
	
	private var rule:String = '23/3'; // Conway's
	
	#if flash
	private var src_bitmap:flash.display.Bitmap;
	private var dest_bitmap:flash.display.Bitmap;
	#end
	
	private var src_image:Image;
	private var dest_image:Image;
	
	private var scale:Float = 4.0;
	
	public function new () {
		super ();
	}
	
	
	public override function init (context:RenderContext):Void {
		
		//src_image = Assets.getImage ("assets/start.png");
		src_image  = new Image(null, 0, 0, 300, 200, CellAutomatation.BG_COLOR);
		dest_image = new Image(null, 0, 0, 300, 200, CellAutomatation.BG_COLOR);
		
		CellAutomatation.genRandomCells( src_image , 150, 100);
		lastTime = Timer.stamp();
		
		switch (context) {
			
			case CANVAS (context):
				// TODO: how to AVOID smoothing ;) ?
				context.fillStyle = "#" + StringTools.hex (config.background, 6);
				context.fillRect (0, 0, window.width, window.height);
			
			case DOM (element):				
				// TODO: HOW TO SCALE HERE ?
				element.style.backgroundColor = "#" + StringTools.hex (config.background, 6);
				element.appendChild (src_image.src);
				
			case FLASH (sprite):
				#if flash
				dest_bitmap = new flash.display.Bitmap (dest_image.src);
				dest_bitmap.scaleX = dest_bitmap.scaleY = scale;
				sprite.addChild (dest_bitmap);
				
				src_bitmap = new flash.display.Bitmap (src_image.src);
				src_bitmap.scaleX = src_bitmap.scaleY = scale;
				sprite.addChild (src_bitmap);
				#end
				
			case OPENGL (gl):
				OpenglRender.init(gl, config.background, src_image, scale);
				
			default:
		}
		
	}
	
	
	public override function onMouseDown (x:Float, y:Float, button:Int):Void {	
		CellAutomatation.genRandomCells(src_image , x/scale, y/scale);
		CellAutomatation.genRandomCells(dest_image, x/scale, y/scale);
	}
	
	
	public override function render (context:RenderContext):Void {
		
		// not at full fps:
		if (Timer.stamp()-lastTime > time)
		{
			lastTime = Timer.stamp();
			
			// change cell automation Rule randomly
			if (Math.random() < 0.1) rule = CellAutomatation.getRandomRule();

			// calculate next state depending on prev state
			CellAutomatation.nextLifeGeneration ( src_image, dest_image, rule, swap );
			swap = ! swap;
			
			
			switch (context) {
				case CANVAS (context):					
					if (swap) {
						ImageCanvasUtil.sync (src_image);
						context.drawImage (src_image.src , 0, 0, src_image.width  * scale, src_image.height  * scale);
					}
					else {
						ImageCanvasUtil.sync (dest_image);
						context.drawImage (dest_image.src, 0, 0, dest_image.width * scale, dest_image.height * scale);
					}
				
				case DOM (element):
					element.removeChild(element.firstChild);
					if (swap) {
						ImageCanvasUtil.sync (src_image);
						element.appendChild (src_image.src);
					}
					else {
						ImageCanvasUtil.sync (dest_image);
						element.appendChild (dest_image.src);
					}
					
				case FLASH (sprite):
					#if flash
					sprite.swapChildren(src_bitmap, dest_bitmap);
					#end
					
				case OPENGL (gl):
					if (swap)
						OpenglRender.changeTextureData(gl, src_image);
					else
						OpenglRender.changeTextureData(gl, dest_image);
						
				default:
			}
			
		}
		
		// OpenGl Draw (every frame):
		switch (context) {
			case OPENGL (gl):
				OpenglRender.render(gl, window.width, window.height);				
			default:
		}

		
	}
	
	

	
}