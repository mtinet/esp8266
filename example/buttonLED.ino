/*
  4번 핀과 연결된 내장 button으로 들어오는 값을 통해 내장LED를 제어하는 예제  
*/

int led = 2;
int button = 4;
boolean buttonState = false;

void setup() {
  pinMode(led, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(button, INPUT);
  
}

// the loop function runs over and over again forever
void loop() {
  buttonState = digitalRead(button);
  if (buttonState == HIGH) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
