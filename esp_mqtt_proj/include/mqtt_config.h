#ifndef __MQTT_CONFIG_H__
#define __MQTT_CONFIG_H__

#define CFG_HOLDER	0x00FF5967	/* Change this value to load default configurations */
#define CFG_LOCATION	0x79	/* Please don't change or if you know what you doing */
#define MQTT_SSL_ENABLE

/*DEFAULT CONFIGURATIONS*/

#define MQTT_HOST			"192.168.111.100" //or "mqtt.yourdomain.com"
//#define MQTT_HOST			"52.80.84.224" //or "mqtt.yourdomain.com"
#define MQTT_PORT			8883
#define MQTT_BUF_SIZE		1024
#define MQTT_KEEPALIVE		120	 /*second*/

#define MQTT_CLIENT_ID		"chenwucontrol"
#define MQTT_USER			"chenwu"
#define MQTT_PASS			"chenwu"

#define STA_SSID "BL_841R"
#define STA_PASS "1234567890"
#define STA_TYPE AUTH_WPA2_PSK

#define MQTT_RECONNECT_TIMEOUT 	5	/*second*/

#define DEFAULT_SECURITY	1
#define QUEUE_BUFFER_SIZE		 		2048

#define PROTOCOL_NAMEv31	/*MQTT version 3.1 compatible with Mosquitto v0.15*/
//PROTOCOL_NAMEv311			/*MQTT version 3.11 compatible with https://eclipse.org/paho/clients/testing/*/

#endif // __MQTT_CONFIG_H__
