
void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT)
pinMode(3, OUTPUT)
pinMode(4, OUTPUT)
pinMode(5, OUTPUT)
pinMode(6, OUTPUT)
pinMode(7, OUTPUT)
pinMode(8, OUTPUT)
pinMode(9, OUTPUT)
pinMode(10, OUTPUT)
pinMode(11, OUTPUT)
pinMode(12, OUTPUT)
pinMode(13, OUTPUT)
pinMode(A0, OUTPUT)
pinMode(A1, OUTPUT)
pinMode(A2, OUTPUT)
pinMode(A3, OUTPUT)
int A = HIGH
int B = LOW
}

void loop() {
  // put your main code here, to run repeatedly:

  //The top of the left digit 
digitalWrite(2, B);
digitalWrite(3, B);
digitalWrite(4, B);
digitalWrite(5, B);
//The top of the right digit
digitalWrite(6, B);
digitalWrite(7, B);
digitalWrite(8, B);
//The bottom of the left digit (including DP)
digitalWrite(9, B);
digitalWrite(10, B);
digitalWrite(11, B);
digitalWrite(12, B);
//The bottom of the right digit (also including DP)
digitalWrite(13, B);
digitalWrite(A0, B);
digitalWrite(A1, B);
digitalWrite(A2, B);
digitalWrite(A3, B);

//Guide to which one of the digitalWrite commands lights up which LED
//P2 TL1
//P3 M1
//P4 T1
//P5 TR1
//P6 TL2
//P7 T2
//P8 TR2
//P9 BL1
//P10 B1
//P11 BR1
//P12 DP1
//P13 BL2
//A0 B2
//A1 M2
//A2 BR2
//A3 DP2
