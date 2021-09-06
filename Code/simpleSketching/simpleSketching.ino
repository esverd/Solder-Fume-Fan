
int pinPotmeter = 3;
int pinMotor = 0;

void setup() 
{
  pinMode(pinPotmeter, INPUT);
  pinMode(pinMotor, OUTPUT);
}

void loop() 
{
  int potVal = analogRead(pinPotmeter);
  int PWMVal = map(potVal, 0, 1023, 0, 255);
  analogWrite(pinMotor, PWMVal);
  delay(50);
}
