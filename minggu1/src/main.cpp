#include <Arduino.h> 

int lampuMerah = 26;
int lampuKuning = 33;
int lampuHijau = 25;

void setup() {
  Serial.begin(115200); 
  Serial.println("Traffic Light Simulation with ESP32");

  pinMode(lampuMerah, OUTPUT);
  pinMode(lampuKuning, OUTPUT);
  pinMode(lampuHijau, OUTPUT);
}

void loop() {
  digitalWrite(lampuMerah, HIGH);
  digitalWrite(lampuKuning, LOW);
  digitalWrite(lampuHijau, LOW);
  Serial.println("Lampu Merah ON");
  delay(15000);

  
  digitalWrite(lampuMerah, LOW);
  digitalWrite(lampuKuning, HIGH);
  digitalWrite(lampuHijau, LOW);
  Serial.println("Lampu Kuning ON");
  delay(3000); 

  digitalWrite(lampuMerah, LOW);
  digitalWrite(lampuKuning, LOW);
  digitalWrite(lampuHijau, HIGH);
  Serial.println("Lampu Hijau ON");
  delay(15000);
}