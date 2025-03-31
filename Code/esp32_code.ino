#include <ESP32_Servo.h>
Servo horizontal;
Servo vertical;
int servoh = 90;
int servov = 45;
int servohLimitHigh = 120;
int servohLimitLow = 5;
int servovLimitHigh = 100;
int servovLimitLow = 55;
int ldrlt = 34;
int ldrrt = 35;
int ldrld = 25;
int ldrrd = 26;
void setup() {
Serial.begin(9600);
horizontal.attach(12);
vertical.attach(13);
horizontal.write(180);
vertical.write(45);
delay(2500);
}
void loop() {
int lt = analogRead(ldrlt);
int rt = analogRead(ldrrt);
int ld = analogRead(ldrld);
int rd = analogRead(ldrrd);
Serial.print("LDR Values - Top Left: ");
Serial.print(lt);
Serial.print(" | Top Right: ");
Serial.print(rt);
Serial.print(" | Down Left: ");
Serial.print(ld);
Serial.print(" | Down Right: ");
Serial.println(rd);
int diffHorizontal = abs(ld - rd);
int diffVertical = abs(lt - rt);
if (ld > rd) {
servoh -= 85;
} else if (rd > ld) {
servoh += 85;
}
if (lt > rt) {
servov -= 85;
} else if (rt > lt) {
servov += 85;
}
servoh = constrain(servoh, servohLimitLow, servohLimitHigh);
servov = constrain(servov, servovLimitLow, servovLimitHigh);
horizontal.write(servoh);
vertical.write(servov);
Serial.print("Servo Position (Horizontal): ");
Serial.println(servoh);
Serial.print("Servo Position (Vertical): ");
Serial.println(servov);
delay(1000);
}
