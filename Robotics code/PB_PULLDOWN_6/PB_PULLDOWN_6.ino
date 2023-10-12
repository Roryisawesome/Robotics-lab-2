//When a button remains unpressed, the serial monitor should read a value of 0. When the button is pressed, the monitor should read a value of 1. 
//This focuses on digitalRead and Serial.println 
int button = 2; //assign the name "read" to pin 2
void setup() {
  
  Serial.begin(9600); //this allows for our arduino to communicate at 9600 bits a second
  pinMode(button, INPUT); //identify pin 2 as the INPUT
}

void loop() {
  //read the pushbutton value into a variable
  int buttonState = digitalRead(button); //assign variable to digitalRead(read). This reads the voltage value in pin 2
  Serial.println(buttonState); //prints the "digitalRead(read)" value onto the serial monitor

}
