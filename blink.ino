#define BLYNK_PRINT Serial
#include <Adafruit_ESP8266.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <MQ2Lib.h>
char auth[] = "9705bab711004cb4a925f2326c85595a";
char ssid[] = "kayal";
char pass[] = "iotkayal";
int pin = A0;
float lpg = 0, co = 0, smoke = 0;
BlynkTimer timer;
MQ2 mq2(pin, true);
void sendSensor()
{
  Blynk.virtualWrite(V1, lpg);
  delay (200);
  Blynk.virtualWrite(V2, co);
  delay (200);
  Blynk.virtualWrite(V3, smoke);
 }
void setup()
{
  // Debug console
  Serial.begin(9600);
  mq2.begin();
  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
  timer.setInterval(1000L, sendSensor);
}
void loop()
{
  Blynk.run();
  timer.run();
  float* values= mq2.read(true); //set it false if you don't want to print the values in the Serial
  //Reading specific values:
  //lpg = values[0];
  lpg = mq2.readLPG();
  //co = values[1];
  co = mq2.readCO();
  //smoke = values[2];
  smoke = mq2.readSmoke();
  Serial.print ("CO: "); // output to the serial port
  Serial.println (co);
   Serial.print ("LPG: "); // output to the serial port
  Serial.println (lpg);
   Serial.print ("Smoke: "); // output to the serial port
  Serial.println (smoke);
  delay(100);
}
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <MQ2Lib.h>
char auth[] = "9705bab711004cb4a925f2326c85595a";
char ssid[] = "kayal";
char pass[] = "iotkayal";
int pin = A0;
float lpg = 0, co = 0, smoke = 0;
BlynkTimer timer;
MQ2 mq2(pin, true);
void sendSensor()
{
  Blynk.virtualWrite(V1, lpg);
  delay (200);
  Blynk.virtualWrite(V2, co);
  delay (200);
  Blynk.virtualWrite(V3, smoke);
 }
void setup()
{
  // Debug console
  Serial.begin(9600);
  mq2.begin();
  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
  timer.setInterval(1000L, sendSensor);
}
void loop()
{
  Blynk.run();
  timer.run();
  float* values= mq2.read(true); //set it false if you don't want to print the values in the Serial
  //Reading specific values:
  //lpg = values[0];
  lpg = mq2.readLPG();
  //co = values[1];
  co = mq2.readCO();
  //smoke = values[2];
  smoke = mq2.readSmoke();
  Serial.print ("CO: "); // output to the serial port
  Serial.println (co);
   Serial.print ("LPG: "); // output to the serial port
  Serial.println (lpg);
   Serial.print ("Smoke: "); // output to the serial port
  Serial.println (smoke);
  delay(100);
}
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <MQ2Lib.h>
char auth[] = "9705bab711004cb4a925f2326c85595a";
char ssid[] = "kayal";
char pass[] = "iotkayal";
int pin = A0;
float lpg = 0, co = 0, smoke = 0;
BlynkTimer timer;
MQ2 mq2(pin, true);
void sendSensor()
{
  Blynk.virtualWrite(V1, lpg);
  delay (200);
  Blynk.virtualWrite(V2, co);
  delay (200);
  Blynk.virtualWrite(V3, smoke);
 }
void setup()
{
  // Debug console
  Serial.begin(9600);
  mq2.begin();
  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
  timer.setInterval(1000L, sendSensor);
}
void loop()
{
  Blynk.run();
  timer.run();
  float* values= mq2.read(true); //set it false if you don't want to print the values in the Serial
  //Reading specific values:
  //lpg = values[0];
  lpg = mq2.readLPG();
  //co = values[1];
  co = mq2.readCO();
  //smoke = values[2];
  smoke = mq2.readSmoke();
  Serial.print ("CO: "); // output to the serial port
  Serial.println (co);
   Serial.print ("LPG: "); // output to the serial port
  Serial.println (lpg);
   Serial.print ("Smoke: "); // output to the serial port
  Serial.println (smoke);
  delay(100);
}
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <MQ2Lib.h>
char auth[] = "9705bab711004cb4a925f2326c85595a";
char ssid[] = "kayal";
char pass[] = "iotkayal";
int pin = A0;
float lpg = 0, co = 0, smoke = 0;
BlynkTimer timer;
MQ2 mq2(pin, true);
void sendSensor()
{
  Blynk.virtualWrite(V1, lpg);
  delay (200);
  Blynk.virtualWrite(V2, co);
  delay (200);
  Blynk.virtualWrite(V3, smoke);
 }
void setup()
{
  // Debug console
  Serial.begin(9600);
  mq2.begin();
  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
  timer.setInterval(1000L, sendSensor);
}
void loop()
{
  Blynk.run();
  timer.run();
  float* values= mq2.read(true); //set it false if you don't want to print the values in the Serial
  //Reading specific values:
  //lpg = values[0];
  lpg = mq2.readLPG();
  //co = values[1];
  co = mq2.readCO();
  //smoke = values[2];
  smoke = mq2.readSmoke();
  Serial.print ("CO: "); // output to the serial port
  Serial.println (co);
   Serial.print ("LPG: "); // output to the serial port
  Serial.println (lpg);
   Serial.print ("Smoke: "); // output to the serial port
  Serial.println (smoke);
  delay(100);
}
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <MQ2Lib.h>
char auth[] = "9705bab711004cb4a925f2326c85595a";
char ssid[] = "kayal";
char pass[] = "iotkayal";
int pin = A0;
float lpg = 0, co = 0, smoke = 0;
BlynkTimer timer;
MQ2 mq2(pin, true);
void sendSensor()
{
  Blynk.virtualWrite(V1, lpg);
  delay (200);
  Blynk.virtualWrite(V2, co);
  delay (200);
  Blynk.virtualWrite(V3, smoke);
 }
void setup()
{
  // Debug console
  Serial.begin(9600);
  mq2.begin();
  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
  timer.setInterval(1000L, sendSensor);
}
void loop()
{
  Blynk.run();
  timer.run();
  float* values= mq2.read(true); //set it false if you don't want to print the values in the Serial
  //Reading specific values:
  //lpg = values[0];
  lpg = mq2.readLPG();
  //co = values[1];
  co = mq2.readCO();
  //smoke = values[2];
  smoke = mq2.readSmoke();
  Serial.print ("CO: "); // output to the serial port
  Serial.println (co);
   Serial.print ("LPG: "); // output to the serial port
  Serial.println (lpg);
   Serial.print ("Smoke: "); // output to the serial port
  Serial.println (smoke);
  delay(100);
}
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <MQ2Lib.h>
char auth[] = "9705bab711004cb4a925f2326c85595a";
char ssid[] = "kayal";
char pass[] = "iotkayal";
int pin = A0;
float lpg = 0, co = 0, smoke = 0;
BlynkTimer timer;
MQ2 mq2(pin, true);
void sendSensor()
{
  Blynk.virtualWrite(V1, lpg);
  delay (200);
  Blynk.virtualWrite(V2, co);
  delay (200);
  Blynk.virtualWrite(V3, smoke);
 }
void setup()
{
  // Debug console
  Serial.begin(9600);
  mq2.begin();
  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
  timer.setInterval(1000L, sendSensor);
}
void loop()
{
  Blynk.run();
  timer.run();
  float* values= mq2.read(true); //set it false if you don't want to print the values in the Serial
  //Reading specific values:
  //lpg = values[0];
  lpg = mq2.readLPG();
  //co = values[1];
  co = mq2.readCO();
  //smoke = values[2];
  smoke = mq2.readSmoke();
  Serial.print ("CO: "); // output to the serial port
  Serial.println (co);
   Serial.print ("LPG: "); // output to the serial port
  Serial.println (lpg);
   Serial.print ("Smoke: "); // output to the serial port
  Serial.println (smoke);
  delay(100);
}
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <MQ2Lib.h>
char auth[] = "9705bab711004cb4a925f2326c85595a";
char ssid[] = "kayal";
char pass[] = "iotkayal";
int pin = A0;
float lpg = 0, co = 0, smoke = 0;
BlynkTimer timer;
MQ2 mq2(pin, true);
void sendSensor()
{
  Blynk.virtualWrite(V1, lpg);
  delay (200);
  Blynk.virtualWrite(V2, co);
  delay (200);
  Blynk.virtualWrite(V3, smoke);
 }
void setup()
{
  // Debug console
  Serial.begin(9600);
  mq2.begin();
  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
  timer.setInterval(1000L, sendSensor);
}
void loop()
{
  Blynk.run();
  timer.run();
  float* values= mq2.read(true); //set it false if you don't want to print the values in the Serial
  //Reading specific values:
  //lpg = values[0];
  lpg = mq2.readLPG();
  //co = values[1];
  co = mq2.readCO();
  //smoke = values[2];
  smoke = mq2.readSmoke();
  Serial.print ("CO: "); // output to the serial port
  Serial.println (co);
   Serial.print ("LPG: "); // output to the serial port
  Serial.println (lpg);
   Serial.print ("Smoke: "); // output to the serial port
  Serial.println (smoke);
  delay(100);
}
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <MQ2Lib.h>
char auth[] = "9705bab711004cb4a925f2326c85595a";
char ssid[] = "kayal";
char pass[] = "iotkayal";
int pin = A0;
float lpg = 0, co = 0, smoke = 0;
BlynkTimer timer;
MQ2 mq2(pin, true);
void sendSensor()
{
  Blynk.virtualWrite(V1, lpg);
  delay (200);
  Blynk.virtualWrite(V2, co);
  delay (200);
  Blynk.virtualWrite(V3, smoke);
 }
void setup()
{
  // Debug console
  Serial.begin(9600);
  mq2.begin();
  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
  timer.setInterval(1000L, sendSensor);
}
void loop()
{
  Blynk.run();
  timer.run();
  float* values= mq2.read(true); //set it false if you don't want to print the values in the Serial
  //Reading specific values:
  //lpg = values[0];
  lpg = mq2.readLPG();
  //co = values[1];
  co = mq2.readCO();
  //smoke = values[2];
  smoke = mq2.readSmoke();
  Serial.print ("CO: "); // output to the serial port
  Serial.println (co);
   Serial.print ("LPG: "); // output to the serial port
  Serial.println (lpg);
   Serial.print ("Smoke: "); // output to the serial port
  Serial.println (smoke);
  delay(100);
}
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <MQ2Lib.h>
char auth[] = "9705bab711004cb4a925f2326c85595a";
char ssid[] = "kayal";
char pass[] = "iotkayal";
int pin = A0;
float lpg = 0, co = 0, smoke = 0;
BlynkTimer timer;
MQ2 mq2(pin, true);
void sendSensor()
{
  Blynk.virtualWrite(V1, lpg);
  delay (200);
  Blynk.virtualWrite(V2, co);
  delay (200);
  Blynk.virtualWrite(V3, smoke);
 }
void setup()
{
  // Debug console
  Serial.begin(9600);
  mq2.begin();
  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
  timer.setInterval(1000L, sendSensor);
}
void loop()
{
  Blynk.run();
  timer.run();
  float* values= mq2.read(true); //set it false if you don't want to print the values in the Serial
  //Reading specific values:
  //lpg = values[0];
  lpg = mq2.readLPG();
  //co = values[1];
  co = mq2.readCO();
  //smoke = values[2];
  smoke = mq2.readSmoke();
  Serial.print ("CO: "); // output to the serial port
  Serial.println (co);
   Serial.print ("LPG: "); // output to the serial port
  Serial.println (lpg);
   Serial.print ("Smoke: "); // output to the serial port
  Serial.println (smoke);
  delay(100);
}
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <MQ2Lib.h>
char auth[] = "9705bab711004cb4a925f2326c85595a";
char ssid[] = "kayal";
char pass[] = "iotkayal";
int pin = A0;
float lpg = 0, co = 0, smoke = 0;
BlynkTimer timer;
MQ2 mq2(pin, true);
void sendSensor()
{
  Blynk.virtualWrite(V1, lpg);
  delay (200);
  Blynk.virtualWrite(V2, co);
  delay (200);
  Blynk.virtualWrite(V3, smoke);
 }
void setup()
{
  // Debug console
  Serial.begin(9600);
  mq2.begin();
  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
  timer.setInterval(1000L, sendSensor);
}
void loop()
{
  Blynk.run();
  timer.run();
  float* values= mq2.read(true); //set it false if you don't want to print the values in the Serial
  //Reading specific values:
  //lpg = values[0];
  lpg = mq2.readLPG();
  //co = values[1];
  co = mq2.readCO();
  //smoke = values[2];
  smoke = mq2.readSmoke();
  Serial.print ("CO: "); // output to the serial port
  Serial.println (co);
   Serial.print ("LPG: "); // output to the serial port
  Serial.println (lpg);
   Serial.print ("Smoke: "); // output to the serial port
  Serial.println (smoke);
  delay(100);
}
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <MQ2Lib.h>
char auth[] = "9705bab711004cb4a925f2326c85595a";
char ssid[] = "kayal";
char pass[] = "iotkayal";
int pin = A0;
float lpg = 0, co = 0, smoke = 0;
BlynkTimer timer;
MQ2 mq2(pin, true);
void sendSensor()
{
  Blynk.virtualWrite(V1, lpg);
  delay (200);
  Blynk.virtualWrite(V2, co);
  delay (200);
  Blynk.virtualWrite(V3, smoke);
 }
void setup()
{
  // Debug console
  Serial.begin(9600);
  mq2.begin();
  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
  timer.setInterval(1000L, sendSensor);
}
void loop()
{
  Blynk.run();
  timer.run();
  float* values= mq2.read(true); //set it false if you don't want to print the values in the Serial
  //Reading specific values:
  //lpg = values[0];
  lpg = mq2.readLPG();
  //co = values[1];
  co = mq2.readCO();
  //smoke = values[2];
  smoke = mq2.readSmoke();
  Serial.print ("CO: "); // output to the serial port
  Serial.println (co);
   Serial.print ("LPG: "); // output to the serial port
  Serial.println (lpg);
   Serial.print ("Smoke: "); // output to the serial port
  Serial.println (smoke);
  delay(100);
}
