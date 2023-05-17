int IN1 = 7;
int IN2 = 8;
int PIN_VELOCIDADE = 9;

int velocidade = 110;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(PIN_VELOCIDADE, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  
  for (int i=110; i < 255; i++) {
    aumentaVelocidade(i);
    delay(250);
  }

  for (int i=255; i > 110; i--) {
    diminuiVelocidade(i);
    delay(250);
  }

}

void aumentaVelocidade(int velocidade){
  analogWrite(PIN_VELOCIDADE, velocidade);
  velocidade++;
}

void diminuiVelocidade(int velocidade){
  analogWrite(PIN_VELOCIDADE, velocidade);
  velocidade--;
}


