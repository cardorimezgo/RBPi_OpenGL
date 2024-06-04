#include "ofMain.h"
#include "ofApp.h"

//================== Running OpenGL on RBPi 4======================================================
int main( ){

#ifdef OF_TARGET_OPENGLES
	ofGLESWindowSettings settings;
	settings.glesVersion = 2;
#else
	ofGLWindowSettings settings;
	settings.setGLVersion(3, 1); // Set OpenGL version to 3.1
#endif
	settings.setSize(1920, 1080);
	
	settings.windowMode = OF_FULLSCREEN; //can also be OF_WINDOW

	auto window = ofCreateWindow(settings);

	ofRunApp(window, make_shared<ofApp>());
	ofRunMainLoop();

}
