#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    video.load("Flowers.mp4");
//    video.setLoopState(OF_LOOP_NONE);
//    video.play();
    
    mix.allocate(640, 360, OF_IMAGE_COLOR);
    totalNumFrame = video.getTotalNumFrames();
    
    for (int i = 0; i < 640*360*3; i++){
        pixelSum[i] = 0;
    }
    
    frameNum = 1;
}

//--------------------------------------------------------------
void ofApp::update(){

    video.update();
    
    if (video.isFrameNew()) {
        pixels = video.getPixels();
        
        for (int x = 0; x < 640; x++){
            for (int y = 0; y < 360; y++){
                ofColor c = pixels.getColor(x,y);
                int index = (y * 640 + x)*3;
                pixelSum[index] += c.r;
                pixelSum[index+1] += c.g;
                pixelSum[index+2] += c.b;
            }
        }
        
        for (int i = 0; i < 640; i++){
            for (int j = 0; j < 360; j++){
                int index = (j*640 + i) * 3;
                averageColor.r = (float)pixelSum[index] / (float)frameNum;
                averageColor.g = (float)pixelSum[index+1] / (float)frameNum;
                averageColor.b = (float)pixelSum[index+2] / (float)frameNum;
                mix.setColor(i,j, averageColor);//setColor(int x, int y, const ofColor_<PixelType>& color);
            }
        }
        frameNum++;
    }
    mix.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    video.draw(0, 360);
    
    mix.draw(0, 0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == ' ') {
        video.play();
    }
    if (key == '1') {
        video.firstFrame();
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
