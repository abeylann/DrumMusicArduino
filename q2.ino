
const int touchSensor = A0;
int sensorReading = 0;
void setup() {
  
  //Setup Channel A
  pinMode(12, OUTPUT); //Initiates Motor Channel A pin
  pinMode(9, OUTPUT); //Initiates Brake Channel A pin
  pinMode(13, OUTPUT); //Initiates Motor Channel B pin
  pinMode(8, OUTPUT); //Initiates Brake Channel B pin 
  
}

void loop(){

  sensorReading = analogRead(touchSensor);
  if (sensorReading == 1) {
  
     channelB();
     channelA();
     channelA();
     channelB();
     channelA();  
     }
}


void channelA()
{
       //forward @ full speed
      digitalWrite(12, HIGH); //Establishes forward direction of Channel A 
      digitalWrite(9, LOW);   //Disengage the Brake for Channel A
      analogWrite(3, 255);   //Spins the motor on Channel A at full speed
      delay(100);
  
      digitalWrite(9, HIGH); //Eengage the Brake for Channel A
      delay(100);
  
       //backward @ half speed
      digitalWrite(12, LOW); //Establishes backward direction of Channel A
      digitalWrite(9, LOW);   //Disengage the Brake for Channel A
      analogWrite(3, 123);   //Spins the motor on Channel A at half speed
      delay(100);
  
      digitalWrite(9, HIGH); //Eengage the Brake for Channel A
      delay(100);

}
void channelB()
{
      //forward @ full speed
      digitalWrite(13, HIGH); //Establishes forward direction of Channel B
      digitalWrite(8, LOW);   //Disengage the Brake for Channel B
      analogWrite(11, 255);   //Spins the motor on Channel B at full speed
      delay(100);
  
      digitalWrite(8, HIGH); //Eengage the Brake for Channel B
      delay(100);

      //backward @ half speed
      digitalWrite(13, LOW); //Establishes backward direction of Channel B
      digitalWrite(8, LOW);   //Disengage the Brake for Channel B
      analogWrite(11, 123);   //Spins the motor on Channel B at half speed
      delay(100);
  
      digitalWrite(8, HIGH); //Eengage the Brake for Channel B
      delay(100);
}



