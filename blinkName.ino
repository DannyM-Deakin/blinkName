int led1 = D6;


void setup() {
    
    pinMode(led1, OUTPUT);

}

void longBlink(){
    digitalWrite(led1, HIGH);
    
    
    delay(1500);
    
    digitalWrite(led1, LOW);
    
    delay(1500);
    
}

void shortBlink(){
    digitalWrite(led1, HIGH);
    
    
    delay(1000);
    
    digitalWrite(led1, LOW);
    
    delay(1500);
}

void loop() {
    
    longBlink();
    shortBlink();
    shortBlink();
    shortBlink();
    longBlink();
    longBlink();
    shortBlink();
    longBlink();
    shortBlink();
    longBlink();
    shortBlink();
    longBlink();
    longBlink();
}
