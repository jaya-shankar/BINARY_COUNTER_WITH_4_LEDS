// BINARY COUNTER WITH 4 LEDS TO COUNT TILL 15:
int piw = 6;
int pir = 8;
int pigr = 9;
int pib = 10;
int ht = 500;
int lht = 10000;
void setup() {
  // put your setup code here, to run once:
pinMode(piw, OUTPUT);
pinMode(pir, OUTPUT);
pinMode(pigr, OUTPUT);
pinMode(pib, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
// GIVES BINARY ZERO
delay (ht);
delay (lht);
//  gives binary one :
digitalWrite(piw, HIGH);
digitalWrite(pir, LOW);
digitalWrite(pigr, LOW);
digitalWrite(pib, LOW);
delay(lht);
// gives binary two:
digitalWrite(piw, LOW);
digitalWrite(pir, HIGH);
digitalWrite(pigr, LOW);
digitalWrite(pib, LOW);
delay(lht);
// GIVES BINARY THREE:
digitalWrite(piw, HIGH);
digitalWrite(pir, HIGH);
digitalWrite(pigr, LOW);
digitalWrite(pib, LOW);
delay(lht);

// GIVES BINARY FOUR:
digitalWrite(piw, LOW);
digitalWrite(pir, LOW);
digitalWrite(pigr, HIGH);
digitalWrite(pib, LOW);
delay(lht);
// GIVES BINARY FIVE:
digitalWrite(piw, HIGH);
digitalWrite(pir, LOW);
digitalWrite(pigr, HIGH);
digitalWrite(pib, LOW);
delay(lht);
// GIVES BINARY SIX:
digitalWrite(piw, LOW);
digitalWrite(pir, HIGH);
digitalWrite(pigr, HIGH);
digitalWrite(pib, LOW);
delay(lht);
// GIVES BINARY SEVEN:
digitalWrite(piw, HIGH);
digitalWrite(pir, HIGH);
digitalWrite(pigr, HIGH);
digitalWrite(pib, LOW);
delay(lht);
// GIVES BINARY EIGHT:
digitalWrite(piw, LOW);
digitalWrite(pir, LOW);
digitalWrite(pigr,LOW);
digitalWrite(pib, HIGH);
delay(lht);

// GIVES BINARY NINE:
digitalWrite(piw, HIGH);
digitalWrite(pir, LOW);
digitalWrite(pigr, LOW);
digitalWrite(pib, HIGH);
delay(lht);
// GIVES BINARY TEN:
digitalWrite(piw, LOW);
digitalWrite(pir, HIGH);
digitalWrite(pigr, LOW);
digitalWrite(pib, HIGH);
delay(lht);
// GIVES BINARY ELEVEN:
digitalWrite(piw, HIGH);
digitalWrite(pir, HIGH);
digitalWrite(pigr, LOW);
digitalWrite(pib, HIGH);
delay(lht);
// GIVES BINARY TWELVE:
digitalWrite(piw,LOW);
digitalWrite(pir, LOW);
digitalWrite(pigr, HIGH);
digitalWrite(pib, HIGH);
delay(lht);
// GIVES BINARY THIRTEEN:
digitalWrite(piw, HIGH);
digitalWrite(pir, LOW);
digitalWrite(pigr, HIGH);
digitalWrite(pib, HIGH);
delay(lht);
// GIVES BINARY FOURTEEN:
digitalWrite(piw, LOW);
digitalWrite(pir, HIGH);
digitalWrite(pigr, HIGH);
digitalWrite(pib, HIGH);
delay(lht);
// GIVES BINARY FIFTEEN:
digitalWrite(piw, HIGH);
digitalWrite(pir, HIGH);
digitalWrite(pigr, HIGH);
digitalWrite(pib, HIGH);
delay(lht);
}
