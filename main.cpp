#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){

#ifdef OF_TARGET_OPENGLES
	ofGLESWindowSettings settings;
	settings.glesVersion = 2;
#else
	ofGLWindowSettings settings;
	settings.setGLVersion(3, 2);
#endif
	settings.setSize(1920, 1080);
	//settings.setSize(720, 1280);
	settings.windowMode = OF_FULLSCREEN; //can also be OF_WINDOW

	auto window = ofCreateWindow(settings);

	ofRunApp(window, make_shared<ofApp>());
	ofRunMainLoop();

}
// TODO:
