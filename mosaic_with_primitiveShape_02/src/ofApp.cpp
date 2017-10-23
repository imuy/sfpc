#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(255);
    myImage.load("Statue-of-Liberty.jpg");
    myImage.setImageType(OF_IMAGE_GRAYSCALE);
    skip = 10;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
//    ofSetColor(0);
    unsigned char * data = myImage.getPixels().getData();
    
    for (int i=0; i< myImage.getWidth(); i+=skip) {
        for (int j=0; j< myImage.getHeight(); j+=skip) {
            
            // y * w + x;
            int index = j* myImage.getWidth() + i;
            int brightness = data[index];
//            ofDrawCircle(i, j, ofMap(brightness, 0, 255, 5, 2));
            
            float pct = 1.0 - brightness / 255.0f;
            
            int num = int(pct*8);
            switch (num) {
                case 0:
                    ofPushStyle();
                    ofNoFill();
                    ofSetColor(0, 240, 170);
                    ofDrawCircle(i, j, 2);
                    ofPopStyle();
                    break;
                case 1:
                    ofPushStyle();
                    ofNoFill();
                    ofSetColor(255, 230, 0);
                    ofDrawRectangle(i, j, 4, 4);
                    ofPopStyle();
                    break;
                case 2:
                    ofPushStyle();
                    ofSetColor(255, 170, 0);
                    ofSetCircleResolution(3);
                    ofDrawCircle(i, j, 4);
                    ofPopStyle();
                    break;
                case 3:
                    ofSetColor(230, 0, 200);
                    ofDrawCircle(i, j, 3);
                    break;
                case 4:
                    ofPushStyle();
                    ofNoFill();
                    ofSetColor(150, 0, 255);
                    ofDrawRectangle(i, j, 5, 5);
                    ofPopStyle();
                    break;
                case 5:
                    ofPushStyle();
                    ofSetColor(60, 0, 255);
                    ofSetCircleResolution(3);
                    ofDrawCircle(i, j, 5);
                    ofPopStyle();
                    break;
                case 6:
//                    ofPushStyle();
//                    ofNoFill();
                    ofSetColor(0, 150, 255);
                    ofDrawCircle(i, j, 3.5);
//                    ofPopStyle();
                    break;
                case 7:
                    ofSetColor(0, 0, 255);
                    ofDrawRectangle(i, j, 7, 7);
                    break;
                default:
                    break;
            }
        }
    }
    
    //    myImage.draw(0,0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    switch (key) {
        case '1':
            skip = 8;
            break;
        case '2':
            skip = 10;
            break;
        case '3':
            skip = 13;
            break;
            
        default:
            break;
    }
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
