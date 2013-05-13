#ifndef __DfRobotRelayShield__
#define __DfRobotRelayShield__


/*
	Definitions of the command IDs
*/

#define CMD_RELAY1_PULSE	0
#define CMD_RELAY2_PULSE	1
#define CMD_RELAY3_PULSE	2
#define CMD_RELAY4_PULSE	3
#define CMD_SET_RELAY1_PULSE	4
#define CMD_SET_RELAY2_PULSE	5
#define CMD_SET_RELAY3_PULSE	6
#define CMD_SET_RELAY4_PULSE	7
#define CMD_RELAY1_ON    	8
#define CMD_RELAY1_OFF    	9
#define CMD_RELAY2_ON    	10
#define CMD_RELAY2_OFF    	11
#define CMD_RELAY3_ON    	12
#define CMD_RELAY3_OFF    	13
#define CMD_RELAY4_ON    	14
#define CMD_RELAY4_OFF    	15
#define CMD_RELAY1_3_PULSE	16
#define CMD_RELAY2_3_PULSE	17
#define CMD_RELAY5_ON    	18
#define CMD_RELAY5_OFF    	19
#define CMD_RELAY6_ON    	20
#define CMD_RELAY6_OFF    	21

/*
definition of response codes
*/
#define RESP_OK 1


/*
	Definition of the communication messages
*/

typedef struct
{
	unsigned char ReqId;
	unsigned char Val;
}tRelayShieldRequest;

/* TODO
typedef struct
{
	unsigned char RespCode;
	unsigned char RespVal;
}tRelayShieldResponse;
*/
#endif
