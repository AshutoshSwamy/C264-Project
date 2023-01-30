void setup(){
  Serial.begin(9600);
  Serial.setTimeout(100);
  pinMode(3 , OUTPUT);
}

void loop(){
  if (Serial.available()){
    int state = Serial.readString().toInt();
    
    if (state  ==  1){
      digitalWrite(3,HIGH);
    }
    else{
      digitalWrite(3,LOW);
    }
  }
  delay(10);
}