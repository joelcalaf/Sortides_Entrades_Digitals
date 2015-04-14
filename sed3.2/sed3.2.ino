const int segA = 5; // donar nom al pin 5 de l’Arduino
const int segB = 6; // donar nom al pin 6 de l’Arduino
const int segC = 7; // donar nom al pin 7 de l’Arduino
const int segD = 8; // donar nom al pin 8 de l’Arduino
const int segE = 9; // donar nom al pin 9 de l’Arduino
const int segF = 10; // donar nom al pin 10 de l’Arduino
const int segG = 11; // donar nom al pin 11 de l’Arduino
const int buttonPin = 2; // donar nom al pin 2 de l’Arduino
boolean buttonEstat = HIGH; // definir variable d'estat pel polsador

int num = 0; // definir variable del número a mostrar

void setup()
{
  pinMode(segA, OUTPUT); // definir el pin 5 com una sortida
  pinMode(segB, OUTPUT); // definir el pin 6 com una sortida
  pinMode(segC, OUTPUT); // definir el pin 7 com una sortida
  pinMode(segD, OUTPUT); // definir el pin 8 com una sortida
  pinMode(segE, OUTPUT); // definir el pin 9 com una sortida
  pinMode(segF, OUTPUT); // definir el pin 10 com una sortida
  pinMode(segG, OUTPUT); // definir el pin 11 com una sortida
  pinMode(buttonPin, INPUT); // definir el pin 2 com una entrada
  
  digitalWrite(segA, HIGH); // posar a 0V el pin 5
  digitalWrite(segB, HIGH); // posar a 0V el pin 6
  digitalWrite(segC, HIGH); // posar a 0V el pin 7
  digitalWrite(segD, HIGH); // posar a 0V el pin 8
  digitalWrite(segE, HIGH); // posar a 0V el pin 9
  digitalWrite(segF, HIGH); // posar a 0V el pin 10
  digitalWrite(segG, HIGH); // posar a 0V el pin 11
}
//********** Loop *****************************************************************
void loop()
{
  delay(500); // per evitar que en una pulsació curta salti més d'un número
  buttonEstat = digitalRead(buttonPin);
  if (buttonEstat == LOW)
  {
    num = num + 1; // incrementar el número a mostrar
    if (num == 10) num = 0; // si s'ha superat 9 tornar a 0
  }
  switch(num)
  {
  case 0:
    digitalWrite(segA, LOW); // número 0
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segE, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, HIGH); // segments ON: A, B, C, D, E i F
    break;
  case 1:
    digitalWrite(segA, HIGH); // número 1
    digitalWrite(segD, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, HIGH); // segments ON: B, C
    break;
  case 2:
    digitalWrite(segA, LOW); // número 2
    digitalWrite(segC, HIGH);
    digitalWrite(segD, LOW);
    digitalWrite(segE, LOW);
    digitalWrite(segG, LOW); // segments ON: A, B, D, E i G
    break;
  case 3:
    digitalWrite(segC, LOW); // número 3
    digitalWrite(segE, HIGH); // segments ON: A, B, C, D i G
    break;
  case 4:
    digitalWrite(segA, HIGH); // número 4
    digitalWrite(segD, HIGH);
    digitalWrite(segF, LOW); // segments ON: B, C, F i G
    break;
  case 5:
    digitalWrite(segA, LOW); // número 5
    digitalWrite(segB, HIGH);
    digitalWrite(segD, LOW); // segments ON: A, C, D, F i G
    break;
  case 6:
    digitalWrite(segA, HIGH); // número 6
    digitalWrite(segE, LOW); // segments ON: C, D, E, F i G
    break;
  case 7:
    digitalWrite(segA, LOW); // número 7
    digitalWrite(segB, LOW);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH); // segments ON: A, B i C
    break;
  case 8:
    digitalWrite(segD, LOW); // número 8
    digitalWrite(segE, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW); // segments ON: A, B, C, D, E, F i G
    break;
  case 9:
    digitalWrite(segD, HIGH); // número 9
    digitalWrite(segE, HIGH); // segments ON: A, B, C, F i G
    break;
   }
 }
