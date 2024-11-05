//in this segment, the sat is doing nothing but listening to commands

typedef struct __attribute__((packed))
{
  String message;

} jkuatcomms;

jkuatcomms idle_sat(SoftwareSerial &serial);

jkuatcomms idle_sat(SoftwareSerial &serial){
    digitalWrite(led1,HIGH);
    while (serial.available())
    {
        String command=serial.readStringUntil('~');
        if(command=="sleep"){

        }
        if(command=="transmit"){
            
        }
        if(command=="command"){
            
        }
        if(command=="test"){
            
        }
    }
    
}