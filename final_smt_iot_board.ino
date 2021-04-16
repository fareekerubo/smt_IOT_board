#include <amt1001_ino.h>
#include <MS5611.h>
#include <SoftwareSerial.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include "PMS.h"
#include <Wire.h>
SoftwareSerial SIM800(9, 11);
#define ONE_WIRE_BUS 12
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);


//dust sensor
PMS pms(Serial);
PMS::DATA data;

//Pressure sensor
MS5611 ms5611;

double referencePressure;


float temperature;
float temperature1;
float temperature4;
float hum_temperature;
float t_vol;
float dust_level;
float  pressure_one;


uint16_t humidity;
uint16_t humidity2;
int tempPin = A0;
int tempPin1 = A2;
int humPin = A1;
int humPin2 = A3;



int gsm_reset = 10;



int state = 0;
int check_state;
String dataMessage = "";
String dataMessage1 = "";
String dataMessage2 = "";
String dataMessage3 = "";
String dataMessage4 = "";
String dataMessage5 = "";
String dataMessage6 = "";
String dataMessage7= "";
String hum_datamessage = "";
String dustMessage="";
String  PressureMessage = "";
String dataMessage8 = "";


const int ledPin = 8; //LED pins for temperature control
//const int ledPin2 = ;
//const int ledPin2 = 7;



String incomingString;
char incomingChar;
unsigned long current_time = 0;
unsigned long previous_time = 0;
float t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, h2, h3, h4, h5, h6, h7,d1,d2,d3,d4,d5,d6,p1,p2,p3,p4,p5,p6;
float avg = 0;
float avg1 = 0;
float avg2 = 0;
float avg3 = 0;
float avg4 = 0;
uint16_t step;
uint16_t step1;
uint16_t step2;

//for the ds18b20 sensor
float average;// define a variable to store the average
float reading;// reading from  first sensor
float reading1;// reading from second senso
double humidity_average;
float dustlevel;
float realPressure;




void setup()
{
  Serial.begin(9600);
  sensors.begin();
  Serial.print("Initializing....");
  delay(20000);
  pinMode(tempPin, INPUT);
  pinMode(tempPin1, INPUT);
  pinMode(humPin, INPUT);
  pinMode(humPin2, INPUT);
  pinMode(gsm_reset, OUTPUT);
  pinMode(ledPin, OUTPUT);

  pinMode(5, OUTPUT);
  SIM800.begin(9600);
  digitalWrite(5, HIGH);
  delay(100);
  digitalWrite(gsm_reset, HIGH);

  Serial.print("SIM800 ready...");
  // AT command to set SIM800 to SMS mode
  SIM800.print("AT+CMGF=1\r");
  delay(100);
  // Set module to send SMS data to serial out upon receipt
  SIM800.print("AT+CNMI=2,2,0,0,0\r");
  delay(100);

}




void loop()

{


  read_sensor();




}
