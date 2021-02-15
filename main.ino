#include <LiquidCrystal.h>
int str = 0;
int symb = 0;
 
char arr_en[] = {'!', '?', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};
LiquidCrystal lcd = LiquidCrystal(3, 4, 6, 7, 8, 9);

void setup() {
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
  lcd.begin(16, 2);
}

void loop() {
  if (digitalRead(11) == HIGH)
  {
    symb ++;
    if (symb == 16)
    {
      symb = 0;
      str = abs(str - 1);
    }
  }
  if (digitalRead(10) == HIGH)
  {
    symb --;
    if (symb == -1)
    {
      symb = 15;
      str = abs(str - 1);
    }
  }
  lcd.setCursor(symb, str);
  delay(150);
}
