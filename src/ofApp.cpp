#include "ofApp.h"
#include "iostream"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
    if(player.isBonusActive()) player.stopBonusByTimer();
    player.calculateVelocity();
    player.move();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofDrawRectRounded(player.getPosition(), player.getWidth(), platformHeight, platformHeight);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == OF_KEY_LEFT)
        player.setDirection(Directions::left);
    if(key == OF_KEY_RIGHT)
        player.setDirection(Directions::right);
    if(key == ' '){
        bonus_ = new Bonus();
        player.startBonus(*bonus_);
        delete bonus_;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if(key == OF_KEY_LEFT || key == OF_KEY_RIGHT)
        player.stop();
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
