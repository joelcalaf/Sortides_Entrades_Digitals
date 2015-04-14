const int segA = 5; // donar nom al pin 5 de l’Arduino
const int segB = 6; // donar nom al pin 6 de l’Arduino
const int segC = 7; // donar nom al pin 7 de l’Arduino
const int segD = 8; // donar nom al pin 8 de l’Arduino
const int segE = 9; // donar nom al pin 9 de l’Arduino
const int segF = 10; // donar nom al pin 10 de l’Arduino
const int segG = 11; // donar nom al pin 11 de l’Arduino
int pausa = 500; // definir variable de temps en ms

void setup()
{
  pinMode(segA, OUTPUT); // definir el pin 5 com una sortida
  pinMode(segB, OUTPUT); // definir el pin 6 com una sortida
  pinMode(segC, OUTPUT); // definir el pin 7 com una sortida
  pinMode(segD, OUTPUT); // definir el pin 8 com una sortida
  pinMode(segE, OUTPUT); // definir el pin 9 com una sortida
  pinMode(segF, OUTPUT); // definir el pin 10 com una sortida
  pinMode(segG, OUTPUT); // definir el pin 11 com una sortida
  
  digitalWrite(segA, LOW); // número 0
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, HIGH); // segments ON: A, B, C, D, E i F
  
  delay(pausa); // es queda en aquest estat pausa ms
}

void loop()
{
  digitalWrite(segA, HIGH); // número 1
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH); // segments ON: B, C
  
  delay(pausa); // es queda en aquest estat pausa ms
  
  digitalWrite(segA, LOW); // número 2
  digitalWrite(segC, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segG, LOW); // segments ON: A, B, D, E i G
  
  delay(pausa); // es queda en aquest estat pausa ms
  
  digitalWrite(segC, LOW); // número 3
  digitalWrite(segE, HIGH); // segments ON: A, B, C, D i G
  
  delay(pausa); // es queda en aquest estat pausa ms
  
  digitalWrite(segA, HIGH); // número 4
  digitalWrite(segD, HIGH);
  digitalWrite(segF, LOW); // segments ON: B, C, F i G
  
  delay(pausa); // es queda en aquest estat pausa ms
  
  digitalWrite(segA, LOW); // número 5
  digitalWrite(segB, HIGH);
  digitalWrite(segD, LOW); // segments ON: A, C, D, F i G
  
  delay(pausa); // es queda en aquest estat pausa ms
  
  digitalWrite(segA, HIGH); // número 6
  digitalWrite(segE, LOW); // segments ON: C, D, E, F i G
  
  delay(pausa); // es queda en aquest estat pausa ms
  
  digitalWrite(segA, LOW); // número 7
  digitalWrite(segB, LOW);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH); // segments ON: A, B i C
  
  delay(pausa); // es queda en aquest estat pausa ms
  
  digitalWrite(segD, LOW); // número 8
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW); // segments ON: A, B, C, D, E, F i G
  
  delay(pausa); // es queda en aquest estat pausa ms
  
  digitalWrite(segD, HIGH); // número 9
  digitalWrite(segE, HIGH); // segments ON: A, B, C, F i G
  
  delay(pausa); // es queda en aquest estat pausa ms
  
  digitalWrite(segD, LOW); // número 0
  digitalWrite(segE, LOW);
  digitalWrite(segG, HIGH); // segments ON: A, B, C, D, E i F
  
  delay(pausa); // es queda en aquest estat pausa ms
}
