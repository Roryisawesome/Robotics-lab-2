//This code is set to make the arduino control 3 seperate LEDS. The Leds will light up 1 after another.
//The Red Led will light up,when Red goes off the green led will light up, when green goes pff the Blue led will light up. This will repeat forever. 

int RED = 3; //Identify a variabe for the RED led attached to pin 3
int GREEN = 2; //Indentify a variable for the green led attached to pin 2
int BLUE =1; //idnetify a variale for the Blue Led attached to pin 1 
void setup() {
  // put your setup code here, to run once:
pinMode (RED, OUTPUT); // Identify each LED as an output
pinMode(BLUE, OUTPUT); //Identify as output
pinMode(GREEN, OUTPUT); //Identify as output
}

void loop() { 
  digitalWrite(RED,HIGH); //Turn on RED led
  delay(100); //keep on for 100mS
  digitalWrite(RED,LOW); //turn off RED led

  digitalWrite(GREEN,HIGH); //turn on Green LED
  delay(100);  //keep on for 100mS
  digitalWrite(GREEN,LOW); //turn off green LED

  digitalWrite(BLUE,HIGH); //turn on BLUE LED
  delay(100); //keep on for 100mS
  digitalWrite(BLUE,LOW); //Turn off BLUE LED

}
