//When a button is unpressed, an RGB LED is completely illuminated creating a white light. When the button is pressed, the RGB LED must completely turn off.
//This program focuses on analogRead and digitalWrite. 
int green = 3;  //assign a varibale to pin 3
int red = 2;    //assign a variable to pin 2
int blue = 4;   //assign a variable to pin 4
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);      //identify a 9600 bit communication between pc and arduino
  pinMode(green, OUTPUT);  //assign pin as output
  pinMode(red, OUTPUT);    //assign pin as output
  pinMode(blue, OUTPUT);   //assign pin as output
  analogRead(A0); //assign pin as input. this pin will read the voltage of the switch
}
void loop() {
  // put your main code here, to run repeatedly:
  float sensorValue = analogRead(A0); //identify a variable for analogRead
  float Voltage = sensorValue * (5.0 / 1023.0); //create an equation to display voltage
  if (Voltage == 0) {   // if my volatge is 0, (button not pressed), every light will illuminate creating a white light. 
    digitalWrite(green, HIGH); //light on
    digitalWrite(red, HIGH);  //light on
    digitalWrite(blue, HIGH);  //light on
  } else {       //if my volatge is > 0, (button pressed), every light will turn off, leaving the RGB LED off. 
    digitalWrite(green, LOW); //light off
    digitalWrite(red, LOW);   //light off
    digitalWrite(blue, LOW);  //light off
  }
}
