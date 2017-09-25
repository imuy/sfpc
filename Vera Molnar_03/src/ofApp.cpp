#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(230);
    
    path.setFilled(false); //lineのみ描画
    path.setStrokeWidth(1.8);//lineの幅を指定
    //    path.setColor(ofColor(0));//lineと塗りの色に適用
    path.setStrokeColor(ofColor(0));//パスの描画色を指定
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    rectSize = 28;
    space = 12;
    ofSeedRandom(0);
    
    ofPushMatrix();
    ofTranslate((ofGetWidth()-(rectSize*12+space*11))/2, (ofGetHeight()-(rectSize*12+space*11))/1.7);
    for (int i=0; i<12; i++) {
        for (int j=0; j<12; j++) {
            // rect
            path.lineTo(i*(rectSize+space)+ofRandom(-13, 13), j*(rectSize+space));//upper left
            path.lineTo((i*(rectSize+space))+rectSize+ofRandom(-13, 13), j*(rectSize+space));//upper right
            path.lineTo((i*(rectSize+space))+rectSize+ofRandom(-13, 13), j*(rectSize+space)+rectSize);//lower right
            path.lineTo(i*(rectSize+space)+ofRandom(-13, 13), j*(rectSize+space)+rectSize);//lower left
            path.close();
            
            path.draw();
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
