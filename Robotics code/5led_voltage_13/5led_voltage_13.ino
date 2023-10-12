//This program uses a potentiometer. When the potentiometer reads 0 volts, 0 lights turn on. 1 volt = 1 light. 2 volt = 2 light. 3 volt = 3 light. 4 volt = 4 light. 5 volt = 5 lights.
//uses digitalWrite and if aswell as analogRead
int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;
int LED5 = 6;  // define a variable for each led

void setup() {
  Serial.begin(9600);     //communicate at 9600 bits
  analogRead(A0);         //read the potentiometer value
  pinMode(LED1, OUTPUT);  //SEt each pin as an output, this allows us to power the LED
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
}
void loop() {
  float sensorValue = analogRead(A0); //assign variable
  float Voltage = sensorValue * (5.0 / 1023.0); //create equation
  Serial.println(Voltage); //this will print a value on our serial monitor "useless step"
  
  if (Voltage >= 1) {  //if voltage is > 1, led 1 turns on
    digitalWrite(LED1, HIGH); 
  } else digitalWrite(LED1, LOW); //voltage < 1, led turns off
  if (Voltage >= 2) { //turns on at 2 volts or over
    digitalWrite(LED2, HIGH);
  } else digitalWrite(LED2, LOW); //off at any value under 2 volts. 
  if (Voltage >= 3) {  //turns on at 3 volts or over
    digitalWrite(LED3, HIGH);
  } else digitalWrite(LED3, LOW); //off at any value under 3 volts
  if (Voltage >= 4) { //turn on at 4 volts or over
    digitalWrite(LED4, HIGH);
  } else digitalWrite(LED4, LOW); //off at anyvalue under 4 volts
  if (Voltage >= 5) {   //turn on at 5 volts or over 
    digitalWrite(LED5, HIGH);
  } else digitalWrite(LED5, LOW); //off at anyvalue under 5
}