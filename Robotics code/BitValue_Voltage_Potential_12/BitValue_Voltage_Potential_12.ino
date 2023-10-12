//Create a program that prints both the bit value and voltage. "Voltage value" and "Bitvalue value"
//uses primarily byte, analog read and serial.rpint/serial.println
void setup() {
analogRead(A0); //identify A0 as an input
byte(255);  //specify bit value
Serial.begin(9600);  //allow arduino to communicate

}
void loop() {

 byte bitval = analogRead(A0); //give analogread a variable. Under byte as we are reading bits
 Serial.print("BitValue "); //this will print exactly what is in quatations. "Bitvalue " space was added so that the word is not glued to the value
 Serial.println(bitval); //this will print the bit value itself
 delay(500); //delay is used so that the serial monitor is readable

 
  float sensorValue = analogRead(A0); //assign variable to analogRead again
  float Voltage = sensorValue * (5.0 / 1023.0); //create equation
 Serial.print("Voltage "); //print exactly what is in quotations. "Voltage " space is added so that the word is not glued to the value
  Serial.println(Voltage); //prints the voltage value
  delay(500); //delay is used so that we can read the serial monitor. 
} 


 


