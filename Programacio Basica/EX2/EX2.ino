const int motorDret = 5;
const int motorEsq = 6;
const int sensorDret = A3;
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
digitalWrite (motorDret, HIGH) ;
}
else
{
digitalWrite (motorDret, LOW) ;
}
if (estatEsq== 0)
{
digitalWrite (motorEsq, HIGH);
}
else
{
digitalWrite (motorEsq, LOW);
}
}
