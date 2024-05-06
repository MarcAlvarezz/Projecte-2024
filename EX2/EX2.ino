const int motorDret = 6;
const int motorEsq = 5;
const int sensorDret = A4;
const int sensorEsq = A5;
int estatDret = 0;
int estatEsq = 0;

void setup()
{
  Serial.begin(9600);


  pinMode (motorDret, OUTPUT) ;
  pinMode (motorEsq, OUTPUT) ;
  digitalWrite (motorDret, LOW) ;
  digitalWrite (motorEsq, LOW) ;
  pinMode (sensorDret, INPUT) ;
  pinMode (sensorEsq, INPUT);
}
void loop ()
{
estatDret = digitalRead(sensorDret); 
estatEsq = digitalRead(sensorEsq);

if (estatDret == 0) 
{
digitalwrite (motorDret, HIGH) ;
}
else
{
digitalWrite (motorDret, LOW) ;
}
if (estatEsq== 0)
{
digitalwrite (motorEsq, HIGH);
}
else
{
digitalWrite (motorEsa, LOW) ;
}
}