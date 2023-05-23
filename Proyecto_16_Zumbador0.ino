int pin_led_yellow = 5; //Pin PWM  a donde va conectado el zumbador
int pin_led_red = 4;
int pin_buzzers = 6;

void setup() {

  pinMode(pin_led_red, OUTPUT);
  pinMode(pin_led_yellow, OUTPUT);
  pinMode(pin_buzzers, OUTPUT);

}

void loop() {

  //Se usa la funcion: tone(pin, frecuencia)

  //Manda una onda con frecuencia de 400 Hz al zumbador
  tone(4, 400);
  delay(100);
  noTone(pin_led_red); //Silencia el zumbador
  delay(100);  //Espera 500 ms antes de volver a sonar

  //Manda una onda con frecuencia de 300 Hz al zumbador
  tone(4, 300);
  delay(100);
  noTone(pin_led_red);  //Silencia el zumbador
  delay(100);  //Espera 500 ms antes de volver a sonar

  //Manda una onda con frecuencia de 200 Hz al zumbador
  tone(4, 200);
  delay(100);
  noTone(pin_led_red);  //Silencia el zumbador
  delay(100);  //Espera 500 ms antes de volver a sonar

  tone(5, 400);
  delay(100);
  noTone(pin_led_yellow); //Silencia el zumbador
  delay(100);  //Espera 500 ms antes de volver a sonar

  //Manda una onda con frecuencia de 300 Hz al zumbador
  tone(5, 300);
  delay(100);
  noTone(pin_led_yellow);  //Silencia el zumbador
  delay(100);  //Espera 500 ms antes de volver a sonar

  //Manda una onda con frecuencia de 200 Hz al zumbador
  tone(5, 200);
  delay(100);
  noTone(pin_led_yellow);  //Silencia el zumbador
  delay(100);  //Espera 500 ms antes de volver a sonar

  tone(6, 400);
  delay(100);
  noTone(pin_buzzers); //Silencia el zumbador
  delay(100);  //Espera 500 ms antes de volver a sonar

  //Manda una onda con frecuencia de 300 Hz al zumbador
  tone(6, 300);
  delay(100);
  noTone(pin_buzzers);  //Silencia el zumbador
  delay(100);  //Espera 500 ms antes de volver a sonar

  //Manda una onda con frecuencia de 200 Hz al zumbador
  tone(6, 200);
  delay(100);
  noTone(pin_buzzers);  //Silencia el zumbador
  delay(100);  //Espera 500 ms antes de volver a sonar


}
