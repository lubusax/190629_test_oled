#include <Arduino.h>

#include <U8x8lib.h>

// U8x8 Constructor
// The complete list is available here: https://github.com/olikraus/u8g2/wiki/u8x8setupcpp
// Please update the pin numbers according to your setup. Use U8X8_PIN_NONE if the reset pin is not connected

//U8X8_SH1106_128X64_NONAME_HW_I2C u8x8(/* clock=*/ 5, /* data=*/ 4, /* reset=*/ U8X8_PIN_NONE);

U8X8_SH1106_128X64_NONAME_HW_I2C u8x8(/* reset=*/U8X8_PIN_NONE);

void setup(void)
{
  Serial.begin(115200);
  u8x8.begin();
  // u8x8.setPowerSave(0);
}

void loop(void)
{

  u8x8.setFont(u8x8_font_inb21_2x4_f);
  // fonts: https://github.com/olikraus/u8g2/wiki/fntlist8x8
  u8x8.setCursor(0, 0);
  u8x8.print("mensaje");
  Serial.println(" u8x8.print ");
  delay(2000);
  u8x8.clearDisplay();

  u8x8.setFont(u8x8_font_inb21_2x4_f);
  // fonts: https://github.com/olikraus/u8g2/wiki/fntlist8x8
  u8x8.drawString(0,0,"mensaje");
  Serial.println(" u8x8.drawString ");
  delay(2000);
  u8x8.clearDisplay();

  u8x8.setFont(u8x8_font_courB18_2x3_f);
  u8x8.setCursor(0, 0);
  u8x8.draw1x2String(0,0,"mensaje");
  Serial.println(" u8x8.draw1x2String ");
  delay(2000);
  u8x8.clearDisplay();


  u8x8.setFont(u8x8_font_chroma48medium8_r);
  u8x8.draw2x2String(0, 0, "mensaje");
  Serial.println(" u8x8.draw2x2String ");
  delay(2000);
  u8x8.clearDisplay();
}