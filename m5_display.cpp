#include "m5_display.h"
#include <M5StickCPlus.h>

m5_display::m5_display()
{
    color = 0;
    flag = true;

    Serial.begin(115200);
}

void m5_display::init()
{
    M5.begin();

    sprite.createSprite(M5.Lcd.width(), M5.Lcd.height());
    sprite.fillScreen(color);
    sprite.pushSprite(0, 0);
}

void m5_display::draw()
{
    if (color < 1 || color > 255)
        flag = !flag;

    if (flag)
        color++;
    else
        color--;

    sprite.fillScreen(M5.Lcd.color565(color, color, color));
    sprite.pushSprite(0, 0);

    Serial.println((int)color);
}