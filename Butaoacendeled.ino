#include <stdio.h>
  int  L= 2;
  int btn= 10;
  int var=LOW; 


void setup() {
  // put your setup code here, to run once:
  pinMode(L, OUTPUT);
  pinMode(btn, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  var=digitalRead(btn);
  Serial.println(var);
  if(var==HIGH){
    digitalWrite(L, HIGH);
  }
  else{
    digitalWrite(L, LOW);
  }
delay(100);
}
