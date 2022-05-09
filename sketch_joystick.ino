//#include <ArduinoJson.h>

//const int joyStickHor = A0;
//const int joyStickVer = A1;
//const int potenPin = 0;
//const int buttonPin = 7;
//const int BUTTON = 7; 


//int X = 0;
//int Y = 0;
//int potval = 0;
//int buttonState = 0;
//int joystick_H = 0; 
//int joystick_V = 0; 


//void setup() {
//  Serial.begin(9600);
//  delay(1000); //time to bring up serial monitor
//
//  pinMode(buttonPin, INPUT_PULLUP);
//  digitalRead(buttonPin); 
//  
//
//}

/*const int BUTTON = 7; 
int buttonState = 0; 

void setup() {
  Serial.begin(9600);
  pinMode(BUTTON, INPUT);
}

void loop() {
  Serial.println(digitalRead(BUTTON));
  delay(100);
*/

const int BUTTON = 7; 
const int POT = A4;
const int JOYH = A0;
const int JOYV = A1;

int buttonState = 0; 
int potval = 0; 
int x; 
int y; 

void setup(){
  Serial.begin(9600); 
  pinMode(BUTTON, INPUT);
}

void loop(){
  x = map(analogRead(JOYH), 0, 4095, 0, 100); 
  y = map(analogRead(JOYV), 0, 4095, 100, 0); 
  Serial.println(digitalRead(BUTTON));
  Serial.println(analogRead(POT)); 
  Serial.println(x); 
    Serial.print(""); 
  Serial.println(y); 
    Serial.print(""); 
  delay(100); 
}


//void loop() {
//  X = map(analogRead(joyStickHor), 0, 4095, 0, 100);
//  Y = map(analogRead(joyStickVer), 0, 4095, 100, 0);
//  //joystick_H = analogRead(A0); 
//  //joystick_V = analogRead(A1); 
//  potval = analogRead(A4);
//  buttonState = digitalRead(7); 
//
//  Serial.print(X);
//  //Serial.print(" ");
//  Serial.print(Y);
//  //Serial.print(" ");
//  //Serial.print(P);
//  //Serial.print(" ");
//  //Serial.println (digitalRead(buttonPin));
//  Serial.println (potval);
//  Serial.println (buttonState);
//  
//
//
//
//  delay(300);

//}
