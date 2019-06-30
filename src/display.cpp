#include "display.h"
#include <U8x8lib.h>

U8X8_SH1106_128X64_NONAME_HW_I2C u8x8(/* reset=*/U8X8_PIN_NONE); // U8x8 Constructor

#define FONTBIG        u8x8_font_inb33_3x6_f

#define FONTMEDIUM     u8x8_font_inb21_2x4_f // fonts: https://github.com/olikraus/u8g2/wiki/fntlist8x8
#define FONTMEDIUM_W   18 // width
#define FONTMEDIUM_H   34 // height
// #define FONTMEDIUM  u8x8_font_courB18_2x3_f
#define FONTSMALL   u8x8_font_8x13B_1x2_f 

void printBig (String msg)
{
  u8x8.setFont(FONTBIG);
  u8x8.setCursor(0, 0);
  u8x8.print(msg);
  delay(2000);
  u8x8.clear();
}

void printMedium (String msg)
{
  u8x8.setFont(FONTMEDIUM);
  u8x8.setCursor(0, 0);
  u8x8.print(msg);
  delay(2000);
  u8x8.clear();
}


void beginDisplay(void)
{
  u8x8.begin();
}
