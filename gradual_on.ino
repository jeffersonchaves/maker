int led_verde = 3;
int brilho    = 1;


void setup() {
  pinMode(led_verde, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  
  for (int i=0; i < 90; i++) {
    aumentaBrilho(i);
    Serial.println(i);
    delay(250);
  }

  for (int i=90; i > 0; i--) {
    diminuiBrilho(i);
    delay(250);
  }

}

void aumentaBrilho(int brilho){
  analogWrite(led_verde, brilho);
  brilho++;
}

void diminuiBrilho(int brilho){
  analogWrite(led_verde, brilho);
  brilho--;
}


