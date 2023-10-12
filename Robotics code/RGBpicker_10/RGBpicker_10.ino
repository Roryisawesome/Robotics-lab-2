//This code is used to create any colour with an RGB LED. This specifically produces the colour "HEX 6b0c31". This colour was found on word.
//It is a text colour. It is a very pale purple. Bit values; red = 107, green = 12, blue = 49
int blue = 10; //assign a variable to pin 10 (PWM)
int red = 3; //assign varibable to pin 3 (PWM)
int green =6; //assign a variable to pin 6  (PWM)
void setup() {
  // put your setup code here, to run once:
byte(255);   //Byte allows for 255 bits
pinMode(blue, OUTPUT); //make LED an output
pinMode(green, OUTPUT); //make LED an output
pinMode(red, OUTPUT); //make LED an output
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(blue, 49); //assigns a value to the pin and outputs this value. Value was taken from Word "HEX 6b0c31"
analogWrite(green, 12 );  //assigns a value to the pin and outputs this value. Value was taken from Word "HEX 6b0c31"
analogWrite(red, 107);  //assigns a value to the pin and outputs this value. Value was taken from Word "HEX 6b0c31"
}
