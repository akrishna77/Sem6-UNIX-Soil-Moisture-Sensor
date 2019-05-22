int timesTosend=1;
int count=0;
char phone_no[]="9500155108";
int sensorPin = A0;
int ledPin = 13;   
int sensorValue = 0;

void setup()
{ pinMode(ledPin, OUTPUT); 
  Serial.begin(9600);
   delay(2000);
   Serial.println("AT+CMGF=1");
}
void loop()
{ 
    while(count<timesTosend)
    { delay(1500);
      Serial.print("AT+CMGS=\"");
      Serial.print(phone_no);
      Serial.println("\""); 
      
      while(Serial.read()!='>');
      {  
         sensorValue= analogRead(0);
         if(sensorValue>0 && sensorValue<300)
         {     Serial.println("Dry ");
               Serial.println(sensorValue);
         }
         else if(sensorValue>300 && sensorValue<700)
         {    Serial.println("Humid ");
              Serial.println(sensorValue);
         }
         else if(sensorValue>700 && sensorValue<950)
         {     Serial.println("Water ");
              Serial.println(sensorValue);
         }
         delay(500);
         Serial.write(0x1A);
         Serial.write(0x0D);
         Serial.write(0x0A);
         delay(5000);
      }
      count++; 
   }
}
