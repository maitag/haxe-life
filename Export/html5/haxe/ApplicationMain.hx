import Main;
import lime.Assets;


class ApplicationMain {
	
	
	public static var config:lime.app.Config;
	public static var preloader:lime.app.Preloader;
	
	private static var app:lime.app.Application;
	
	
	public static function create ():Void {
		
		preloader = new lime.app.Preloader ();
		preloader.onComplete = start;
		preloader.create (config);
		
		#if js
		var urls = [];
		var types = [];
		
		
		urls.push ("assets/jaz.png");
		types.push (AssetType.IMAGE);
		
		
		
		preloader.load (urls, types);
		#end
		
	}
	
	
	public static function main () {
		
		config = {
			
			antialiasing: Std.int (0),
			background: Std.int (0),
			borderless: false,
			depthBuffer: false,
			fps: Std.int (0),
			fullscreen: false,
			height: Std.int (800),
			orientation: "",
			resizable: true,
			stencilBuffer: false,
			title: "nextLifeGeneration",
			vsync: false,
			width: Std.int (1200),
			
		}
		
		#if js
		#if munit
		embed (null, 1200, 800, "000000");
		#end
		#else
		create ();
		#end
		
	}
	
	
	public static function start ():Void {
		
		app = new Main ();
		app.create (config);
		
		var result = app.exec ();
		
		#if (sys && !nodejs)
		Sys.exit (result);
		#end
		
	}
	
	
	#if neko
	@:noCompletion public static function __init__ () {
		
		var loader = new neko.vm.Loader (untyped $loader);
		loader.addPath (haxe.io.Path.directory (Sys.executablePath ()));
		loader.addPath ("./");
		loader.addPath ("@executable_path/");
		
	}
	#end
	
	
}