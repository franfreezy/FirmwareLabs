jkuatcomms transmit_sat(SoftwareSerial &serial);

jkuatcomms transmit_sat(SoftwareSerial &serial,String message){
    digitalWrite(led2,HIGH);
    while (serial.available())
    {
        serial.println(message);
        
    
}

}