//Using the arduino internal resistor, when a switch is open, the monitor must read 1, when the switch is closed, the monitor must read 0. 
// uses primarily digitalRead and Serial.println
int button = 4; //assign the name "button" to pin 4
void setup() {
  
  Serial.begin(9600); //this allows for our arduino to communicate at 9600 bits a second
  pinMode(button, INPUT_PULLUP); //identify pin 4 as the INPUT
}

void loop() {
  //read the pushbutton value into a variable
  int sensorvalue = digitalRead(button); //assign variable to digitalRead(button). This reads the voltage value in pin 4
  Serial.println(sensorvalue); //prints the "digitalRead(button)" value onto the serial monitor
}
