int pinPotenciometro = 0;
int led_yellow = 5;
float potenciometro;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(led_yellow, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  potenciometro = analogRead(pinPotenciometro);
  potenciometro = (5.0*potenciometro)/1024;

  Serial.println(potenciometro);
  delay(1000);

  if (potenciometro > 2.5){
    digitalWrite(led_yellow, HIGH);
    }
  else{
    digitalWrite(led_yellow, LOW);
    }
}
