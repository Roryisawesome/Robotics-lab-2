//this code will blink a yellow light on and off 5 seconds at a time, it will also display a value of 1 or 0 when a pushbutton is pressed
//focuses on digitalWrite, millis(), if
const int ledPin = 8;  // the number of the LED pin 
int ledState = LOW;  // ledState used to set the LED 
unsigned long previousMillis = 0;  // will store last time LED was updated  
const long interval = 5000;  // interval at which to blink (milliseconds) 
void setup() { 
   pinMode(ledPin, OUTPUT); // set the digital pin as output
  pinMode (3, INPUT);   // set pin 3 as an input, read the pushbutton
  Serial.begin(9600);  //allow 9600 bits
} void loop() { 
 // the interval at which you want to blink the LED. 
  unsigned long currentMillis = millis(); //assign variable
  if (currentMillis - previousMillis >= interval) {  //create an equation
     previousMillis = currentMillis; 
    if (ledState == LOW) { //print high even if the LEDstate is low
      ledState = HIGH; 
    } else { 
     ledState = LOW; //otherwise led is low
   } // set the LED with the ledState of the variable: 
   digitalWrite(ledPin, ledState); 
 } 
 int buttonState = digitalRead(3); //assign variable for digitalRead(3)
 Serial.println(buttonState);  //print a value to the serial monitor
 } 
