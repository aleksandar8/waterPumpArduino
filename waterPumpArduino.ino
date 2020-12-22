// pins definition
int moistureSensorPin = A0;
int pumpPin = 7;

// variables
int moistureSensorValue;    // stores the moisture sensor values

void setup(){
  // serial initialization
  Serial.begin(9600);
    pinMode(pumpPin,OUTPUT);   
}
void loop(){
    // reads the sensors

  moistureSensorValue = analogRead(moistureSensorPin); //1023 to 0 ====> 0 to 100%


//---------
int moistureReal = map(moistureSensorValue, 1023, 0, 0, 100);
//Serial.println(moistureReal);
if(moistureReal > 30){
  digitalWrite(pumpPin,HIGH);
  Serial.print(" Влажноста во земјата  е добра, со вредност од ");
  Serial.println( moistureReal);
  Serial.println(" Pump is OFF");
  
}else{
  digitalWrite(pumpPin,LOW);
  Serial.print("Влажноста во земјата е ниска потребно е наводнување со вредност од ");
  Serial.println( moistureReal);
  Serial.println(" Pump is on");

} 

/*
  // -----
 // check the moisture range
  if(moistureSensorValue < 700){
  digitalWrite(pumpPin,HIGH);
  Serial.print("Влажноста во земјата  е добра, со вредност од ");
  Serial.println( moistureSensorValue);
    Serial.println("Pump is OFF >= 700");
    }
    
  if((moistureSensorValue > 700)){
    digitalWrite(pumpPin,LOW);
    Serial.print("Влажноста во земјата е ниска потребно е наводнување со вредност од ");
    Serial.println( moistureSensorValue);
    Serial.println("Pump is ON < 700");
  }
  
 */
  
  delay(1000);
   
  }
  
