#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	teste.Setup(ofVec2f(ofGetWidth() / 2.0f, ofGetHeight() / 2.0f), ofVec2f(ofGetMouseX(), ofGetMouseY()), 120.0f, 200.0f, 2.0f, 1.0f / 100.0f, "particula.png", 30.0f);
	testeGui.Init();
}

//--------------------------------------------------------------
void ofApp::update(){
	ofSetBackgroundColor(40, 40, 40);
	testeGui.Update(teste);
	teste.Update(ofGetLastFrameTime());
}

//--------------------------------------------------------------
void ofApp::draw(){
	testeGui.Draw();
	teste.Draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
	testeGui.SetMousePosition(x, y);
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
