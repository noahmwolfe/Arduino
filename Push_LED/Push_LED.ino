int redLED = 13;
int greenLED = 12;
int button1 = 7;
int val1 = 0;
int button2 = 6;
int val2 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val1 = digitalRead(button1);
  val2 = digitalRead(button2);
  digitalWrite(redLED, val1);
  digitalWrite(greenLED, val2);
}
