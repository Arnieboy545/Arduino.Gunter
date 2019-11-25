const int ledPin10 = 10;
void setup() {
 Serial.begin(9600);
 pinMode(10, OUTPUT);

}

void loop() {
 static int delayPeriod = 500;
 digitalWrite (ledPin10, HIGH);
 delay (delayPeriod);
 digitalWrite (ledPin10, LOW);
 delay(delayPeriod);

}
