/*
  Blink
  The basic Energia example.
  Turns on an LED on for one second, then off for one second, repeatedly.
  Change the LED define to blink other LEDs.
  
  Hardware Required:
  * LaunchPad with an LED
  
  This example code is in the public domain.
*/

// most launchpads have a red LED
#define LED RED_LED
#define IR 0x00000008


/*
 * d2 IR output
 * d12 LED negative 
 */
//see pins_energia.h for more LED definitions
//#define LED GREEN_LED
  
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(LED, OUTPUT);  
  pinMode(IR, INPUT);  
  digitalWrite(LED,HIGH); 
}

// the loop routine runs over and over again forever:
void loop() {
  if(digitalRead(IR)==LOW){
  digitalWrite(LED, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(3500);               // wait for a second
      // turn the LED off by making the voltage LOW              // wait for a second
  while(!(digitalRead(IR) ==HIGH)){
  digitalWrite(LED, HIGH);
 delay(10);
  }
 
 }
}
