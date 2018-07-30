
#define pin 34
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensor=analogRead(34);
  //int percent = map(sensor,0,4095,0,100); // a second resistance is used to convert the variation in resistance to variation in voltage
  Serial.println(sensor);                  // wea are measuring voltage across LDR
  delay(10);

}
