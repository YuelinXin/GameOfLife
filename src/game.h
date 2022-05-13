/**
* @file: game.h
* 
* This program is the implementation of Conway's Game of Life in C
* This program uses the SDL2 library to display all the content and views
*
* Run the main program with "sh run.sh"
* This command will auto compile the program using the Makefile, 
* and run the program "./build/debug/exe"
* 
* Authorship:       Yuelin Xin
* Affiliation:      School of Computing, University of Leeds
* Organization:     MiracleFactory
* Organization URL: https://www.miraclefactory.co/
**/

/**
* This file contains all the function prototypes that are used to implement Conway's Game of Life
* This file also contains all the marcos related to the game
**/


#ifndef BOARD_H
#define BOARD_H


/** Include all the libraries **/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #include <stdint.h>
// #include <ctype.h>
// #include <time.h>
// #include <math.h>
// #include <assert.h>
#include "../include/SDL2/SDL.h"
#include "../include/SDL2/SDL_image.h"


/** Define all the marcos in the game **/
#define LIVING_CELL_R 255
#define LIVING_CELL_G 255
#define LIVING_CELL_B 255
#define DEAD_CELL_R 20
#define DEAD_CELL_G 20
#define DEAD_CELL_B 20


/** define all the structs used in the board **/
typedef struct
{
    int rows;
    int columns;
    Uint8 grid[ 0 ];
} Board;

typedef struct
{
    int camera_x;
    int camera_y;
    int cell_size;
    int height_in_cells;
    int width_in_cells;
    int window_height;
    int window_width;
    int movement_speed_in_cells;
    int min_movement_speed_in_pixels;
} Window;


/** Define all the function prototypes **/
Board* init_board( int rows, int columns, int living_cell_count );



#endif
