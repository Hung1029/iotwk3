#include <Wire.h> 
#include "SSD1306Wire.h" 
SSD1306Wire  display(0x3c, 21, 22);


void setup() {
 
  display.init();
  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_24);
  

}

void loop() {
display.clear();
display.drawString(40,20, String(analogRead(A0)));
display.display();
delay(200);


}
