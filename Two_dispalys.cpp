#include <Arduino.h>
#include<LiquidCrystal_I2C_Hangul.h>
#include<Wire.h>

LiquidCrystal_I2C_Hangul lcd1(0x27,20,4); 
LiquidCrystal_I2C_Hangul lcd2(0x23,20,4); 

void setup() {
  Serial.begin(9600);
  lcd1.init();
  lcd2.init();
  lcd1.backlight();
  lcd2.backlight();
  lcd1.setDelayTime(500);
  lcd2.setDelayTime(500);
  lcd1.print("Display1"); //
  lcd2.print("Display2");
  lcd1.setCursor(0,1);
  lcd2.setCursor(0,1);
  lcd1.print("Texto en LCD 1"); //
  lcd2.print("Texto en LCD 2"); //
  
  lcd1.setCursor(0,3);
  lcd1.print("Dir 0x27 del Bus I2C"); //
  lcd2.setCursor(0,3);
  lcd2.print("Dir 0x23 del Bus I2C"); //
}

void loop() {
  
}
