#ifndef _ARDUINO_H_
#define _ARDUINO_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

    int analogRead(uint8_t pin);

    void analogRead_will_return(int);

    unsigned srand_called_with();

#define A0 0x21
#define A1 0x22
#define A2 0x23
#define A3 0x24
#define A4 0x25
#define A5 0x26
#define A6 0x27
#define A7 0x28
#define A8 0x29

#ifdef __cplusplus
}
#endif

#endif