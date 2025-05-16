#include <Arduino.h>

// put function declarations here:
int qre = 4; 
int lecturaqre; 
int led = 8;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(led, OUTPUT);
  pinMode(qre, INPUT);
  //StartCoroutine("Lectura");
}

void loop() {
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
  lecturaqre = analogRead(qre);
  Serial.println(lecturaqre);
  // put your main code here, to run repeatedly:
  //delay(1000);

}
/*IEnumerator Lectura(){
  yield return new WaitForSeconds(1);
  lecturaqre = analogRead(qre);
  Serial.println(lecturaqre);
}
*/