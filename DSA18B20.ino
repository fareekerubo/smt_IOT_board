void ds18b20_sensor() 
{ 

 sensors.requestTemperatures();
 //Serial.print("Temperature is:   "); 
// Serial.print(sensors.getTempCByIndex(0)); // Why "byIndex"?
// Serial.print("              ");  Serial.println(sensors.getTempCByIndex(1)); // Why "byIndex"? 
 //delay(100);

  reading =  sensors.getTempCByIndex(0);
  //reading1 =sensors.getTempCByIndex(1)  ; // whatever code reads the current value
  average = reading;  
//  Serial.print(reading);
//  Serial.print("     ");
//  Serial.print(reading1);
//  Serial.print("     ");
//  Serial.print(average);
//  Serial.println("     ");

  
  
  //delay (100) ;
}
