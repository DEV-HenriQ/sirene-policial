#define azul 4
#define vermelho 3

void setup()
{
  pinMode(azul, OUTPUT);
  pinMode(vermelho, OUTPUT);
}

void loop()
{
  piscaAzul(0.2);
  piscaVermelho(0.2);
}

void piscaAzul(float temp)
{
  digitalWrite(azul, HIGH);
  digitalWrite(vermelho, LOW);
  delay(temp * 1000);
}

void piscaVermelho(float temp)
{
  digitalWrite(vermelho, HIGH);
  digitalWrite(azul, LOW);
  delay(temp * 1000);
}