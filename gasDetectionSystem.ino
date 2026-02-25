#include <Servo.h>
#include <LiquidCrystal.h>

int greenled = 2;
int redled = 3;
int buzz = 11;
int sensor = A0;

Servo servo;

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);


void setup()
{
  pinMode(greenled, OUTPUT);
  pinMode(redled, OUTPUT);
  pinMode(buzz, OUTPUT);
  pinMode(sensor, INPUT);
  lcd.begin(16, 2);
  Serial.begin(9600);
  servo.attach(10);
}

void loop()
{
  Serial.println(analogRead(sensor));
  if (analogRead(sensor) < 10)
{
  lcd.setCursor(2,0);
  lcd.print("Gas detected!");
  delay(500);
  lcd.setCursor(3,1);
  lcd.print("Evacuate");
  delay(500);
  lcd.clear();
  digitalWrite(greenled, LOW);
  digitalWrite(redled, HIGH);
  digitalWrite(buzz, HIGH);
  servo.write(90);
}else {
  digitalWrite(greenled, HIGH);
  digitalWrite(redled, LOW);
  digitalWrite(buzz, LOW);
  lcd.setCursor(0,0);
  lcd.print("Safe");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("All clear");
  delay(1000);
  lcd.clear();
  servo.write(0);
}
  
}