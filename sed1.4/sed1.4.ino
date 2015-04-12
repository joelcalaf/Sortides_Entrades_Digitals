const int led0 = 5; // donar nom al pin 5 de l’Arduino
const int led1 = 6; // donar nom al pin 6 de l’Arduino
const int led2 = 7; // donar nom al pin 7 de l’Arduino
const int led3 = 8; // donar nom al pin 8 de l’Arduino
int pausa = 1000; // definir variable de temps en ms
//********** Setup ****************************************************************
void setup()
{
pinMode(led0, OUTPUT); // definir el pin 5 com una sortida
pinMode(led1, OUTPUT); // definir el pin 6 com una sortida
pinMode(led2, OUTPUT); // definir el pin 7 com una sortida
pinMode(led3, OUTPUT); // definir el pin 8 com una sortida
}
//********** Loop *****************************************************************
void loop()
{
digitalWrite(led0, LOW);
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
delay(pausa); // es queden leds pausa ms en aquest estat
digitalWrite(led0, HIGH);
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
delay(pausa); // es queden leds pausa ms en aquest estat
digitalWrite(led0, LOW);
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
delay(pausa); // es queden leds pausa ms en aquest estat
digitalWrite(led0, HIGH);
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
delay(pausa); // es queden leds pausa ms en aquest estat
digitalWrite(led0, LOW);
digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);
digitalWrite(led3, LOW);
delay(pausa); // es queden leds pausa ms en aquest estat
digitalWrite(led0, HIGH);
digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);
digitalWrite(led3, LOW);
delay(pausa); // es queden leds pausa ms en aquest estat
digitalWrite(led0, LOW);
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led3, LOW);
delay(pausa); // es queden leds pausa ms en aquest estat
digitalWrite(led0, HIGH);
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led3, LOW);
delay(pausa); // es queden leds pausa ms en aquest estat
digitalWrite(led0, LOW);
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);
delay(pausa); // es queden leds pausa ms en aquest estat
digitalWrite(led0, HIGH);
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);
delay(pausa); // es queden leds pausa ms en aquest estat
digitalWrite(led0, LOW);
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);
delay(pausa); // es queden leds pausa ms en aquest estat
digitalWrite(led0, HIGH);
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);
delay(pausa); // es queden leds pausa ms en aquest estat
digitalWrite(led0, LOW);
digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);
delay(pausa); // es queden leds pausa ms en aquest estat
digitalWrite(led0, HIGH);
digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);
delay(pausa); // es queden leds pausa ms en aquest estat
digitalWrite(led0, LOW);
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);
delay(pausa); // es queden leds pausa ms en aquest estat
digitalWrite(led0, HIGH);
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);
delay(pausa); // es queden leds pausa ms en aquest estat
}
