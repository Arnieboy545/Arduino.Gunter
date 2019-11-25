 const int ledPin10 = 9;
const int ledPin2 = 2;
const int ledPin3 = 3;
const int ledPin4 = 4;
void setup() {
  Serial.begin(9600);
  pinMode (9, OUTPUT);
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);

}

void loop() {

for (int i = 0; i < 50; i++) {
  for (int t = 0; t < 3; t++){ 
  int sec = 1000;
  int delayPeriod = sec/(i+1);  
  digitalWrite(ledPin10, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  delay(delayPeriod);
  digitalWrite(ledPin10,LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  delay(delayPeriod);   
  Serial.println("delay is "+ String(delayPeriod));
  
  }
  }
}
