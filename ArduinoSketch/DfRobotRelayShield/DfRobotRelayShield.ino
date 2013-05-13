/* 
sketch to control the DFRobotMotorShield with serial commands 
*/

#include "DfRobotRelayShield.h"

#define RELAY1_PIN 2
#define RELAY2_PIN 3
#define RELAY3_PIN 4
#define RELAY4_PIN 5
#define RELAY5_PIN 6
#define RELAY6_PIN 7

//  pulse duration
int relayPulse1 = 200;
int relayPulse2 = 200;
int relayPulse3 = 200;
int relayPulse4 = 200;
int relayPulse5 = 200;
int relayPulse6 = 200;

void setup () {
  pinMode(RELAY1_PIN, OUTPUT);
  pinMode(RELAY2_PIN, OUTPUT);
  pinMode(RELAY3_PIN, OUTPUT);
  pinMode(RELAY4_PIN, OUTPUT);
  pinMode(RELAY5_PIN, OUTPUT);
  pinMode(RELAY6_PIN, OUTPUT);
  
  // initialize the serial port:
  Serial.begin(115200);

} 
void serialEvent() {
  while (Serial.available()) {
    int data=0;
    int ReqID=0;
    int NoOfSteps = 0;

    if (Serial.available() >= 2)
    {
        ReqID = Serial.read();
        data = Serial.read();
        if (ReqID == CMD_RELAY1_PULSE)
        {
           digitalWrite(RELAY1_PIN,HIGH);
	   delay(relayPulse1);
	   digitalWrite(RELAY1_PIN,LOW);
           
           /* the command was executed and respondes with ok */
           //Serial.write(RESP_OK);
        }
        if (ReqID == CMD_RELAY2_PULSE)
        {
           digitalWrite(RELAY2_PIN,HIGH);
	   delay(relayPulse2);
	   digitalWrite(RELAY2_PIN,LOW);
           
           /* the command was executed and respondes with ok */
           //Serial.write(RESP_OK);
        }
        if (ReqID == CMD_RELAY3_PULSE)
        {
           digitalWrite(RELAY3_PIN,HIGH);
	   delay(relayPulse3);
	   digitalWrite(RELAY3_PIN,LOW);
           
           /* the command was executed and respondes with ok */
           //Serial.write(RESP_OK);
        }
        if (ReqID == CMD_RELAY4_PULSE)
        {
           digitalWrite(RELAY4_PIN,HIGH);
	   delay(relayPulse4);
	   digitalWrite(RELAY4_PIN,LOW);
           
           /* the command was executed and respondes with ok */
           //Serial.write(RESP_OK);
        }
        if (ReqID == CMD_SET_RELAY1_PULSE)
        {
           relayPulse1 = data;
	             
           /* the command was executed and respondes with ok */
           //Serial.write(RESP_OK);
        }
        if (ReqID == CMD_SET_RELAY2_PULSE)
        {
           relayPulse2 = data;
	             
           /* the command was executed and respondes with ok */
           //Serial.write(RESP_OK);
        }
        if (ReqID == CMD_SET_RELAY3_PULSE)
        {
           relayPulse3 = data;
	             
           /* the command was executed and respondes with ok */
           //Serial.write(RESP_OK);
        }
        if (ReqID == CMD_SET_RELAY4_PULSE)
        {
           relayPulse4 = data;
	             
           /* the command was executed and respondes with ok */
           //Serial.write(RESP_OK);
        }
        if (ReqID == CMD_RELAY1_ON)
        {
           digitalWrite(RELAY1_PIN,HIGH);
           
           /* the command was executed and respondes with ok */
           //Serial.write(RESP_OK);
        }
        if (ReqID == CMD_RELAY1_OFF)
        {
           digitalWrite(RELAY1_PIN,LOW);
           
           /* the command was executed and respondes with ok */
           //Serial.write(RESP_OK);
        }
        if (ReqID == CMD_RELAY2_ON)
        {
           digitalWrite(RELAY2_PIN,HIGH);
           
           /* the command was executed and respondes with ok */
           //Serial.write(RESP_OK);
        }
        if (ReqID == CMD_RELAY2_OFF)
        {
           digitalWrite(RELAY2_PIN,LOW);
           
           /* the command was executed and respondes with ok */
           //Serial.write(RESP_OK);
        }
        if (ReqID == CMD_RELAY3_ON)
        {
           digitalWrite(RELAY3_PIN,HIGH);
           
           /* the command was executed and respondes with ok */
           //Serial.write(RESP_OK);
        }
        if (ReqID == CMD_RELAY3_OFF)
        {
           digitalWrite(RELAY3_PIN,LOW);
           
           /* the command was executed and respondes with ok */
           //Serial.write(RESP_OK);
        }
        if (ReqID == CMD_RELAY4_ON)
        {
           digitalWrite(RELAY4_PIN,HIGH);
           
           /* the command was executed and respondes with ok */
           //Serial.write(RESP_OK);
        }
        if (ReqID == CMD_RELAY4_OFF)
        {
           digitalWrite(RELAY4_PIN,LOW);
           
           /* the command was executed and respondes with ok */
           //Serial.write(RESP_OK);
        }
        if (ReqID == CMD_RELAY5_ON)
        {
           digitalWrite(RELAY5_PIN,HIGH);
           
           /* the command was executed and respondes with ok */
           //Serial.write(RESP_OK);
        }
        if (ReqID == CMD_RELAY5_OFF)
        {
           digitalWrite(RELAY5_PIN,LOW);
           
           /* the command was executed and respondes with ok */
           //Serial.write(RESP_OK);
        }
        if (ReqID == CMD_RELAY6_ON)
        {
           digitalWrite(RELAY6_PIN,HIGH);
           
           /* the command was executed and respondes with ok */
           //Serial.write(RESP_OK);
        }
        if (ReqID == CMD_RELAY6_OFF)
        {
           digitalWrite(RELAY6_PIN,LOW);
           
           /* the command was executed and respondes with ok */
           //Serial.write(RESP_OK);
        }
        if (ReqID == CMD_RELAY1_3_PULSE)
        {
           digitalWrite(RELAY1_PIN,HIGH);
           digitalWrite(RELAY3_PIN,HIGH);
	   delay(relayPulse1);
	   digitalWrite(RELAY1_PIN,LOW);
           digitalWrite(RELAY3_PIN,LOW);
           
           /* the command was executed and respondes with ok */
           //Serial.write(RESP_OK);
        }
        if (ReqID == CMD_RELAY2_3_PULSE)
        {
           digitalWrite(RELAY2_PIN,HIGH);
           digitalWrite(RELAY3_PIN,HIGH);
	   delay(relayPulse1);
	   digitalWrite(RELAY2_PIN,LOW);
           digitalWrite(RELAY3_PIN,LOW);
           
           /* the command was executed and respondes with ok */
           //Serial.write(RESP_OK);
        }
        
        
        
        
        
        
    }
    
  }
}
void loop () {
}
