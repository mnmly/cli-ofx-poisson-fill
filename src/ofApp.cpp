#include "ofApp.h"
#define WIDTH 
#define HEIGHT 512
//--------------------------------------------------------------
void ofApp::setup(string filepath){

  img.load(filepath); // load the test image
  
  pf.init(img.getWidth(),img.getHeight());

}

//--------------------------------------------------------------
void ofApp::update(){
}


//--------------------------------------------------------------
void ofApp::draw(string destinationPath){

    pf.process(img.getTexture());

    ofPixels pixels;
    pf.getTexture().readToPixels(pixels);
    ofImage image;
    image.setFromPixels(pixels);
    image.saveImage(destinationPath);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}