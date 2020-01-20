#include "Arduino.h"
#include <stdint.h>

int analogRead_return_value = 0;
unsigned srand_call_value = 0;

int analogRead(uint8_t pin)
{
    return analogRead_return_value;
}

void analogRead_will_return(int v)
{
    analogRead_return_value = v;
}

void srand(unsigned seed)
{
    srand_call_value = seed;
}

unsigned srand_called_with()
{
    return srand_call_value;
}

void led_begin(void *p)
{
    // Do nothiong
}
void led_draw(uint16_t x, uint16_t y, int16_t color)
{
    // Do nothing
}

uint16_t led_color(uint8_t r, uint8_t g, uint8_t b)
{
    return 0;
}