#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(255);
    myImage.load("WPCL-10983.jpg");
    myImage.setImageType(OF_IMAGE_GRAYSCALE);
    pixelString = " .+*xam@";
//    pixelString = "01234567";
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    int left = (ofGetWidth()-myImage.getWidth())/2;
    int top = (ofGetHeight()-myImage.getHeight())/2;
    ofTranslate(left,top);
    unsigned char * data = myImage.getPixels().getData();
    int skip = 7;
//    ofSetColor(0);
    
    for (int i=0; i< myImage.getWidth(); i+=skip) {
        for (int j=0; j< myImage.getHeight(); j+=skip) {
            
            // y * w + x;
            int index = j* myImage.getWidth() + i;
            int brightness = data[index];
            
            float pct = 1.0 - brightness / 255.0f;
            
            //color
            ofColor color;
            color.setHsb(0, 255, 200);
            float hue = ofMap( int(pct*8), 1, 8, 120, 255 );
            color.setHue( hue );
            ofSetColor( color );
            
            //string
            string str = pixelString.substr(int(pct*8), 1);
            ofDrawBitmapString(str, i, j);
        }
    }
//    myImage.draw(0,0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
