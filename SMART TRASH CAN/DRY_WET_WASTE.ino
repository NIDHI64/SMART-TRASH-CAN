int sense_Pin = 0; // sensor input at Analog pin A0

int value;
void setup() {
   Serial.begin(9600);
//   pinMode(WET, OUTPUT);
//   pinMode(DRY, OUTPUT);
   delay(2000);
}
void loop() {

   Serial.print("MOISTURE LEVEL : ");
   value= analogRead(sense_Pin);
   value= value/10;
   Serial.println(value);

        if(value<90)
        {
            Serial.println("WET");
        }
       else
       {
           Serial.println("DRY");
       }

       delay(1000);

       
}
