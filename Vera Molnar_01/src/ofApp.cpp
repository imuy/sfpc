#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(230);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    rectSize = 40;
    space = 15;
    ofSeedRandom(0);
//    ofSetRectMode(OF_RECTMODE_CENTER);

    ofPushMatrix();
    ofTranslate((ofGetWidth()-(rectSize*10+space*9))/2, (ofGetHeight()-(rectSize*10+space*9))/2);
    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            ofSetColor(0);
            ofNoFill();
            ofDrawRectangle(i*(rectSize+space)+ofRandom(-5, 5), j*(rectSize+space)+ofRandom(-5, 5), rectSize, rectSize);
//            cout << i*(rectSize+space) << endl;
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
