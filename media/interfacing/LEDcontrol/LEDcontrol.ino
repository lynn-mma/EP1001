void setup() {

  
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  Serial.begin(9600);

}

void loop() {

  if(Serial.available()){
    char val = Serial.read();

  if (val == 'g'){
    digitalWrite(10, HIGH);
    }
  if (val == 'y'){
    digitalWrite(9, HIGH);
    }
  if (val == 'r'){
    digitalWrite(8, HIGH);
    }
  if (val == 'f'){
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    }

  }

}
