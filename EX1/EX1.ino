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
 digitalWrite (motorDret, HIGH) ; 
 digitalWrite (motorEsq, LOW) ;
 delay (500) ;
 digita Write (motorDret, LOW) ; 
 digitalWrite (motorEsq, HIGH);
 delay(500);
}