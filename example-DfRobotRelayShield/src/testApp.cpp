#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

	mouseDown = false;
	relayShield.setup();
	gui = new ofxUICanvas(0,0,620,220);
	gui->addWidgetDown(new ofxUIToggle(16, 16, false, "FULLSCREEN"));
    gui->addWidgetDown(new ofxUILabel("DfRobotRelayShieldControl", OFX_UI_FONT_LARGE)); 

    gui->addWidgetDown(new ofxUIButton(16, 16, false, "Relay1Pulse"));
	gui->addWidgetRight(new ofxUIButton(16, 16, false, "Relay2Pulse"));
	gui->addWidgetRight(new ofxUIButton(16, 16, false, "Relay3Pulse"));
	gui->addWidgetRight(new ofxUIButton(16, 16, false, "Relay4Pulse"));

	ofAddListener(gui->newGUIEvent, this, &testApp::guiEvent); 
}

void testApp::exit()
{
    //gui->saveSettings("GUI/guiSettings.xml"); 
    delete gui; 
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
	if (key == '1'){
		relayShield.PulseRelay1();
	} else if (key == '2'){
			relayShield.PulseRelay2();
	} else if (key == '3'){
			relayShield.PulseRelay3();
	} else if (key == '4'){
			relayShield.PulseRelay4();
	}

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
	mouseDown = true;

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
	mouseDown = false;
	
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}

//--------------------------------------------------------------
void testApp::guiEvent(ofxUIEventArgs &e)
{	
	if(e.widget->getName() == "FULLSCREEN")
    {
        ofxUIToggle *toggle = (ofxUIToggle *) e.widget;
        ofSetFullscreen(toggle->getValue());   
    }
	else if(e.widget->getName() == "Relay1Pulse")
    {
		if (mouseDown) relayShield.PulseRelay1();
    }
	else if(e.widget->getName() == "Relay2Pulse")
    {
		if (mouseDown)relayShield.PulseRelay2();
    }
	else if(e.widget->getName() == "Relay3Pulse")
    {
		if (mouseDown)relayShield.PulseRelay3();
    }
	else if(e.widget->getName() == "Relay4Pulse")
    {
		if (mouseDown)relayShield.PulseRelay4();
    }
	
}