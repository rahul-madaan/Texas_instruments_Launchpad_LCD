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

    myScreen.setCharXY(8, 3);
    myScreen.print(" TIN CAN");
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

myScreen.setXY( 22 , 39 ,1);
myScreen.setXY( 22 , 40 ,1);
myScreen.setXY( 22 , 41 ,1);
myScreen.setXY( 22 , 42 ,1);
myScreen.setXY( 22 , 43 ,1);
myScreen.setXY( 22 , 44 ,1);
myScreen.setXY( 22 , 45 ,1);
myScreen.setXY( 22 , 46 ,1);
myScreen.setXY( 22 , 47 ,1);
myScreen.setXY( 22 , 48 ,1);
myScreen.setXY( 22 , 49 ,1);
myScreen.setXY( 22 , 50 ,1);
myScreen.setXY( 22 , 51 ,1);
myScreen.setXY( 22 , 52 ,1);
myScreen.setXY( 22 , 53 ,1);
myScreen.setXY( 22 , 54 ,1);
myScreen.setXY( 22 , 55 ,1);
myScreen.setXY( 22 , 56 ,1);
myScreen.setXY( 22 , 57 ,1);
myScreen.setXY( 22 , 58 ,1);
myScreen.setXY( 22 , 59 ,1);
myScreen.setXY( 22 , 60 ,1);
myScreen.setXY( 22 , 61 ,1);
myScreen.setXY( 22 , 62 ,1);
myScreen.setXY( 22 , 63 ,1);
myScreen.setXY( 22 , 64 ,1);
myScreen.setXY( 22 , 65 ,1);
myScreen.setXY( 22 , 66 ,1);
myScreen.setXY( 22 , 67 ,1);
myScreen.setXY( 22 , 68 ,1);
myScreen.setXY( 22 , 69 ,1);
myScreen.setXY( 22 , 70 ,1);
myScreen.setXY( 22 , 71 ,1);
myScreen.setXY( 23 , 37 ,1);
myScreen.setXY( 23 , 38 ,1);
myScreen.setXY( 23 , 39 ,1);
myScreen.setXY( 23 , 40 ,1);
myScreen.setXY( 23 , 41 ,1);
myScreen.setXY( 23 , 42 ,1);
myScreen.setXY( 23 , 43 ,1);
myScreen.setXY( 23 , 44 ,1);
myScreen.setXY( 23 , 45 ,1);
myScreen.setXY( 23 , 46 ,1);
myScreen.setXY( 23 , 47 ,1);
myScreen.setXY( 23 , 48 ,1);
myScreen.setXY( 23 , 49 ,1);
myScreen.setXY( 23 , 50 ,1);
myScreen.setXY( 23 , 51 ,1);
myScreen.setXY( 23 , 52 ,1);
myScreen.setXY( 23 , 53 ,1);
myScreen.setXY( 23 , 54 ,1);
myScreen.setXY( 23 , 55 ,1);
myScreen.setXY( 23 , 56 ,1);
myScreen.setXY( 23 , 57 ,1);
myScreen.setXY( 23 , 58 ,1);
myScreen.setXY( 23 , 59 ,1);
myScreen.setXY( 23 , 60 ,1);
myScreen.setXY( 23 , 61 ,1);
myScreen.setXY( 23 , 62 ,1);
myScreen.setXY( 23 , 63 ,1);
myScreen.setXY( 23 , 64 ,1);
myScreen.setXY( 23 , 65 ,1);
myScreen.setXY( 23 , 66 ,1);
myScreen.setXY( 23 , 67 ,1);
myScreen.setXY( 23 , 68 ,1);
myScreen.setXY( 23 , 69 ,1);
myScreen.setXY( 23 , 70 ,1);
myScreen.setXY( 23 , 71 ,1);
myScreen.setXY( 23 , 72 ,1);
myScreen.setXY( 24 , 36 ,1);
myScreen.setXY( 24 , 37 ,1);
myScreen.setXY( 24 , 38 ,1);
myScreen.setXY( 24 , 39 ,1);
myScreen.setXY( 24 , 40 ,1);
myScreen.setXY( 24 , 72 ,1);
myScreen.setXY( 24 , 73 ,1);
myScreen.setXY( 24 , 74 ,1);
myScreen.setXY( 24 , 75 ,1);
myScreen.setXY( 25 , 35 ,1);
myScreen.setXY( 25 , 36 ,1);
myScreen.setXY( 25 , 37 ,1);
myScreen.setXY( 25 , 40 ,1);
myScreen.setXY( 25 , 41 ,1);
myScreen.setXY( 25 , 72 ,1);
myScreen.setXY( 25 , 73 ,1);
myScreen.setXY( 25 , 74 ,1);
myScreen.setXY( 25 , 75 ,1);
myScreen.setXY( 25 , 76 ,1);
myScreen.setXY( 26 , 34 ,1);
myScreen.setXY( 26 , 35 ,1);
myScreen.setXY( 26 , 36 ,1);
myScreen.setXY( 26 , 37 ,1);
myScreen.setXY( 26 , 40 ,1);
myScreen.setXY( 26 , 41 ,1);
myScreen.setXY( 26 , 72 ,1);
myScreen.setXY( 26 , 73 ,1);
myScreen.setXY( 26 , 75 ,1);
myScreen.setXY( 26 , 76 ,1);
myScreen.setXY( 27 , 34 ,1);
myScreen.setXY( 27 , 35 ,1);
myScreen.setXY( 27 , 37 ,1);
myScreen.setXY( 27 , 38 ,1);
myScreen.setXY( 27 , 40 ,1);
myScreen.setXY( 27 , 41 ,1);
myScreen.setXY( 27 , 73 ,1);
myScreen.setXY( 27 , 76 ,1);
myScreen.setXY( 27 , 77 ,1);
myScreen.setXY( 28 , 34 ,1);
myScreen.setXY( 28 , 37 ,1);
myScreen.setXY( 28 , 38 ,1);
myScreen.setXY( 28 , 41 ,1);
myScreen.setXY( 28 , 73 ,1);
myScreen.setXY( 28 , 74 ,1);
myScreen.setXY( 28 , 76 ,1);
myScreen.setXY( 28 , 77 ,1);
myScreen.setXY( 29 , 34 ,1);
myScreen.setXY( 29 , 37 ,1);
myScreen.setXY( 29 , 38 ,1);
myScreen.setXY( 29 , 41 ,1);
myScreen.setXY( 29 , 42 ,1);
myScreen.setXY( 29 , 73 ,1);
myScreen.setXY( 29 , 74 ,1);
myScreen.setXY( 29 , 76 ,1);
myScreen.setXY( 29 , 77 ,1);
myScreen.setXY( 30 , 33 ,1);
myScreen.setXY( 30 , 34 ,1);
myScreen.setXY( 30 , 37 ,1);
myScreen.setXY( 30 , 38 ,1);
myScreen.setXY( 30 , 41 ,1);
myScreen.setXY( 30 , 42 ,1);
myScreen.setXY( 30 , 73 ,1);
myScreen.setXY( 30 , 74 ,1);
myScreen.setXY( 30 , 77 ,1);
myScreen.setXY( 31 , 33 ,1);
myScreen.setXY( 31 , 34 ,1);
myScreen.setXY( 31 , 36 ,1);
myScreen.setXY( 31 , 37 ,1);
myScreen.setXY( 31 , 38 ,1);
myScreen.setXY( 31 , 41 ,1);
myScreen.setXY( 31 , 42 ,1);
myScreen.setXY( 31 , 73 ,1);
myScreen.setXY( 31 , 74 ,1);
myScreen.setXY( 31 , 77 ,1);
myScreen.setXY( 32 , 33 ,1);
myScreen.setXY( 32 , 34 ,1);
myScreen.setXY( 32 , 36 ,1);
myScreen.setXY( 32 , 37 ,1);
myScreen.setXY( 32 , 38 ,1);
myScreen.setXY( 32 , 41 ,1);
myScreen.setXY( 32 , 42 ,1);
myScreen.setXY( 32 , 73 ,1);
myScreen.setXY( 32 , 74 ,1);
myScreen.setXY( 32 , 77 ,1);
myScreen.setXY( 32 , 78 ,1);
myScreen.setXY( 33 , 33 ,1);
myScreen.setXY( 33 , 34 ,1);
myScreen.setXY( 33 , 37 ,1);
myScreen.setXY( 33 , 38 ,1);
myScreen.setXY( 33 , 39 ,1);
myScreen.setXY( 33 , 41 ,1);
myScreen.setXY( 33 , 42 ,1);
myScreen.setXY( 33 , 73 ,1);
myScreen.setXY( 33 , 74 ,1);
myScreen.setXY( 33 , 77 ,1);
myScreen.setXY( 33 , 78 ,1);
myScreen.setXY( 34 , 33 ,1);
myScreen.setXY( 34 , 34 ,1);
myScreen.setXY( 34 , 38 ,1);
myScreen.setXY( 34 , 39 ,1);
myScreen.setXY( 34 , 41 ,1);
myScreen.setXY( 34 , 42 ,1);
myScreen.setXY( 34 , 73 ,1);
myScreen.setXY( 34 , 74 ,1);
myScreen.setXY( 34 , 77 ,1);
myScreen.setXY( 34 , 78 ,1);
myScreen.setXY( 35 , 33 ,1);
myScreen.setXY( 35 , 34 ,1);
myScreen.setXY( 35 , 38 ,1);
myScreen.setXY( 35 , 39 ,1);
myScreen.setXY( 35 , 41 ,1);
myScreen.setXY( 35 , 42 ,1);
myScreen.setXY( 35 , 43 ,1);
myScreen.setXY( 35 , 44 ,1);
myScreen.setXY( 35 , 45 ,1);
myScreen.setXY( 35 , 46 ,1);
myScreen.setXY( 35 , 47 ,1);
myScreen.setXY( 35 , 72 ,1);
myScreen.setXY( 35 , 73 ,1);
myScreen.setXY( 35 , 74 ,1);
myScreen.setXY( 35 , 77 ,1);
myScreen.setXY( 35 , 78 ,1);
myScreen.setXY( 36 , 33 ,1);
myScreen.setXY( 36 , 34 ,1);
myScreen.setXY( 36 , 38 ,1);
myScreen.setXY( 36 , 39 ,1);
myScreen.setXY( 36 , 41 ,1);
myScreen.setXY( 36 , 42 ,1);
myScreen.setXY( 36 , 43 ,1);
myScreen.setXY( 36 , 44 ,1);
myScreen.setXY( 36 , 45 ,1);
myScreen.setXY( 36 , 46 ,1);
myScreen.setXY( 36 , 47 ,1);
myScreen.setXY( 36 , 48 ,1);
myScreen.setXY( 36 , 49 ,1);
myScreen.setXY( 36 , 50 ,1);
myScreen.setXY( 36 , 51 ,1);
myScreen.setXY( 36 , 52 ,1);
myScreen.setXY( 36 , 70 ,1);
myScreen.setXY( 36 , 71 ,1);
myScreen.setXY( 36 , 72 ,1);
myScreen.setXY( 36 , 73 ,1);
myScreen.setXY( 36 , 74 ,1);
myScreen.setXY( 36 , 77 ,1);
myScreen.setXY( 36 , 78 ,1);
myScreen.setXY( 37 , 33 ,1);
myScreen.setXY( 37 , 34 ,1);
myScreen.setXY( 37 , 38 ,1);
myScreen.setXY( 37 , 39 ,1);
myScreen.setXY( 37 , 41 ,1);
myScreen.setXY( 37 , 42 ,1);
myScreen.setXY( 37 , 49 ,1);
myScreen.setXY( 37 , 50 ,1);
myScreen.setXY( 37 , 51 ,1);
myScreen.setXY( 37 , 52 ,1);
myScreen.setXY( 37 , 53 ,1);
myScreen.setXY( 37 , 54 ,1);
myScreen.setXY( 37 , 68 ,1);
myScreen.setXY( 37 , 69 ,1);
myScreen.setXY( 37 , 70 ,1);
myScreen.setXY( 37 , 71 ,1);
myScreen.setXY( 37 , 73 ,1);
myScreen.setXY( 37 , 74 ,1);
myScreen.setXY( 37 , 77 ,1);
myScreen.setXY( 37 , 78 ,1);
myScreen.setXY( 38 , 33 ,1);
myScreen.setXY( 38 , 34 ,1);
myScreen.setXY( 38 , 38 ,1);
myScreen.setXY( 38 , 41 ,1);
myScreen.setXY( 38 , 42 ,1);
myScreen.setXY( 38 , 53 ,1);
myScreen.setXY( 38 , 54 ,1);
myScreen.setXY( 38 , 55 ,1);
myScreen.setXY( 38 , 56 ,1);
myScreen.setXY( 38 , 57 ,1);
myScreen.setXY( 38 , 66 ,1);
myScreen.setXY( 38 , 67 ,1);
myScreen.setXY( 38 , 68 ,1);
myScreen.setXY( 38 , 69 ,1);
myScreen.setXY( 38 , 73 ,1);
myScreen.setXY( 38 , 74 ,1);
myScreen.setXY( 38 , 77 ,1);
myScreen.setXY( 38 , 78 ,1);
myScreen.setXY( 39 , 33 ,1);
myScreen.setXY( 39 , 34 ,1);
myScreen.setXY( 39 , 38 ,1);
myScreen.setXY( 39 , 41 ,1);
myScreen.setXY( 39 , 42 ,1);
myScreen.setXY( 39 , 56 ,1);
myScreen.setXY( 39 , 57 ,1);
myScreen.setXY( 39 , 58 ,1);
myScreen.setXY( 39 , 59 ,1);
myScreen.setXY( 39 , 60 ,1);
myScreen.setXY( 39 , 61 ,1);
myScreen.setXY( 39 , 62 ,1);
myScreen.setXY( 39 , 63 ,1);
myScreen.setXY( 39 , 64 ,1);
myScreen.setXY( 39 , 65 ,1);
myScreen.setXY( 39 , 66 ,1);
myScreen.setXY( 39 , 67 ,1);
myScreen.setXY( 39 , 73 ,1);
myScreen.setXY( 39 , 74 ,1);
myScreen.setXY( 39 , 77 ,1);
myScreen.setXY( 40 , 33 ,1);
myScreen.setXY( 40 , 34 ,1);
myScreen.setXY( 40 , 37 ,1);
myScreen.setXY( 40 , 38 ,1);
myScreen.setXY( 40 , 41 ,1);
myScreen.setXY( 40 , 42 ,1);
myScreen.setXY( 40 , 43 ,1);
myScreen.setXY( 40 , 44 ,1);
myScreen.setXY( 40 , 45 ,1);
myScreen.setXY( 40 , 46 ,1);
myScreen.setXY( 40 , 47 ,1);
myScreen.setXY( 40 , 48 ,1);
myScreen.setXY( 40 , 49 ,1);
myScreen.setXY( 40 , 50 ,1);
myScreen.setXY( 40 , 51 ,1);
myScreen.setXY( 40 , 52 ,1);
myScreen.setXY( 40 , 59 ,1);
myScreen.setXY( 40 , 60 ,1);
myScreen.setXY( 40 , 61 ,1);
myScreen.setXY( 40 , 62 ,1);
myScreen.setXY( 40 , 63 ,1);
myScreen.setXY( 40 , 64 ,1);
myScreen.setXY( 40 , 73 ,1);
myScreen.setXY( 40 , 74 ,1);
myScreen.setXY( 40 , 76 ,1);
myScreen.setXY( 40 , 77 ,1);
myScreen.setXY( 41 , 34 ,1);
myScreen.setXY( 41 , 37 ,1);
myScreen.setXY( 41 , 38 ,1);
myScreen.setXY( 41 , 41 ,1);
myScreen.setXY( 41 , 42 ,1);
myScreen.setXY( 41 , 43 ,1);
myScreen.setXY( 41 , 44 ,1);
myScreen.setXY( 41 , 45 ,1);
myScreen.setXY( 41 , 46 ,1);
myScreen.setXY( 41 , 47 ,1);
myScreen.setXY( 41 , 48 ,1);
myScreen.setXY( 41 , 49 ,1);
myScreen.setXY( 41 , 50 ,1);
myScreen.setXY( 41 , 51 ,1);
myScreen.setXY( 41 , 52 ,1);
myScreen.setXY( 41 , 53 ,1);
myScreen.setXY( 41 , 54 ,1);
myScreen.setXY( 41 , 55 ,1);
myScreen.setXY( 41 , 73 ,1);
myScreen.setXY( 41 , 74 ,1);
myScreen.setXY( 41 , 76 ,1);
myScreen.setXY( 41 , 77 ,1);
myScreen.setXY( 42 , 34 ,1);
myScreen.setXY( 42 , 35 ,1);
myScreen.setXY( 42 , 37 ,1);
myScreen.setXY( 42 , 38 ,1);
myScreen.setXY( 42 , 41 ,1);
myScreen.setXY( 42 , 42 ,1);
myScreen.setXY( 42 , 54 ,1);
myScreen.setXY( 42 , 55 ,1);
myScreen.setXY( 42 , 56 ,1);
myScreen.setXY( 42 , 57 ,1);
myScreen.setXY( 42 , 58 ,1);
myScreen.setXY( 42 , 69 ,1);
myScreen.setXY( 42 , 70 ,1);
myScreen.setXY( 42 , 71 ,1);
myScreen.setXY( 42 , 72 ,1);
myScreen.setXY( 42 , 73 ,1);
myScreen.setXY( 42 , 76 ,1);
myScreen.setXY( 42 , 77 ,1);
myScreen.setXY( 43 , 34 ,1);
myScreen.setXY( 43 , 35 ,1);
myScreen.setXY( 43 , 37 ,1);
myScreen.setXY( 43 , 38 ,1);
myScreen.setXY( 43 , 40 ,1);
myScreen.setXY( 43 , 41 ,1);
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
myScreen.setXY( 43 , 68 ,1);
myScreen.setXY( 43 , 69 ,1);
myScreen.setXY( 43 , 70 ,1);
myScreen.setXY( 43 , 71 ,1);
myScreen.setXY( 43 , 72 ,1);
myScreen.setXY( 43 , 73 ,1);
myScreen.setXY( 43 , 76 ,1);
myScreen.setXY( 44 , 34 ,1);
myScreen.setXY( 44 , 35 ,1);
myScreen.setXY( 44 , 36 ,1);
myScreen.setXY( 44 , 37 ,1);
myScreen.setXY( 44 , 40 ,1);
myScreen.setXY( 44 , 41 ,1);
myScreen.setXY( 44 , 61 ,1);
myScreen.setXY( 44 , 62 ,1);
myScreen.setXY( 44 , 63 ,1);
myScreen.setXY( 44 , 64 ,1);
myScreen.setXY( 44 , 65 ,1);
myScreen.setXY( 44 , 66 ,1);
myScreen.setXY( 44 , 72 ,1);
myScreen.setXY( 44 , 73 ,1);
myScreen.setXY( 44 , 74 ,1);
myScreen.setXY( 44 , 75 ,1);
myScreen.setXY( 44 , 76 ,1);
myScreen.setXY( 45 , 35 ,1);
myScreen.setXY( 45 , 36 ,1);
myScreen.setXY( 45 , 37 ,1);
myScreen.setXY( 45 , 38 ,1);
myScreen.setXY( 45 , 39 ,1);
myScreen.setXY( 45 , 40 ,1);
myScreen.setXY( 45 , 72 ,1);
myScreen.setXY( 45 , 73 ,1);
myScreen.setXY( 45 , 74 ,1);
myScreen.setXY( 45 , 75 ,1);
myScreen.setXY( 46 , 37 ,1);
myScreen.setXY( 46 , 38 ,1);
myScreen.setXY( 46 , 39 ,1);
myScreen.setXY( 46 , 40 ,1);
myScreen.setXY( 46 , 41 ,1);
myScreen.setXY( 46 , 71 ,1);
myScreen.setXY( 46 , 72 ,1);
myScreen.setXY( 46 , 73 ,1);
myScreen.setXY( 47 , 38 ,1);
myScreen.setXY( 47 , 39 ,1);
myScreen.setXY( 47 , 40 ,1);
myScreen.setXY( 47 , 41 ,1);
myScreen.setXY( 47 , 42 ,1);
myScreen.setXY( 47 , 43 ,1);
myScreen.setXY( 47 , 44 ,1);
myScreen.setXY( 47 , 45 ,1);
myScreen.setXY( 47 , 46 ,1);
myScreen.setXY( 47 , 47 ,1);
myScreen.setXY( 47 , 48 ,1);
myScreen.setXY( 47 , 49 ,1);
myScreen.setXY( 47 , 50 ,1);
myScreen.setXY( 47 , 51 ,1);
myScreen.setXY( 47 , 52 ,1);
myScreen.setXY( 47 , 53 ,1);
myScreen.setXY( 47 , 54 ,1);
myScreen.setXY( 47 , 55 ,1);
myScreen.setXY( 47 , 56 ,1);
myScreen.setXY( 47 , 57 ,1);
myScreen.setXY( 47 , 58 ,1);
myScreen.setXY( 47 , 59 ,1);
myScreen.setXY( 47 , 60 ,1);
myScreen.setXY( 47 , 61 ,1);
myScreen.setXY( 47 , 62 ,1);
myScreen.setXY( 47 , 63 ,1);
myScreen.setXY( 47 , 64 ,1);
myScreen.setXY( 47 , 65 ,1);
myScreen.setXY( 47 , 66 ,1);
myScreen.setXY( 47 , 67 ,1);
myScreen.setXY( 47 , 68 ,1);
myScreen.setXY( 47 , 69 ,1);
myScreen.setXY( 47 , 70 ,1);
myScreen.setXY( 47 , 71 ,1);
myScreen.setXY( 47 , 72 ,1);

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
    
    myScreen.setCharXY(6, 98);
    myScreen.print("RECYCLABLE");
    myScreen.setCharXY(10, 60);

    myScreen.flush();

    for (uint8_t i = 0; i < 2; i++)
    {
        delay(100);
    }
}
