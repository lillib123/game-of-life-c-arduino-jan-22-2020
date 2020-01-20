#ifndef _LEDMATRIX_H_
#define _LEDMATRIX_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

    void led_begin(void *);
    void led_draw(uint16_t x, uint16_t y, int16_t color);
    uint16_t led_color(uint8_t r, uint8_t g, uint8_t b);

#ifdef __cplusplus
}
#endif

#endif