#include "ofMain.h"
#include "ofApp.h"
#include <iostream>

//========================================================================
int main(int argc, char *argv[]){

	ofSetupOpenGL(1024,768, OF_WINDOW);			// <-------- setup the GL context
    vector<string> args;
    
    for (int i = 1; i < argc; i++) {
        ofLog(OF_LOG_NOTICE) << "the number is " <<ofToString(argv[i]);
        args.push_back(ofToString(argv[i]));
    }
    auto app = new ofApp();
    app->setup(args[0]);
    app->update();
    app->draw(args[1]);
}
