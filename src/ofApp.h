#pragma once

#include "ofMain.h"
#include "ofxPoissonFill.hpp"

class ofApp : public ofBaseApp{
	public:
		void setup(string filepath);
		void update();
		void draw(string destinationPath);
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

        PoissonFill pf;   // the poisson filler
        ofImage img;      // draw some image to input

};
