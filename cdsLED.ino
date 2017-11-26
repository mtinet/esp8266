/*
A0핀에 연결되어 있는 조도센서로 빌트인엘이디를 제어하는 예제  
*/
int led = 2;
int CdS = 0;
int CdSVal = 0;

void setup() {
  Serial.begin(115200);
  pinMode(led, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
}

// the loop function runs over and over again forever
void loop() {
  CdSVal = analogRead(CdS);
  Serial.println(CdSVal);
  
  if (CdSVal > 500) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
