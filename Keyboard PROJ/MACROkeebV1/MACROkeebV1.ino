#include <Arduino.h>
#include <U8g2lib.h>

//Universal 8bit Graphics Library (https://github.com/olikraus/u8g2/)
U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

void setup(void) {
  Serial.begin(9600);
  u8g2.begin();
  delay(1000); 
  Serial.println("MACROkeebV1 Booting Up...");
}

void loop(void) {
  u8g2.clearBuffer();                 // clear the internal memory
  u8g2.setFont(u8g2_font_ncenB08_tr); // choose a suitable font
  u8g2.drawStr(0,10,"MACROkeebV1 Ready!");  // write something to the internal memory
  u8g2.sendBuffer();                  // transfer internal memory to the display
  delay(1000);  
}
