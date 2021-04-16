

 

 
void checkSettings()
{
  //Serial.print("Oversampling: ");
  //Serial.println(ms5611.getOversampling());
}
 
void pressure_sensor()
{
  // Read raw values
  //uint32_t rawTemp = ms5611.readRawTemperature();
  uint32_t rawPressure = ms5611.readRawPressure();
 
  // Read true temperature & Pressure
  //double realTemperature = ms5611.readTemperature();
  long realPressure = ms5611.readPressure();
 
  // Calculate altitude
 // float absoluteAltitude = ms5611.getAltitude(realPressure);
  //float relativeAltitude = ms5611.getAltitude(realPressure, referencePressure);
 
  //Serial.println("--");
 
//  Serial.print(" rawTemp = ");
//  Serial.print(rawTemp);
//  Serial.print(", realTemp = ");
//  Serial.print(realTemperature);
//  Serial.println(" *C");
 
  //Serial.print(" rawPressure = ");
  //Serial.print(rawPressure);
  //Serial.print(", realPressure = ");
  Serial.print(realPressure);
  //Serial.println(" Pa");
 
//  Serial.print(" absoluteAltitude = ");
//  Serial.print(absoluteAltitude);
//  Serial.print(" m, relativeAltitude = ");
//  Serial.print(relativeAltitude);    
//  Serial.println(" m");
 
  //delay(100);
}
