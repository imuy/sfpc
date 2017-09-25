#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(255,255,245);
    ofEnableAlphaBlending();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    rectSize = 110;
    space = 5;
    ofSeedRandom(2);
    
    ofPushMatrix();
    ofTranslate((ofGetWidth()-(rectSize*3+space*2))/2, (ofGetHeight()-(rectSize*3+space*2))/3);
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            ofPushMatrix();
                ofSetColor(255, 20, 0, 190);
                ofRotateZ(ofRandom(-3, 3));
                ofDrawRectangle(i*(rectSize+space)+ofRandom(-15, 15), j*(rectSize+space)+ofRandom(-15, 15), rectSize, rectSize);
            ofPopMatrix();
        }
    }
    ofPopMatrix();
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
