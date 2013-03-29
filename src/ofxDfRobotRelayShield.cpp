#include "ofxDfRobotRelayShield.h"
#include "DfRobotRelayShield.h"

ofxDfRobotRelayShield::ofxDfRobotRelayShield()
{
	
}

ofxDfRobotRelayShield::~ofxDfRobotRelayShield()
{
	
}

/*void ofxChinoDolly::waitConfirmation(){

	while(1!= serial.readByte());
	
}*/

void ofxDfRobotRelayShield::setup()
{
	serial.listDevices();
	vector <ofSerialDeviceInfo> deviceList = serial.getDeviceList();
	// this should be set to whatever com port your serial device is connected to.
	// (ie, COM4 on a pc, /dev/tty.... on linux, /dev/tty... on a mac)
	// arduino users check in arduino app....
	//serial.setup(0, baud); //open the first device
	int baud=9600;
	ofxDfRobotRelayShield::serial.setup(DEFAULT_SERIAL_COM, baud); // windows example 

}

unsigned char ofxDfRobotRelayShield::SendCommand(unsigned char command,unsigned char data)
{

	ofxDfRobotRelayShield::serial.writeByte(command);
	ofxDfRobotRelayShield::serial.writeByte(data);
	while(1!= serial.readByte());

	return 0;
}

unsigned char ofxDfRobotRelayShield::PulseRelay1()
{
	SendCommand(CMD_RELAY1_PULSE,0);
	return 0;
}

unsigned char ofxDfRobotRelayShield::PulseRelay2()
{
	SendCommand(CMD_RELAY2_PULSE,0);
	return 0;
}

unsigned char ofxDfRobotRelayShield::PulseRelay3()
{
	SendCommand(CMD_RELAY3_PULSE,0);
	return 0;
}

unsigned char ofxDfRobotRelayShield::PulseRelay4()
{
	SendCommand(CMD_RELAY4_PULSE,0);
	return 0;
}

unsigned char ofxDfRobotRelayShield::SetPulseRelay1(unsigned char pulseWidth)
{
	SendCommand(CMD_SET_RELAY1_PULSE,pulseWidth);
	return 0;
}

unsigned char ofxDfRobotRelayShield::SetPulseRelay2(unsigned char pulseWidth)
{
	SendCommand(CMD_SET_RELAY2_PULSE,pulseWidth);
	return 0;
}

unsigned char ofxDfRobotRelayShield::SetPulseRelay3(unsigned char pulseWidth)
{
	SendCommand(CMD_SET_RELAY3_PULSE,pulseWidth);
	return 0;
}

unsigned char ofxDfRobotRelayShield::SetPulseRelay4(unsigned char pulseWidth)
{
	SendCommand(CMD_SET_RELAY4_PULSE,pulseWidth);
	return 0;
}

unsigned char ofxDfRobotRelayShield::Relay1On()
{
	SendCommand(CMD_RELAY1_ON,0);
	return 0;
}

unsigned char ofxDfRobotRelayShield::Relay2On()
{
	SendCommand(CMD_RELAY2_ON,0);
	return 0;
}

unsigned char ofxDfRobotRelayShield::Relay3On()
{
	SendCommand(CMD_RELAY3_ON,0);
	return 0;
}

unsigned char ofxDfRobotRelayShield::Relay4On()
{
	SendCommand(CMD_RELAY4_ON,0);
	return 0;
}

unsigned char ofxDfRobotRelayShield::Relay1Off()
{
	SendCommand(CMD_RELAY1_OFF,0);
	return 0;
}

unsigned char ofxDfRobotRelayShield::Relay2Off()
{
	SendCommand(CMD_RELAY2_OFF,0);
	return 0;
}

unsigned char ofxDfRobotRelayShield::Relay3Off()
{
	SendCommand(CMD_RELAY3_OFF,0);
	return 0;
}

unsigned char ofxDfRobotRelayShield::Relay4Off()
{
	SendCommand(CMD_RELAY4_OFF,0);
	return 0;
}