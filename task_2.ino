#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

int voltagePin = A0;

void setup(){

  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Voltage: ");


}

void loop(){
  int rawVoltage = analogRead(voltagePin);
  
  double voltage = rawVoltage * (5.0/1023);

  lcd.setCursor(0, 1);
  lcd.print(voltage,2);
  
  delay(1000);
