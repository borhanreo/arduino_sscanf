

int servo_01, servo_02, servo_03;
  int pos_01, pos_02, pos_03;
  char* data = "1*45~2*90~3*180";
void setup() {
  Serial.begin(9600);
  
  int n1 = sscanf(data, "%d*%d~%d*%d~%d*%d", &servo_01, &pos_01, &servo_02, &pos_02, &servo_03, &pos_03);
  Serial.print(F("n="));
  Serial.println(n1);
  Serial.print(F("id1="));
  Serial.print(servo_01);
  Serial.print(F(", pos1="));
  Serial.println(pos_01);
  Serial.print(F("id2="));
  Serial.print(servo_02);
  Serial.print(F(", pos2="));
  Serial.println(pos_02);
  Serial.print(F("id3="));
  Serial.print(servo_03);
  Serial.print(F(", pos3="));
  Serial.println(pos_03);
}

void loop() {
  // put your main code here, to run repeatedly:

}
