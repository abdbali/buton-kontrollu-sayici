#include <LiquidCrystal.h> 
const int buton_saydir = 13; 
const int buton_sifirla = 10; 
int sayac = 0;
int butonDurumu = 0; 
int butonDurumu2 = 0; 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() 
{lcd.begin(16, 2); 
 pinMode(buton_saydir, INPUT); 
 pinMode(buton_sifirla, INPUT);}
 if (butonDurumu == HIGH) 
 {sayac ++; 
 delay(500); 
 lcd.setCursor(0, 1); 
 lcd.print(sayac); }
butonDurumu2=digitalRead(buton_sifirla);
 if (butonDurumu2 == HIGH) 
 {lcd.clear();
 sayac =0; 
 delay(500); 
 lcd.setCursor(0, 1); 
void loop() {
butonDurumu = digitalRead(buton_saydir);
 lcd.print(sayac);}}