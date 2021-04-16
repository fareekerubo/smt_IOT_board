  void humidity_sensor() {
  
   
  uint16_t step1 = analogRead(humPin);
  uint16_t step2 = analogRead(humPin2);
  double volt = (double)step1 * (5.0 / 1023.0);
  humidity = amt1001_gethumidity(volt);
  double volt2 = (double)step2 * (5.0 / 1023.0);
  humidity2 = amt1001_gethumidity(volt2);
   humidity_average=(humidity+humidity2)/2;
  //Serial.print("humidity is :   " );
  //Serial.print(humidity);
  //Serial.print("%     ");
  //Serial.print(humidity2);   
  //Serial.print("%      ");
  //Serial.print(humidity_average);
  // Serial.println("          ");
 // delay(1000);
  
  }
