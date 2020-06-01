/*
 * rainbow
 * turn on and off different LEDs with various PWM.
 * can get rainbow stripe to protect text.
 */

void setup() {
  pinMode(D6, OUTPUT);  // initialize onboard LED as output
  pinMode(D7, OUTPUT);
  pinMode(D8, OUTPUT);
}

void loop() {
  /*digitalWrite(D6, HIGH);  // turn on LED with voltage HIGH
  digitalWrite(D7, HIGH);
  digitalWrite(D8, HIGH);
  delayMicroseconds(1400);                      // wait one second
  digitalWrite(D6, LOW);   // turn off LED with voltage LOW
  digitalWrite(D7, LOW);
  digitalWrite(D8, LOW);                      //500hz
  delayMicroseconds(600);                      // wait one second*/
  /*digitalWrite(D6, HIGH);  // turn on LED with voltage HIGH
  digitalWrite(D7, HIGH);
  digitalWrite(D8, HIGH);
  delayMicroseconds(700000);                      // wait one second
  digitalWrite(D6, LOW);   // turn off LED with voltage LOW
  digitalWrite(D7, LOW);
  digitalWrite(D8, LOW);                      //100hz//3500+1500=200hz
  delayMicroseconds(300000);                      // wait one second*/
  /*digitalWrite(D6, HIGH);  // turn on LED with voltage HIGH
  digitalWrite(D7, HIGH);
  digitalWrite(D8, HIGH);
  delayMicroseconds(5000);                      // wait one second
  digitalWrite(D6, LOW);   // turn off LED with voltage LOW
  digitalWrite(D7, LOW);
  digitalWrite(D8, LOW);                      //120hz=8.333333...ms
  delayMicroseconds(3333);                      // wait one second*/
  /*digitalWrite(D6, HIGH);  // turn on LED with voltage HIGH
  digitalWrite(D7, HIGH);
  digitalWrite(D8, HIGH);
  delayMicroseconds(2000);                      // wait one second
  digitalWrite(D6, LOW);   // turn off LED with voltage LOW
  digitalWrite(D7, LOW);
  digitalWrite(D8, LOW);                      //30000hz=33.333...us
  delayMicroseconds(1338);                      // wait one second*/
  /*digitalWrite(D6, HIGH);  // turn on LED with voltage HIGH
  digitalWrite(D7, HIGH);
  digitalWrite(D8, HIGH);
  delayMicroseconds(20000);                      // wait one second
  digitalWrite(D6, LOW);   // turn off LED with voltage LOW
  digitalWrite(D7, LOW);
  digitalWrite(D8, LOW);                      //30000hz=33.333...us
  delayMicroseconds(13335);                      // wait one second
  digitalWrite(D6, HIGH);  // turn on LED with voltage HIGH
  digitalWrite(D7, HIGH);
  digitalWrite(D8, HIGH);
  delayMicroseconds(20000);                      // wait one second
  digitalWrite(D6, LOW);   // turn off LED with voltage LOW
  digitalWrite(D7, LOW);
  digitalWrite(D8, LOW);                      //30000hz=33.333...us
  delayMicroseconds(13335);                      // wait one second*/
  digitalWrite(D6, HIGH);  // turn on LED with voltage HIGH
  digitalWrite(D7, HIGH);
  digitalWrite(D8, HIGH);
  delayMicroseconds(1000);
  digitalWrite(D8, LOW);
  delayMicroseconds(1000);
  digitalWrite(D8, HIGH);
  delayMicroseconds(500);
  digitalWrite(D7, LOW);
  delayMicroseconds(500);
  digitalWrite(D8, LOW);
  delayMicroseconds(1000);
  digitalWrite(D8, HIGH);
  delayMicroseconds(1000);
  digitalWrite(D6, LOW);
  digitalWrite(D7, HIGH);
  digitalWrite(D8, LOW);
  delayMicroseconds(1000);
  digitalWrite(D8, HIGH);
  delayMicroseconds(1000);
  digitalWrite(D8, LOW);
  delayMicroseconds(500);
  digitalWrite(D7, LOW);
  delayMicroseconds(500);
  digitalWrite(D8, HIGH);
  delayMicroseconds(1000);
  digitalWrite(D8, LOW);
  delayMicroseconds(1000);// 6=100HZ//7=200HZ//8=500HZ
  //the blink frequency can be changed what you want, explore it!
  //The rainbow is pretty fascinating and gets more fascinating the more you try it.
}
