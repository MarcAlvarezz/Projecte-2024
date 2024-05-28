int ledDret = 6, ledEsq = 5;
int valorDret = 0, valorEsq = 0;
int esDret = 1;

//*******Setup******************************************************
void setup()
{
  Serial.begin(9600);
  Serial.println("Entrar una intensitat del 0 al 9");
  pinMode(ledDret, OUTPUT);
  pinMode(ledEsq, OUTPUT);
  analogWrite(ledDret, valorDret);
  analogWrite(ledEsq, valorEsq);
}

//********Loop*******************************************************
void loop()
{
  if (Serial.available() > 0)
  {
    if (esDret == 1)
    {
      valorDret = Serial.read() -0x30;
      if (valorDret != 0) valorDret = (255 * valorDret) / 9;
      analogWrite (ledDret, valorDret);
      esDret = 0;
    }
    else 
    {
      valorEsq = Serial.read() -0x30;
      if (valorEsq != 0) valorEsq = (255 * valorEsq) / 9;
      analogWrite(ledEsq, valorEsq);
      esDret = 1;
    }
    // Depuracciio
    Serial.print("motor dret :");
    Serial.print(valorDret, DEC);
    Serial.print("motor esquerre:");
    Serial.println(valorEsq, DEC);
  }
}