const int trigPin1 = 2;
const int echoPin1 = 3;
const int trigPin2 = 6;
const int echoPin2 = 7;

float tiempo1, distancia1, tiempo2, distancia2;

void setup() {
  // put your setup code here, to run once:
pinMode(trigPin1, OUTPUT);
pinMode(trigPin2, OUTPUT);

pinMode(echoPin1, INPUT);
pinMode(echoPin2, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin1, LOW);
  digitalWrite(trigPin2, LOW);

  delayMicroseconds(2);

  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
   tiempo1 = pulseIn(echoPin1, HIGH);  
  distancia1 = (tiempo1 * 0.0343)/2;

  Serial.print("Distancia1: ");
  Serial.println(distancia2);

  delayMicroseconds(100);

  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);

   tiempo2 = pulseIn(echoPin2, HIGH);  
  distancia2 = (tiempo2 * 0.0343)/2;  

  Serial.print("Distancia2: ");
  Serial.println(distancia2);

  delay(100);
}
