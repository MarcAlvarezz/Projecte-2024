const int motorDret = 6;
const int motorEsq = 5;
const int sensorDret = A4;
const int sensorEsq = A5;
int estatDret = 0;
int estatEsq = 0;

//********** Setup ******************************************
void setup()
{
  Serial.begin(9600);

  pinMode(motorDret, OUTPUT);
  pinMode(motorEsq, OUTPUT);
  digitalWrite(motorDret, LOW);
  digitalWrite(motorEsq, LOW);
  pinMode(sensorDret, INPUT);
  pinMode(sensorEsq, INPUT);
}
//********** Loop ********************************************
void loop()
{
  estatDret = digitalRead(sensorDret);
  estatEsq = digitalRead(sensorEsq);

  //****** ESTRUCTURA DE CONTROL *********

  if ((estatDret == 0) && (estatEsq == 0))
  {
    digitalWrite(motorDret, HIGH);
    digitalWrite(motorEsq, HIGH);
  }
  else if ((estatDret == 1) && (estatEsq == 0))
  {
    digitalWrite(motorDret, HIGH);
    digitalWrite(motorEsq, LOW);
  }
  else if ((estatDret == 0) && (estatEsq == 1))
  {
    digitalWrite(motorDret, LOW);
    digitalWrite(motorEsq, HIGH);
  }
  else
  {
    
  }
}
