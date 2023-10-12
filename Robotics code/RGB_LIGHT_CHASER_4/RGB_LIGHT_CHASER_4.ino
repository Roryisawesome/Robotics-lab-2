//USe a single RGB LED and make it blink red, green, blue and white repeatedly. Main theme is digitalWrite.
int RED = 2; //Identify a variabe for the RED led attached to pin 3
int GREEN = 1; //Indentify a variable for the green led attached to pin 2
int BLUE = 3; //idnetify a variale for the Blue Led attached to pin 1 
void setup() {
  // put your setup code here, to run once:
pinMode (RED, OUTPUT); // Identify each LED as an output
pinMode(BLUE, OUTPUT); //Identify as output
pinMode(GREEN, OUTPUT); //Identify as output
}
void loop() {
 digitalWrite(RED, HIGH); //TURN on red
delay(500); //keep on for 5mS
digitalWrite(RED, LOW); //TURN off red
digitalWrite(GREEN, HIGH);//turn on green
delay(500);//keep on for 5mS
digitalWrite(GREEN, LOW); //TUrn off green
digitalWrite(BLUE, HIGH); //Turn on blue
delay(500); //keep on for 5mS
digitalWrite(BLUE, LOW); //turn off blue

digitalWrite(RED, HIGH); //turn on blue, red and green at the same time. This is how we achieve the collour white
 digitalWrite(GREEN, HIGH);
 digitalWrite(BLUE, HIGH);
 delay(500); //keep on for 5mS
 digitalWrite(RED, LOW); //Turn off blue, red and green at the same time. This is how we achieve the colour white. 
 digitalWrite(GREEN, LOW);
 digitalWrite(BLUE, LOW);
}
