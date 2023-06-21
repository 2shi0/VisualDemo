#include <M5StickCPlus.h>
#include "m5_display.h"

m5_display m;
int deg = 0;

void setup()
{
    m.init();
}
void loop()
{
    m.draw(deg);
    deg++;
    if (deg > 360)
        deg = 0;
}