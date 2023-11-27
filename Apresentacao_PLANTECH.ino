#include <LiquidCrystal_I2C.h>

// set the LCD number of columns and rows
int lcdColumns = 16;
int lcdRows = 2;

// set LCD address, number of columns and rows
// if you don't know your display address, run an I2C scanner sketch
LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);  

void setup(){
  // initialize LCD
  lcd.init();
  // turn on LCD backlight                      
  lcd.backlight();
}

void loop(){
  // set cursor to first column, first row
  lcd.setCursor(0, 0);
  // print message
  lcd.print("PLANTECH IoT APP");
  delay(3000);
  // clears the display to print new message
  //lcd.clear();
  // set cursor to first column, second row
  lcd.setCursor(0,1);
  lcd.print("BRASIL,SIL,SIL!!");
  delay(3000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(" ESP32 ESP8266");
  delay(3000);
  //lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("APRENDER E VIVER");
  delay(3000);
  lcd.clear();
  lcd.print("   FELIZ NATAL");
  delay(3000);
  // clears the display to print new message
  //lcd.clear();
  // set cursor to first column, second row
  lcd.setCursor(0,1);
  lcd.print("   FELIZ 2024");
  delay(3000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("     MUITO");
  delay(2000);
  //lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("   OBRIGADO!");
  delay(3000);
  lcd.clear();
}
