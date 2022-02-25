#define LED 3
#define Button 4

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(Button, INPUT);
}

void loop(){
  //while (digitalRead(Button)==LOW){
      digitalWrite(LED, HIGH);
      delay(500);
      digitalWrite(LED,LOW);
      delay(500);
 // }
  
}
