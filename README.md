# Conway's Game of Life in C

Conway's Game of Life, using C, Unity, and a 64x32 LED matrix panel.  The interface to the LED matrix panel is already written (see ledmatrix.h).

## Conway's Game of Life

The universe of the Game of Life is an infinite, two-dimensional orthogonal grid of square cells, each of which is in one of two possible states, alive or dead, (or populated and unpopulated, respectively). Every cell interacts with its eight neighbours, which are the cells that are horizontally, vertically, or diagonally adjacent. At each step in time, the following transitions occur:

1. Any live cell with fewer than two live neighbours dies, as if by underpopulation.
2. Any live cell with two or three live neighbours lives on to the next generation.
3. Any live cell with more than three live neighbours dies, as if by overpopulation.
4. Any dead cell with exactly three live neighbours becomes a live cell, as if by reproduction.


### Implementing on Hardware

Using an Arduino Mega 2560, the setup guide at https://learn.sparkfun.com/tutorials/rgb-panel-hookup-guide/all shows how to configure the hardware for a 64x32 LED matrix.

The build for hardware is designed to be run with arduino-cli.  You will need at least the following libraries installed via the arduino-cli tool:

* RGB_matrix_Panel
* Adafruit_GFX_Library


This is a good starting point for anybody who needs to write Test Driven C code using the Unity framework.
Changing some variables will change the names of the software.
