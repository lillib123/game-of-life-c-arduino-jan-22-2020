#include "ledmatrix.h"
#include "RGBmatrixPanel.h"

RGBmatrixPanel *m = NULL;

void led_begin(void *p)
{
    m = (RGBmatrixPanel *)p;
    m->begin();
}
void led_draw(uint16_t x, uint16_t y, int16_t color)
{
    m->drawPixel(x, y, color);
}

uint16_t led_color(uint8_t r, uint8_t g, uint8_t b)
{
    return m->Color333(r, g, b);
}