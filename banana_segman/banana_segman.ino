//
//  Sharp128 BoosterPackLCD SPI
//  Example for library for Sharp BoosterPack LCD with hardware SPI
//
//
//  Author :  Stefan Schauer
//  Date   :  Oct. 17, 2017
//  Version:  1.00
//  File   :  LCD_Sharp128BoosterPack_SPI_main.ino
//
//  Version:  1.00 : setup for Sharp128 Booster pack based on Sharp96 example
//
//  Based on the LCD5110 Library
//  Created by Rei VILO on 28/05/12
//  Copyright (c) 2012 http://embeddedcomputing.weebly.com
//  Licence CC = BY SA NC
//
//  Edited 2015-07-11 by ReiVilo
//  Added setOrientation(), setReverse() and flushReverse()
//

// Include application, user and local libraries
#include "SPI.h"
#include "OneMsTaskTimer.h"
#include "LCD_SharpBoosterPack_SPI.h"

// Variables
LCD_SharpBoosterPack_SPI myScreen(SHARP_128);
uint8_t myOrientation = 0;
uint16_t myCount = 0;

#define LCD_VERTICAL_MAX    myScreen.getSize()
#define LCD_HORIZONTAL_MAX  myScreen.getSize()


// Add setup code
void setup()
{
    Serial.begin(9600);

    myScreen.begin();
    myScreen.clearBuffer();

    
}

// Add loop code
void loop()
{
    myScreen.clearBuffer();
    myScreen.setFont(1);

    myScreen.setCharXY(5, 3);
    myScreen.print("BananaPeel");
    for (uint8_t i = 10; i < LCD_HORIZONTAL_MAX - 10; i++)
    {
        myScreen.setXY(i, 23, 1);
    }
    for (uint8_t i = 0; i <= 50; i++)
    {
        myScreen.setXY(10 + i, 30, 1);
        //    }
        //    for (uint8_t i=0; i<=20; i++) {
        myScreen.setXY(10, 30 + i, 1);
        //    }
        //    for (uint8_t i=0; i<=20; i++) {
        myScreen.setXY(10 + i, 80, 1);
        //    }
        //    for (uint8_t i=0; i<=20; i++) {
        myScreen.setXY(60, 30 + i, 1);
    }

    myScreen.setXY( 12 , 66 ,1);
myScreen.setXY( 13 , 64 ,1);
myScreen.setXY( 13 , 65 ,1);
myScreen.setXY( 13 , 66 ,1);
myScreen.setXY( 13 , 67 ,1);
myScreen.setXY( 13 , 68 ,1);
myScreen.setXY( 14 , 64 ,1);
myScreen.setXY( 14 , 65 ,1);
myScreen.setXY( 14 , 66 ,1);
myScreen.setXY( 14 , 67 ,1);
myScreen.setXY( 14 , 68 ,1);
myScreen.setXY( 14 , 69 ,1);
myScreen.setXY( 14 , 70 ,1);
myScreen.setXY( 15 , 64 ,1);
myScreen.setXY( 15 , 65 ,1);
myScreen.setXY( 15 , 66 ,1);
myScreen.setXY( 15 , 67 ,1);
myScreen.setXY( 15 , 68 ,1);
myScreen.setXY( 15 , 69 ,1);
myScreen.setXY( 15 , 70 ,1);
myScreen.setXY( 15 , 71 ,1);
myScreen.setXY( 16 , 64 ,1);
myScreen.setXY( 16 , 65 ,1);
myScreen.setXY( 16 , 66 ,1);
myScreen.setXY( 16 , 67 ,1);
myScreen.setXY( 16 , 68 ,1);
myScreen.setXY( 16 , 69 ,1);
myScreen.setXY( 16 , 70 ,1);
myScreen.setXY( 16 , 71 ,1);
myScreen.setXY( 16 , 72 ,1);
myScreen.setXY( 17 , 65 ,1);
myScreen.setXY( 17 , 66 ,1);
myScreen.setXY( 17 , 67 ,1);
myScreen.setXY( 17 , 68 ,1);
myScreen.setXY( 17 , 70 ,1);
myScreen.setXY( 17 , 71 ,1);
myScreen.setXY( 17 , 72 ,1);
myScreen.setXY( 18 , 66 ,1);
myScreen.setXY( 18 , 67 ,1);
myScreen.setXY( 18 , 68 ,1);
myScreen.setXY( 18 , 69 ,1);
myScreen.setXY( 18 , 70 ,1);
myScreen.setXY( 18 , 71 ,1);
myScreen.setXY( 18 , 72 ,1);
myScreen.setXY( 18 , 73 ,1);
myScreen.setXY( 19 , 67 ,1);
myScreen.setXY( 19 , 68 ,1);
myScreen.setXY( 19 , 69 ,1);
myScreen.setXY( 19 , 71 ,1);
myScreen.setXY( 19 , 72 ,1);
myScreen.setXY( 19 , 73 ,1);
myScreen.setXY( 20 , 67 ,1);
myScreen.setXY( 20 , 68 ,1);
myScreen.setXY( 20 , 69 ,1);
myScreen.setXY( 20 , 71 ,1);
myScreen.setXY( 20 , 72 ,1);
myScreen.setXY( 20 , 73 ,1);
myScreen.setXY( 21 , 67 ,1);
myScreen.setXY( 21 , 68 ,1);
myScreen.setXY( 21 , 69 ,1);
myScreen.setXY( 21 , 72 ,1);
myScreen.setXY( 21 , 73 ,1);
myScreen.setXY( 21 , 74 ,1);
myScreen.setXY( 22 , 67 ,1);
myScreen.setXY( 22 , 68 ,1);
myScreen.setXY( 22 , 69 ,1);
myScreen.setXY( 22 , 72 ,1);
myScreen.setXY( 22 , 73 ,1);
myScreen.setXY( 22 , 74 ,1);
myScreen.setXY( 23 , 67 ,1);
myScreen.setXY( 23 , 68 ,1);
myScreen.setXY( 23 , 69 ,1);
myScreen.setXY( 23 , 72 ,1);
myScreen.setXY( 23 , 73 ,1);
myScreen.setXY( 23 , 74 ,1);
myScreen.setXY( 24 , 67 ,1);
myScreen.setXY( 24 , 68 ,1);
myScreen.setXY( 24 , 69 ,1);
myScreen.setXY( 24 , 72 ,1);
myScreen.setXY( 24 , 73 ,1);
myScreen.setXY( 24 , 74 ,1);
myScreen.setXY( 25 , 67 ,1);
myScreen.setXY( 25 , 68 ,1);
myScreen.setXY( 25 , 69 ,1);
myScreen.setXY( 25 , 72 ,1);
myScreen.setXY( 25 , 73 ,1);
myScreen.setXY( 25 , 74 ,1);
myScreen.setXY( 26 , 67 ,1);
myScreen.setXY( 26 , 68 ,1);
myScreen.setXY( 26 , 69 ,1);
myScreen.setXY( 26 , 72 ,1);
myScreen.setXY( 26 , 73 ,1);
myScreen.setXY( 26 , 74 ,1);
myScreen.setXY( 27 , 66 ,1);
myScreen.setXY( 27 , 67 ,1);
myScreen.setXY( 27 , 68 ,1);
myScreen.setXY( 27 , 72 ,1);
myScreen.setXY( 27 , 73 ,1);
myScreen.setXY( 27 , 74 ,1);
myScreen.setXY( 28 , 65 ,1);
myScreen.setXY( 28 , 66 ,1);
myScreen.setXY( 28 , 67 ,1);
myScreen.setXY( 28 , 68 ,1);
myScreen.setXY( 28 , 72 ,1);
myScreen.setXY( 28 , 73 ,1);
myScreen.setXY( 28 , 74 ,1);
myScreen.setXY( 29 , 64 ,1);
myScreen.setXY( 29 , 65 ,1);
myScreen.setXY( 29 , 66 ,1);
myScreen.setXY( 29 , 67 ,1);
myScreen.setXY( 29 , 68 ,1);
myScreen.setXY( 29 , 72 ,1);
myScreen.setXY( 29 , 73 ,1);
myScreen.setXY( 29 , 74 ,1);
myScreen.setXY( 30 , 62 ,1);
myScreen.setXY( 30 , 63 ,1);
myScreen.setXY( 30 , 64 ,1);
myScreen.setXY( 30 , 65 ,1);
myScreen.setXY( 30 , 66 ,1);
myScreen.setXY( 30 , 67 ,1);
myScreen.setXY( 30 , 72 ,1);
myScreen.setXY( 30 , 73 ,1);
myScreen.setXY( 31 , 50 ,1);
myScreen.setXY( 31 , 51 ,1);
myScreen.setXY( 31 , 52 ,1);
myScreen.setXY( 31 , 53 ,1);
myScreen.setXY( 31 , 54 ,1);
myScreen.setXY( 31 , 55 ,1);
myScreen.setXY( 31 , 56 ,1);
myScreen.setXY( 31 , 57 ,1);
myScreen.setXY( 31 , 58 ,1);
myScreen.setXY( 31 , 59 ,1);
myScreen.setXY( 31 , 60 ,1);
myScreen.setXY( 31 , 61 ,1);
myScreen.setXY( 31 , 62 ,1);
myScreen.setXY( 31 , 63 ,1);
myScreen.setXY( 31 , 64 ,1);
myScreen.setXY( 31 , 65 ,1);
myScreen.setXY( 31 , 71 ,1);
myScreen.setXY( 31 , 72 ,1);
myScreen.setXY( 31 , 73 ,1);
myScreen.setXY( 32 , 46 ,1);
myScreen.setXY( 32 , 47 ,1);
myScreen.setXY( 32 , 48 ,1);
myScreen.setXY( 32 , 49 ,1);
myScreen.setXY( 32 , 50 ,1);
myScreen.setXY( 32 , 51 ,1);
myScreen.setXY( 32 , 52 ,1);
myScreen.setXY( 32 , 53 ,1);
myScreen.setXY( 32 , 54 ,1);
myScreen.setXY( 32 , 55 ,1);
myScreen.setXY( 32 , 56 ,1);
myScreen.setXY( 32 , 57 ,1);
myScreen.setXY( 32 , 58 ,1);
myScreen.setXY( 32 , 59 ,1);
myScreen.setXY( 32 , 60 ,1);
myScreen.setXY( 32 , 61 ,1);
myScreen.setXY( 32 , 62 ,1);
myScreen.setXY( 32 , 63 ,1);
myScreen.setXY( 32 , 71 ,1);
myScreen.setXY( 32 , 72 ,1);
myScreen.setXY( 32 , 73 ,1);
myScreen.setXY( 33 , 43 ,1);
myScreen.setXY( 33 , 44 ,1);
myScreen.setXY( 33 , 45 ,1);
myScreen.setXY( 33 , 46 ,1);
myScreen.setXY( 33 , 47 ,1);
myScreen.setXY( 33 , 48 ,1);
myScreen.setXY( 33 , 49 ,1);
myScreen.setXY( 33 , 50 ,1);
myScreen.setXY( 33 , 51 ,1);
myScreen.setXY( 33 , 52 ,1);
myScreen.setXY( 33 , 53 ,1);
myScreen.setXY( 33 , 54 ,1);
myScreen.setXY( 33 , 55 ,1);
myScreen.setXY( 33 , 56 ,1);
myScreen.setXY( 33 , 57 ,1);
myScreen.setXY( 33 , 58 ,1);
myScreen.setXY( 33 , 59 ,1);
myScreen.setXY( 33 , 60 ,1);
myScreen.setXY( 33 , 61 ,1);
myScreen.setXY( 33 , 70 ,1);
myScreen.setXY( 33 , 71 ,1);
myScreen.setXY( 33 , 72 ,1);
myScreen.setXY( 34 , 41 ,1);
myScreen.setXY( 34 , 42 ,1);
myScreen.setXY( 34 , 43 ,1);
myScreen.setXY( 34 , 44 ,1);
myScreen.setXY( 34 , 45 ,1);
myScreen.setXY( 34 , 46 ,1);
myScreen.setXY( 34 , 47 ,1);
myScreen.setXY( 34 , 48 ,1);
myScreen.setXY( 34 , 49 ,1);
myScreen.setXY( 34 , 70 ,1);
myScreen.setXY( 34 , 71 ,1);
myScreen.setXY( 34 , 72 ,1);
myScreen.setXY( 35 , 33 ,1);
myScreen.setXY( 35 , 34 ,1);
myScreen.setXY( 35 , 35 ,1);
myScreen.setXY( 35 , 36 ,1);
myScreen.setXY( 35 , 37 ,1);
myScreen.setXY( 35 , 38 ,1);
myScreen.setXY( 35 , 39 ,1);
myScreen.setXY( 35 , 40 ,1);
myScreen.setXY( 35 , 41 ,1);
myScreen.setXY( 35 , 42 ,1);
myScreen.setXY( 35 , 43 ,1);
myScreen.setXY( 35 , 44 ,1);
myScreen.setXY( 35 , 45 ,1);
myScreen.setXY( 35 , 52 ,1);
myScreen.setXY( 35 , 53 ,1);
myScreen.setXY( 35 , 54 ,1);
myScreen.setXY( 35 , 55 ,1);
myScreen.setXY( 35 , 56 ,1);
myScreen.setXY( 35 , 57 ,1);
myScreen.setXY( 35 , 58 ,1);
myScreen.setXY( 35 , 59 ,1);
myScreen.setXY( 35 , 60 ,1);
myScreen.setXY( 35 , 61 ,1);
myScreen.setXY( 35 , 62 ,1);
myScreen.setXY( 35 , 63 ,1);
myScreen.setXY( 35 , 64 ,1);
myScreen.setXY( 35 , 65 ,1);
myScreen.setXY( 35 , 66 ,1);
myScreen.setXY( 35 , 69 ,1);
myScreen.setXY( 35 , 70 ,1);
myScreen.setXY( 35 , 71 ,1);
myScreen.setXY( 36 , 33 ,1);
myScreen.setXY( 36 , 34 ,1);
myScreen.setXY( 36 , 35 ,1);
myScreen.setXY( 36 , 36 ,1);
myScreen.setXY( 36 , 37 ,1);
myScreen.setXY( 36 , 38 ,1);
myScreen.setXY( 36 , 39 ,1);
myScreen.setXY( 36 , 40 ,1);
myScreen.setXY( 36 , 41 ,1);
myScreen.setXY( 36 , 42 ,1);
myScreen.setXY( 36 , 43 ,1);
myScreen.setXY( 36 , 52 ,1);
myScreen.setXY( 36 , 53 ,1);
myScreen.setXY( 36 , 54 ,1);
myScreen.setXY( 36 , 55 ,1);
myScreen.setXY( 36 , 56 ,1);
myScreen.setXY( 36 , 57 ,1);
myScreen.setXY( 36 , 58 ,1);
myScreen.setXY( 36 , 59 ,1);
myScreen.setXY( 36 , 60 ,1);
myScreen.setXY( 36 , 61 ,1);
myScreen.setXY( 36 , 62 ,1);
myScreen.setXY( 36 , 63 ,1);
myScreen.setXY( 36 , 64 ,1);
myScreen.setXY( 36 , 65 ,1);
myScreen.setXY( 36 , 66 ,1);
myScreen.setXY( 36 , 67 ,1);
myScreen.setXY( 36 , 68 ,1);
myScreen.setXY( 36 , 69 ,1);
myScreen.setXY( 36 , 70 ,1);
myScreen.setXY( 37 , 33 ,1);
myScreen.setXY( 37 , 34 ,1);
myScreen.setXY( 37 , 35 ,1);
myScreen.setXY( 37 , 36 ,1);
myScreen.setXY( 37 , 37 ,1);
myScreen.setXY( 37 , 38 ,1);
myScreen.setXY( 37 , 39 ,1);
myScreen.setXY( 37 , 40 ,1);
myScreen.setXY( 37 , 63 ,1);
myScreen.setXY( 37 , 64 ,1);
myScreen.setXY( 37 , 65 ,1);
myScreen.setXY( 37 , 66 ,1);
myScreen.setXY( 37 , 67 ,1);
myScreen.setXY( 37 , 68 ,1);
myScreen.setXY( 37 , 69 ,1);
myScreen.setXY( 37 , 70 ,1);
myScreen.setXY( 37 , 71 ,1);
myScreen.setXY( 37 , 72 ,1);
myScreen.setXY( 38 , 33 ,1);
myScreen.setXY( 38 , 34 ,1);
myScreen.setXY( 38 , 35 ,1);
myScreen.setXY( 38 , 36 ,1);
myScreen.setXY( 38 , 37 ,1);
myScreen.setXY( 38 , 38 ,1);
myScreen.setXY( 38 , 39 ,1);
myScreen.setXY( 38 , 40 ,1);
myScreen.setXY( 38 , 68 ,1);
myScreen.setXY( 38 , 69 ,1);
myScreen.setXY( 38 , 70 ,1);
myScreen.setXY( 38 , 71 ,1);
myScreen.setXY( 38 , 72 ,1);
myScreen.setXY( 38 , 73 ,1);
myScreen.setXY( 39 , 33 ,1);
myScreen.setXY( 39 , 34 ,1);
myScreen.setXY( 39 , 35 ,1);
myScreen.setXY( 39 , 36 ,1);
myScreen.setXY( 39 , 37 ,1);
myScreen.setXY( 39 , 38 ,1);
myScreen.setXY( 39 , 39 ,1);
myScreen.setXY( 39 , 40 ,1);
myScreen.setXY( 39 , 41 ,1);
myScreen.setXY( 39 , 42 ,1);
myScreen.setXY( 39 , 71 ,1);
myScreen.setXY( 39 , 72 ,1);
myScreen.setXY( 39 , 73 ,1);
myScreen.setXY( 39 , 74 ,1);
myScreen.setXY( 40 , 36 ,1);
myScreen.setXY( 40 , 37 ,1);
myScreen.setXY( 40 , 38 ,1);
myScreen.setXY( 40 , 39 ,1);
myScreen.setXY( 40 , 40 ,1);
myScreen.setXY( 40 , 41 ,1);
myScreen.setXY( 40 , 42 ,1);
myScreen.setXY( 40 , 43 ,1);
myScreen.setXY( 40 , 44 ,1);
myScreen.setXY( 40 , 72 ,1);
myScreen.setXY( 40 , 73 ,1);
myScreen.setXY( 40 , 74 ,1);
myScreen.setXY( 40 , 75 ,1);
myScreen.setXY( 41 , 41 ,1);
myScreen.setXY( 41 , 42 ,1);
myScreen.setXY( 41 , 43 ,1);
myScreen.setXY( 41 , 44 ,1);
myScreen.setXY( 41 , 45 ,1);
myScreen.setXY( 41 , 46 ,1);
myScreen.setXY( 41 , 47 ,1);
myScreen.setXY( 41 , 48 ,1);
myScreen.setXY( 41 , 73 ,1);
myScreen.setXY( 41 , 74 ,1);
myScreen.setXY( 41 , 75 ,1);
myScreen.setXY( 41 , 76 ,1);
myScreen.setXY( 42 , 42 ,1);
myScreen.setXY( 42 , 43 ,1);
myScreen.setXY( 42 , 44 ,1);
myScreen.setXY( 42 , 45 ,1);
myScreen.setXY( 42 , 46 ,1);
myScreen.setXY( 42 , 47 ,1);
myScreen.setXY( 42 , 48 ,1);
myScreen.setXY( 42 , 49 ,1);
myScreen.setXY( 42 , 50 ,1);
myScreen.setXY( 42 , 51 ,1);
myScreen.setXY( 42 , 52 ,1);
myScreen.setXY( 42 , 53 ,1);
myScreen.setXY( 42 , 54 ,1);
myScreen.setXY( 42 , 55 ,1);
myScreen.setXY( 42 , 56 ,1);
myScreen.setXY( 42 , 57 ,1);
myScreen.setXY( 42 , 58 ,1);
myScreen.setXY( 42 , 59 ,1);
myScreen.setXY( 42 , 60 ,1);
myScreen.setXY( 42 , 61 ,1);
myScreen.setXY( 42 , 74 ,1);
myScreen.setXY( 42 , 75 ,1);
myScreen.setXY( 42 , 76 ,1);
myScreen.setXY( 43 , 44 ,1);
myScreen.setXY( 43 , 45 ,1);
myScreen.setXY( 43 , 46 ,1);
myScreen.setXY( 43 , 47 ,1);
myScreen.setXY( 43 , 48 ,1);
myScreen.setXY( 43 , 49 ,1);
myScreen.setXY( 43 , 50 ,1);
myScreen.setXY( 43 , 51 ,1);
myScreen.setXY( 43 , 52 ,1);
myScreen.setXY( 43 , 53 ,1);
myScreen.setXY( 43 , 54 ,1);
myScreen.setXY( 43 , 55 ,1);
myScreen.setXY( 43 , 56 ,1);
myScreen.setXY( 43 , 57 ,1);
myScreen.setXY( 43 , 58 ,1);
myScreen.setXY( 43 , 59 ,1);
myScreen.setXY( 43 , 60 ,1);
myScreen.setXY( 43 , 61 ,1);
myScreen.setXY( 43 , 62 ,1);
myScreen.setXY( 43 , 63 ,1);
myScreen.setXY( 43 , 64 ,1);
myScreen.setXY( 43 , 65 ,1);
myScreen.setXY( 43 , 66 ,1);
myScreen.setXY( 43 , 67 ,1);
myScreen.setXY( 43 , 75 ,1);
myScreen.setXY( 43 , 76 ,1);
myScreen.setXY( 43 , 77 ,1);
myScreen.setXY( 44 , 49 ,1);
myScreen.setXY( 44 , 50 ,1);
myScreen.setXY( 44 , 51 ,1);
myScreen.setXY( 44 , 52 ,1);
myScreen.setXY( 44 , 53 ,1);
myScreen.setXY( 44 , 54 ,1);
myScreen.setXY( 44 , 55 ,1);
myScreen.setXY( 44 , 56 ,1);
myScreen.setXY( 44 , 57 ,1);
myScreen.setXY( 44 , 58 ,1);
myScreen.setXY( 44 , 59 ,1);
myScreen.setXY( 44 , 60 ,1);
myScreen.setXY( 44 , 61 ,1);
myScreen.setXY( 44 , 62 ,1);
myScreen.setXY( 44 , 63 ,1);
myScreen.setXY( 44 , 64 ,1);
myScreen.setXY( 44 , 65 ,1);
myScreen.setXY( 44 , 66 ,1);
myScreen.setXY( 44 , 67 ,1);
myScreen.setXY( 44 , 68 ,1);
myScreen.setXY( 44 , 69 ,1);
myScreen.setXY( 44 , 70 ,1);
myScreen.setXY( 44 , 75 ,1);
myScreen.setXY( 44 , 76 ,1);
myScreen.setXY( 44 , 77 ,1);
myScreen.setXY( 45 , 59 ,1);
myScreen.setXY( 45 , 60 ,1);
myScreen.setXY( 45 , 63 ,1);
myScreen.setXY( 45 , 64 ,1);
myScreen.setXY( 45 , 65 ,1);
myScreen.setXY( 45 , 66 ,1);
myScreen.setXY( 45 , 67 ,1);
myScreen.setXY( 45 , 68 ,1);
myScreen.setXY( 45 , 69 ,1);
myScreen.setXY( 45 , 70 ,1);
myScreen.setXY( 45 , 71 ,1);
myScreen.setXY( 45 , 76 ,1);
myScreen.setXY( 45 , 77 ,1);
myScreen.setXY( 45 , 78 ,1);
myScreen.setXY( 46 , 59 ,1);
myScreen.setXY( 46 , 60 ,1);
myScreen.setXY( 46 , 64 ,1);
myScreen.setXY( 46 , 65 ,1);
myScreen.setXY( 46 , 66 ,1);
myScreen.setXY( 46 , 68 ,1);
myScreen.setXY( 46 , 69 ,1);
myScreen.setXY( 46 , 70 ,1);
myScreen.setXY( 46 , 71 ,1);
myScreen.setXY( 46 , 72 ,1);
myScreen.setXY( 46 , 73 ,1);
myScreen.setXY( 46 , 76 ,1);
myScreen.setXY( 46 , 77 ,1);
myScreen.setXY( 46 , 78 ,1);
myScreen.setXY( 47 , 58 ,1);
myScreen.setXY( 47 , 59 ,1);
myScreen.setXY( 47 , 60 ,1);
myScreen.setXY( 47 , 64 ,1);
myScreen.setXY( 47 , 65 ,1);
myScreen.setXY( 47 , 66 ,1);
myScreen.setXY( 47 , 70 ,1);
myScreen.setXY( 47 , 71 ,1);
myScreen.setXY( 47 , 72 ,1);
myScreen.setXY( 47 , 73 ,1);
myScreen.setXY( 47 , 76 ,1);
myScreen.setXY( 47 , 77 ,1);
myScreen.setXY( 47 , 78 ,1);
myScreen.setXY( 48 , 58 ,1);
myScreen.setXY( 48 , 59 ,1);
myScreen.setXY( 48 , 60 ,1);
myScreen.setXY( 48 , 64 ,1);
myScreen.setXY( 48 , 65 ,1);
myScreen.setXY( 48 , 71 ,1);
myScreen.setXY( 48 , 72 ,1);
myScreen.setXY( 48 , 73 ,1);
myScreen.setXY( 48 , 74 ,1);
myScreen.setXY( 48 , 76 ,1);
myScreen.setXY( 48 , 77 ,1);
myScreen.setXY( 48 , 78 ,1);
myScreen.setXY( 49 , 57 ,1);
myScreen.setXY( 49 , 58 ,1);
myScreen.setXY( 49 , 59 ,1);
myScreen.setXY( 49 , 63 ,1);
myScreen.setXY( 49 , 64 ,1);
myScreen.setXY( 49 , 65 ,1);
myScreen.setXY( 49 , 72 ,1);
myScreen.setXY( 49 , 73 ,1);
myScreen.setXY( 49 , 74 ,1);
myScreen.setXY( 49 , 75 ,1);
myScreen.setXY( 49 , 76 ,1);
myScreen.setXY( 49 , 77 ,1);
myScreen.setXY( 49 , 78 ,1);
myScreen.setXY( 50 , 55 ,1);
myScreen.setXY( 50 , 56 ,1);
myScreen.setXY( 50 , 57 ,1);
myScreen.setXY( 50 , 58 ,1);
myScreen.setXY( 50 , 59 ,1);
myScreen.setXY( 50 , 63 ,1);
myScreen.setXY( 50 , 64 ,1);
myScreen.setXY( 50 , 65 ,1);
myScreen.setXY( 50 , 73 ,1);
myScreen.setXY( 50 , 74 ,1);
myScreen.setXY( 50 , 75 ,1);
myScreen.setXY( 50 , 76 ,1);
myScreen.setXY( 50 , 77 ,1);
myScreen.setXY( 50 , 78 ,1);
myScreen.setXY( 51 , 53 ,1);
myScreen.setXY( 51 , 54 ,1);
myScreen.setXY( 51 , 55 ,1);
myScreen.setXY( 51 , 56 ,1);
myScreen.setXY( 51 , 57 ,1);
myScreen.setXY( 51 , 58 ,1);
myScreen.setXY( 51 , 62 ,1);
myScreen.setXY( 51 , 63 ,1);
myScreen.setXY( 51 , 64 ,1);
myScreen.setXY( 51 , 73 ,1);
myScreen.setXY( 51 , 74 ,1);
myScreen.setXY( 51 , 75 ,1);
myScreen.setXY( 51 , 76 ,1);
myScreen.setXY( 51 , 77 ,1);
myScreen.setXY( 51 , 78 ,1);
myScreen.setXY( 52 , 53 ,1);
myScreen.setXY( 52 , 54 ,1);
myScreen.setXY( 52 , 55 ,1);
myScreen.setXY( 52 , 56 ,1);
myScreen.setXY( 52 , 57 ,1);
myScreen.setXY( 52 , 61 ,1);
myScreen.setXY( 52 , 62 ,1);
myScreen.setXY( 52 , 63 ,1);
myScreen.setXY( 52 , 64 ,1);
myScreen.setXY( 52 , 73 ,1);
myScreen.setXY( 52 , 74 ,1);
myScreen.setXY( 52 , 75 ,1);
myScreen.setXY( 52 , 76 ,1);
myScreen.setXY( 52 , 77 ,1);
myScreen.setXY( 52 , 78 ,1);
myScreen.setXY( 53 , 53 ,1);
myScreen.setXY( 53 , 54 ,1);
myScreen.setXY( 53 , 55 ,1);
myScreen.setXY( 53 , 56 ,1);
myScreen.setXY( 53 , 57 ,1);
myScreen.setXY( 53 , 58 ,1);
myScreen.setXY( 53 , 59 ,1);
myScreen.setXY( 53 , 60 ,1);
myScreen.setXY( 53 , 61 ,1);
myScreen.setXY( 53 , 62 ,1);
myScreen.setXY( 53 , 63 ,1);
myScreen.setXY( 53 , 73 ,1);
myScreen.setXY( 53 , 74 ,1);
myScreen.setXY( 53 , 75 ,1);
myScreen.setXY( 53 , 76 ,1);
myScreen.setXY( 53 , 77 ,1);
myScreen.setXY( 53 , 78 ,1);
myScreen.setXY( 54 , 53 ,1);
myScreen.setXY( 54 , 54 ,1);
myScreen.setXY( 54 , 55 ,1);
myScreen.setXY( 54 , 56 ,1);
myScreen.setXY( 54 , 57 ,1);
myScreen.setXY( 54 , 58 ,1);
myScreen.setXY( 54 , 59 ,1);
myScreen.setXY( 54 , 60 ,1);
myScreen.setXY( 54 , 61 ,1);
myScreen.setXY( 54 , 62 ,1);
myScreen.setXY( 54 , 73 ,1);
myScreen.setXY( 54 , 74 ,1);
myScreen.setXY( 54 , 75 ,1);
myScreen.setXY( 54 , 76 ,1);
myScreen.setXY( 54 , 77 ,1);
myScreen.setXY( 55 , 54 ,1);
myScreen.setXY( 55 , 55 ,1);
myScreen.setXY( 55 , 56 ,1);
myScreen.setXY( 55 , 57 ,1);
myScreen.setXY( 55 , 58 ,1);
myScreen.setXY( 55 , 59 ,1);
myScreen.setXY( 55 , 60 ,1);
myScreen.setXY( 55 , 72 ,1);
myScreen.setXY( 55 , 73 ,1);
myScreen.setXY( 55 , 74 ,1);
myScreen.setXY( 55 , 75 ,1);
myScreen.setXY( 55 , 76 ,1);
myScreen.setXY( 55 , 77 ,1);
myScreen.setXY( 56 , 72 ,1);
myScreen.setXY( 56 , 73 ,1);
myScreen.setXY( 56 , 74 ,1);
myScreen.setXY( 56 , 75 ,1);
myScreen.setXY( 56 , 76 ,1);
myScreen.setXY( 56 , 77 ,1);
myScreen.setXY( 57 , 72 ,1);
myScreen.setXY( 57 , 73 ,1);
myScreen.setXY( 57 , 74 ,1);
myScreen.setXY( 57 , 75 ,1);
myScreen.setXY( 57 , 76 ,1);
myScreen.setXY( 58 , 72 ,1);
myScreen.setXY( 58 , 73 ,1);
myScreen.setXY( 58 , 74 ,1);
myScreen.setXY( 58 , 75 ,1);

    myScreen.setFont(0);
    myScreen.setCharXY(65, 34);
    myScreen.print("You did");
    myScreen.setCharXY(65, 46);
    myScreen.print("something");
    myScreen.setCharXY(65, 58);
    myScreen.print("good today");
    myScreen.setCharXY(68, 72);
    myScreen.print("CONGRATS!");

    


    myScreen.setFont(1);
    myScreen.setCharXY(47, 89);
    myScreen.print("NON");
    myScreen.setCharXY(6, 109);
    myScreen.print("RECYCLABLE");
    myScreen.setCharXY(10, 60);

    myScreen.flush();

    for (uint8_t i = 0; i < 2; i++)
    {
        delay(100);
    }
}
