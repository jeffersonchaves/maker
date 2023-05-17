int led_vermelho = 2;
int led_verde    = 3;
int led_amarelo = 4;

//String led;
char led;

void setup() {
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_verde, OUTPUT);
  pinMode(led_amarelo, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  
  led = Serial.read();

  /*
  if (led.equals('R')) {                    // Led vermelho - red
    digitalWrite(led_vermelho, HIGH);  // Acende led
  } 
  */

  if (led == 'R') {                    // Led vermelho - red
    digitalWrite(led_vermelho, HIGH);  // Acende led
  }      
  
  if (led == 'r') {
    digitalWrite(led_vermelho, LOW);  // Apaga led
  }
  
  if (led == 'G') {                 // Led verde - green
    digitalWrite(led_verde, HIGH);  // Acende led
  }    
  
  if (led == 'g') {
      digitalWrite(led_verde, LOW);  // Apaga led
  }
  
  if (led == 'Y') {                   // Led amarelo - yellow
    digitalWrite(led_amarelo, HIGH);  // Acende led
  }     
  
  if (led == 'y') {
    digitalWrite(led_amarelo, LOW);  // Apaga led
  }
}
