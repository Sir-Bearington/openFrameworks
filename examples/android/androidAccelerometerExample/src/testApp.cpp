#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	// initialize the accelerometer
	ofxAccelerometer.setup();

	font.loadFont("verdana.ttf",14);
	ofBackground(255,255,255);
}

//--------------------------------------------------------------
void testApp::update(){
	ofSetColor(0,0,0);
	accel = ofxAccelerometer.getForce();
	sprintf(buf,"g(x,y,z)= (%f, %f, %f)",accel.x,accel.y,accel.z);
}

//--------------------------------------------------------------
void testApp::draw(){
	font.drawString(buf,20,20);
}

//--------------------------------------------------------------
void testApp::keyPressed  (int key){ 
	
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){ 
	
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::touchDown(int x, int y, int id){

}

//--------------------------------------------------------------
void testApp::touchMoved(int x, int y, int id){

}

//--------------------------------------------------------------
void testApp::touchUp(int x, int y, int id){

}

//--------------------------------------------------------------
void testApp::touchDoubleTap(int x, int y, int id){

}

//--------------------------------------------------------------
void testApp::touchCancelled(int x, int y, int id){

}

//--------------------------------------------------------------
void testApp::swipe(ofxAndroidSwipeDir swipeDir, int id){

}

//--------------------------------------------------------------
void testApp::pause(){

}

//--------------------------------------------------------------
void testApp::stop(){

}

//--------------------------------------------------------------
void testApp::resume(){

}

//--------------------------------------------------------------
void testApp::reloadTextures(){

}

//--------------------------------------------------------------
bool testApp::backPressed(){
	return false;
}

//--------------------------------------------------------------
void testApp::okPressed(){

}

//--------------------------------------------------------------
void testApp::cancelPressed(){

}
