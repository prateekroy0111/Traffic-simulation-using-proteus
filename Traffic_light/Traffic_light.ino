int road1[] = {13,12,11};  //lane 1 red, yellow and green
int road2[] = {10,9,8}; //lane 2 red, yellow and green
int road3[] = {7,6,5};  //lane 3 red, yellow and green
int road4[] = {4,3,2};  //lane 4 red, yellow and green

void setup()
{
  for (int i=0; i<3; i++)
  {
    pinMode(road1[i], OUTPUT);
    pinMode(road2[i], OUTPUT);
    pinMode(road3[i], OUTPUT);
    pinMode(road4[i], OUTPUT);
  }
  
  for (int i=0; i<3; i++)
  {
    digitalWrite(road1[i], LOW);
    digitalWrite(road2[i], LOW);
    digitalWrite(road3[i], LOW);
    digitalWrite(road4[i], LOW);
  }
}

void loop()
{
  digitalWrite(road1[2], HIGH);
  digitalWrite(road3[0], HIGH);
  digitalWrite(road4[0], HIGH);
  digitalWrite(road2[0], HIGH);
  delay(7000);
  digitalWrite(road1[2], LOW);
  digitalWrite(road3[0], LOW);
  digitalWrite(road1[1], HIGH);
  digitalWrite(road3[1], HIGH);
  delay(3000);
  digitalWrite(road1[1], LOW);
  digitalWrite(road3[1], LOW);
  digitalWrite(road1[0], HIGH);
  digitalWrite(road3[2], HIGH);
  delay(7000);
  digitalWrite(road3[2], LOW);
  digitalWrite(road4[0], LOW);
  digitalWrite(road3[1], HIGH);
  digitalWrite(road4[1], HIGH);
  delay(3000);
  digitalWrite(road3[1], LOW);
  digitalWrite(road4[1], LOW);
  digitalWrite(road3[0], HIGH);
  digitalWrite(road4[2], HIGH);
  delay(7000);
  digitalWrite(road4[2], LOW);
  digitalWrite(road2[0], LOW);
  digitalWrite(road4[1], HIGH);
  digitalWrite(road2[1], HIGH);
  delay(3000);
  digitalWrite(road4[1], LOW);
  digitalWrite(road2[1], LOW);
  digitalWrite(road4[0], HIGH);
  digitalWrite(road2[2], HIGH);
  delay(7000);
  digitalWrite(road1[0], LOW);
  digitalWrite(road2[2], LOW);
  digitalWrite(road1[1], HIGH);
  digitalWrite(road2[1], HIGH);
  delay(3000);
  digitalWrite(road2[1], LOW);
  digitalWrite(road1[1], LOW);
}
