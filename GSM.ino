void sms()
{
  SIM800.begin(9600);

  Serial.println("Initializing...");
  delay(1000);

  SIM800.println("AT"); //Once the handshake test is successful, it will back to OK
  //updateSerial();
  delay(1000);
  SIM800.println("AT+CMGF=1"); // Configuring TEXT mode
  // updateSerial();
  delay(1000);
  //SIM800.println("AT+CMGS=\"+254723580448\"");//  Williams number
  SIM800.println("AT+CMGS=\"+254704538979\"");//Latiffs' number
  //updateSerial();
  delay(1000);

  SIM800.println(dataMessage); //text content
  //SIM800.println(dataMessage5); //text content
  SIM800.print(dataMessage6);
  delay(1000);
  SIM800.write(26);
  Serial.println("DONE");
}


void sms1()
{
  SIM800.begin(9600);

  Serial.println("SMS 2...");
  delay(1000);

  SIM800.println("AT"); //Once the handshake test is successful, it will back to OK
//  //updateSerial();
  delay(1000);
 SIM800.println("AT+CMGF=1"); // Configuring TEXT mode
//  // updateSerial();
  delay(1000);
  
   SIM800.println("AT+CMGS=\"+254703149329\"");//Emmanuels number
  //updateSerial();
  delay(1000);
  SIM800.println(dataMessage); //text content
 // SIM800.println(dataMessage5); //text content
  SIM800.print(dataMessage6);
 // SIM800.print(dataMessage4);
  delay(1000);
  // updateSerial();
  SIM800.write(26);
  Serial.println("SEND..");
}
//
//void sms_query()
//{
//  SIM800.begin(9600);
//  SIM800.println("AT");
//  SIM800.println("AT+CMGF=1"); 
////  char *phone_no[3 ]={"+254719881926" ," +25439077724" ,"76676667676"};
////  for(i=0;i<3;i++){
//
//
//  //SIM800.println("AT+CMGS=\"");
//  //SIM800.println(phone_no[i]);
//  //SIM800.println("\"r\n");
//  SIM800.println("AT + CMGS = \"+254704538979\"");
//  delay(100);
//  dataMessage2 = (" FARM: NG001 \n Ambient  Temp:" + String(t_vol) + "*C " );
//  dataMessage3 = ("Ground Temp:" + String(temperature4) + "*C " );
//  hum_datamessage = (" Humidity: "  + String (hum_temperature) + "%");
//  SIM800.println(dataMessage2); //text content
//  SIM800.println(dataMessage3); //text content
//  SIM800.println(hum_datamessage);
//  delay(100);
//  SIM800.println((char)26);
//  delay(100);
//  SIM800.println();
//  //Give Module time to send sms
//  delay(5000);
//
////}
//}






//void sms_query()
//{
//  SIM800.begin(9600);
//
//  //Serial.println("Initializing...");
//  //delay(1000);
//
//  SIM800.println("AT"); //Once the handshake test is successful, it will back to OK
//  //updateSerial();
//  delay(1000);
//  SIM800.println("AT+CMGF=1"); // Configuring TEXT mode
//  // updateSerial();
//  delay(1000);
//  SIM800.println("AT+CMGS=\"+254704538979\"");//change ZZ with country code and xxxxxxxxxxx with phone number to sms
//  //updateSerial();
//  delay(1000);
//  dataMessage2 = (" FARM: NG001 \n Ambient  Temp:" + String(t_vol) + "*C " );
//  dataMessage3 = ("Ground Temp:" + String(temperature4) + "*C " );
//  hum_datamessage = (" Humidity: "  + String (hum_temperature) + "%");
//  SIM800.println(dataMessage2); //text content
//  SIM800.println(dataMessage3); //text content
//  SIM800.println(hum_datamessage);
//  // updateSerial();
//  SIM800.write(26);
//  delay(100);
//  SIM800.println();
//  // Give module time to send SMS
//  delay(5000);  
//    
//}
