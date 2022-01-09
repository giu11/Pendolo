#define TRIG 2
#define ECHO 4

#define V 343.
#define CONV (1.e-6*100.)

void setup() {
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  digitalWrite(TRIG, LOW);
}

void loop() {
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  unsigned long ut = pulseIn(ECHO, HIGH);
  float d = V*ut*CONV/2.;
  Serial.println(d);
  delay(50);
}
// Per verificare il periodo del pendolo 
// Acceleraziione con app phyphox
//Periodo al variare della lunguezza e della massa 
// PRovare a cambiare l'angolo con il servo motore con due motori 
