// put function declarations here:
int js40f = 8;                  

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(js40f, INPUT);
}

void loop() {
  Serial.println(digitalRead(js40f));
  // put your main code here, to run repeatedly:
}