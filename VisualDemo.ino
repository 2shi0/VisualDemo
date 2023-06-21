#include <M5StickCPlus.h>
#include "m5_display.h"

void setup()
{
    m5_display m;

    m.init();

    while (1)
    {
        m.draw();
    }
}
void loop()
{
}