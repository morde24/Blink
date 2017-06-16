int LED = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode (13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (13, HIGH);
  Serial.println ("LED is ON");
  delay(100);
  digitalWrite (13, LOW);
  Serial.println ("LED is OFF");
  delay(100);
  //commenting to comment
}
