const int col1 = 10;
const int col2 = 9;
const int col3 = 8;
const int col4 = 7;
const int col5 = 6;
const int col6 = 5;
const int col7 = 4;
const int col8 = 3;
const int col9 = 2;
const int niv1 = 11;
const int niv2 = 12;
const int niv3 = 13;

int pausa = 200; // velocita de moviment del cub

void setup()
{
  pinMode(col1, OUTPUT);
  pinMode(col2, OUTPUT);
  pinMode(col3, OUTPUT);
  pinMode(col4, OUTPUT);
  pinMode(col5, OUTPUT);
  pinMode(col6, OUTPUT);
  pinMode(col7, OUTPUT);
  pinMode(col8, OUTPUT);
  pinMode(col9, OUTPUT);
  pinMode(niv1, OUTPUT);
  pinMode(niv2, OUTPUT);
  pinMode(niv3, OUTPUT);
}

void loop()
{
  digitalWrite(niv1, HIGH); // mostrat tot el nivell 1
  digitalWrite(col1, HIGH);
  delay(pausa);
  digitalWrite(col1, LOW);
  digitalWrite(col2, HIGH);
  delay(pausa);
  digitalWrite(col2, LOW);
  digitalWrite(col3, HIGH);
  delay(pausa);
  digitalWrite(col3, LOW);
  digitalWrite(col4, HIGH);
  delay(pausa);
  digitalWrite(col4, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col6, HIGH);
  delay(pausa);
  digitalWrite(col6, LOW);
  digitalWrite(col7, HIGH);
  delay(pausa);
  digitalWrite(col7, LOW);
  digitalWrite(col8, HIGH);
  delay(pausa);
  digitalWrite(col8, LOW);
  digitalWrite(col9, HIGH);
  delay(pausa);
  digitalWrite(col9, LOW);
  digitalWrite(niv1, LOW);
  digitalWrite(niv2, HIGH); // mostrat tot el nivell 2
  digitalWrite(col1, HIGH);
  delay(pausa);
  digitalWrite(col1, LOW);
  digitalWrite(col2, HIGH);
  delay(pausa);
  digitalWrite(col2, LOW);
  digitalWrite(col3, HIGH);
  delay(pausa);
  digitalWrite(col3, LOW);
  digitalWrite(col4, HIGH);
  delay(pausa);
  digitalWrite(col4, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col6, HIGH);
  delay(pausa);
  digitalWrite(col6, LOW);
  digitalWrite(col7, HIGH);
  delay(pausa);
  digitalWrite(col7, LOW);
  digitalWrite(col8, HIGH);
  delay(pausa);
  digitalWrite(col8, LOW);
  digitalWrite(col9, HIGH);
  delay(pausa);
  digitalWrite(col9, LOW);
  digitalWrite(niv2, LOW);
  digitalWrite(niv3, HIGH); // mostrat tot el nivell 3
  digitalWrite(col1, HIGH);
  delay(pausa);
  digitalWrite(col1, LOW);
  digitalWrite(col2, HIGH);
  delay(pausa);
  digitalWrite(col2, LOW);
  digitalWrite(col3, HIGH);
  delay(pausa);
  digitalWrite(col3, LOW);
  digitalWrite(col4, HIGH);
  delay(pausa);
  digitalWrite(col4, LOW);
  digitalWrite(col5, HIGH);
  delay(pausa);
  digitalWrite(col5, LOW);
  digitalWrite(col6, HIGH);
  delay(pausa);
  digitalWrite(col6, LOW);
  digitalWrite(col7, HIGH);
  delay(pausa);
  digitalWrite(col7, LOW);
  digitalWrite(col8, HIGH);
  delay(pausa);
  digitalWrite(col8, LOW);
  digitalWrite(col9, HIGH);
  delay(pausa);
  digitalWrite(col9, LOW);
  digitalWrite(niv3, LOW);
  delay(pausa);
}
