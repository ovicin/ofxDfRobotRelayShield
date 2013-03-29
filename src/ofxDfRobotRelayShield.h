#ifndef __ofxDfRobotRelayShield__
#define __ofxDfRobotRelayShield__

#include "ofMain.h"


#define ARDUINO_CONNECTED
#define DEFAULT_SERIAL_COM "\\\\.\\COM4"
//#define DEFAULT_SERIAL_COM "COM12"

class ofxDfRobotRelayShield{
	
	public:
	
		ofxDfRobotRelayShield();
		//ofxChinoDolly(string ComPort);


		~ofxDfRobotRelayShield();
		void setup();
		unsigned char SendCommand(unsigned char command, unsigned char data);
		unsigned char PulseRelay1(void);
		unsigned char PulseRelay2(void);
		unsigned char PulseRelay3(void);
		unsigned char PulseRelay4(void);
		unsigned char SetPulseRelay1(unsigned char pulseWidth);
		unsigned char SetPulseRelay2(unsigned char pulseWidth);
		unsigned char SetPulseRelay3(unsigned char pulseWidth);
		unsigned char SetPulseRelay4(unsigned char pulseWidth);
		unsigned char Relay1On();
		unsigned char Relay2On();
		unsigned char Relay3On();
		unsigned char Relay4On();
		unsigned char Relay1Off();
		unsigned char Relay2Off();
		unsigned char Relay3Off();
		unsigned char Relay4Off();
	

	private:
		ofSerial	serial;

};

#endif