int analogPin = 0;
int val = 0; 
float voltage = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(analogPin); // retourne une valeur entre 0 et 1023 (représentant la plage 0 à 5V)
  voltage = val / 73.07; // car 1023/14 = 73.07 (on repasse sur une plage de 0 à 14V)
  String voltageHeader = "Tension : ";
  Serial.println(voltageHeader + voltage + " V");
  delay(500);
}
