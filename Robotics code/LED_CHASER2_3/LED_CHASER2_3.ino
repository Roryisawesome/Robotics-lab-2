//The code will make the arduino flash 3 seperate LEDS in a snake pattern. It will flash red, green, blue, green, red. 
//The main theme of this program is digitalWrite  
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
  delay(500); //keep on for 100mS
  digitalWrite(RED,LOW); //turn off RED led

  digitalWrite(GREEN,HIGH); //turn on Green LED
  delay(500);  //keep on for 100mS
  digitalWrite(GREEN,LOW); //turn off green LED

  digitalWrite(BLUE,HIGH); //turn on BLUE LED
  delay(500); //keep on for 100mS
  digitalWrite(BLUE,LOW); //Turn off BLUE LED 

  digitalWrite(GREEN,HIGH); //turn on Green LED
  delay(500);  //keep on for 100mS
  digitalWrite(GREEN,LOW); //turn off green LED
}