void dust_sensor(){

 

//  if(pms.read(data))

 while( pms.read(data));
  delay(1000);
  {
    dustlevel =  data.PM_AE_UG_2_5;
    Serial.print("PM 1.0 (ug/m3): ");
    Serial.println(data.PM_AE_UG_1_0);
    delay(1000);
    Serial.print("PM2.5(ug/m3):");
    Serial.println(data.PM_AE_UG_2_5);
    delay(1000);
  }
}
