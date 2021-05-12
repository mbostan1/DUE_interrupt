int pin2 = 2; // J10(1-2)
int pin3 = 3; // J10(3-4)
int pin4 = 4; // J10(5-6)
int pin5 = 5; // J10(7-8) 
int pin6 = 6; // J10(9-10)
int pin7 = 7; // J10(17-18)
int pin8 = 8; // J12(B-C)
int pin9 = 9; // J12(E-F)

volatile int i2 = 0;
volatile int i3 = 0;
volatile int i4 = 0;
volatile int i5 = 0;
volatile int i6 = 0;
volatile int i7 = 0;
volatile int i8 = 0;
volatile int i9 = 0;

void test2() {
  i2++;
}
void test3() {
  i3++;
}
void test4() {
  i4++;
}
void test5() {
  i5++;
}
void test6() {
  i6++;
}
void test7() {
  i7++;
}
void test8() {
  i8++;
}
void test9() {
  i9++;
}

void setup() {
  Serial.begin(9600);
  attachInterrupt(pin2, test2, FALLING);
  attachInterrupt(pin3, test3, FALLING);
  attachInterrupt(pin4, test4, FALLING);
  attachInterrupt(pin5, test5, FALLING);
  attachInterrupt(pin6, test6, FALLING);
  attachInterrupt(pin7, test7, FALLING);
  attachInterrupt(pin8, test8, FALLING);
  attachInterrupt(pin9, test9, FALLING);
}

void loop() {
  if (i2 > 1) {
    Serial.print("J10(1-2) count = ");
    Serial.println(i2);
  }
  if (i3 > 1) {
    Serial.print("J10(3-4) count = ");
    Serial.println(i3);
  }
  if (i4 > 0) {
    Serial.print("J10(5-6) count = ");
    Serial.println(i4);
  }
  if (i5 > 0) {
    Serial.print("J10(7-8) count = ");
    Serial.println(i5);
  }
  if (i6 > 0) {
    Serial.print("J10(9-10) count = ");
    Serial.println(i6);
  }
  if (i7 > 0) {
    Serial.print("J10(17-18) count = ");
    Serial.println(i7);
  }
  if (i8 > 0) {
    Serial.print("J12(B-C) count = ");
    Serial.println(i8);
  }
  if (i9 > 0) {
    Serial.print("J12(E-F) count = ");
    Serial.println(i9);
  }

  
  if (i2 == 1 and i3 == 1 and i4 == 0 and i5 == 0 and i6 == 0 and i7 == 0 and i8 == 0 and i7 == 0) {
    Serial.println("All line dont have any problem");
  }
}
