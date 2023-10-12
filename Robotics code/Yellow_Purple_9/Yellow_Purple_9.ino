//When a button is not pressed, The red and green light inside an RGB LED must illuminate. Creating yellow. 
//When pressed, red and blue must turn om. Creating purple
//This program focuses on analogRead and digitalWrite. 
int green = 3;  //assign a varibale to pin 3
int red = 2;    //assign a variable to pin 2
int blue = 4;   //assign a variable to pin 4
void setup() {
  Serial.begin(9600);      //identify a 9600 bit communication between pc and arduino
  pinMode(green, OUTPUT);  //assign pin as output
  pinMode(red, OUTPUT);    //assign pin as output
  pinMode(blue, OUTPUT);   //assign pin as output
  analogRead(A0); // this pin will read the voltage of the switch
}
void loop() {
  float sensorValue = analogRead(A0); //identify a variable for analogRead
  float Voltage = sensorValue * (5.0 / 1023.0);   //create an equation to display voltage
  Serial.println(Voltage);
  if (Voltage == 0) {   // if my volatge is 0, (button not pressed), green and red illuminate, blue stays off.
    digitalWrite(green, HIGH); //light on
    digitalWrite(red, HIGH);  //light on
    digitalWrite(blue, LOW); //light off
  } 
  if(Voltage == 5) {       //if my volatge is 5, (button pressed), red and blue illuminate, green stays off. 
    digitalWrite(green, LOW); //light off
    digitalWrite(blue, HIGH);  //light on
    digitalWrite(red, HIGH);   //light on
  }
}





