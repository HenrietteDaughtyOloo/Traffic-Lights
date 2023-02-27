// C++ code
int green = 13;
int yellow = 8;
int red = 3;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(red, LOW);
  
  
  
  digitalWrite(yellow, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(yellow, LOW);
  delay(500); // Wait for 500 millisecond(s)
  
    
  digitalWrite(yellow, HIGH);
  delay(1000); // Wait for 10000 millisecond(s)
  digitalWrite(yellow, LOW);
  delay(500); // Wait for 500 millisecond(s)
  
  digitalWrite(yellow, HIGH);
  delay(1000); // Wait for 10000 millisecond(s)
  digitalWrite(yellow, LOW);
  delay(500); // Wait for 500 millisecond(s)
  
  digitalWrite(green, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(green, LOW);
  
   digitalWrite(yellow, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(yellow, LOW);
  delay(500); // Wait for 500 millisecond(s)
  
    
  digitalWrite(yellow, HIGH);
  delay(1000); // Wait for 10000 millisecond(s)
  digitalWrite(yellow, LOW);
  delay(500); // Wait for 500 millisecond(s)
  
  digitalWrite(yellow, HIGH);
  delay(1000); // Wait for 10000 millisecond(s)
  digitalWrite(yellow, LOW);
  delay(500); // Wait for 500 millisecond(s)
   
}
