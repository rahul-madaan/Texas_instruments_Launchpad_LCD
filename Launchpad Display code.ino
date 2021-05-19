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
    myScreen.print("PET BOTTLE");
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
myScreen.setXY( 22 , 72 ,1);
myScreen.setXY( 22 , 73 ,1);
myScreen.setXY( 22 , 74 ,1);
myScreen.setXY( 22 , 75 ,1);
myScreen.setXY( 22 , 76 ,1);
myScreen.setXY( 22 , 77 ,1);
myScreen.setXY( 22 , 78 ,1);
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
myScreen.setXY( 23 , 73 ,1);
myScreen.setXY( 23 , 74 ,1);
myScreen.setXY( 23 , 75 ,1);
myScreen.setXY( 23 , 76 ,1);
myScreen.setXY( 23 , 77 ,1);
myScreen.setXY( 23 , 78 ,1);
myScreen.setXY( 24 , 41 ,1);
myScreen.setXY( 24 , 42 ,1);
myScreen.setXY( 24 , 43 ,1);
myScreen.setXY( 24 , 52 ,1);
myScreen.setXY( 24 , 53 ,1);
myScreen.setXY( 24 , 69 ,1);
myScreen.setXY( 24 , 77 ,1);
myScreen.setXY( 24 , 78 ,1);
myScreen.setXY( 25 , 41 ,1);
myScreen.setXY( 25 , 42 ,1);
myScreen.setXY( 25 , 43 ,1);
myScreen.setXY( 25 , 53 ,1);
myScreen.setXY( 25 , 58 ,1);
myScreen.setXY( 25 , 59 ,1);
myScreen.setXY( 25 , 60 ,1);
myScreen.setXY( 25 , 61 ,1);
myScreen.setXY( 25 , 62 ,1);
myScreen.setXY( 25 , 63 ,1);
myScreen.setXY( 25 , 64 ,1);
myScreen.setXY( 25 , 65 ,1);
myScreen.setXY( 25 , 66 ,1);
myScreen.setXY( 25 , 67 ,1);
myScreen.setXY( 25 , 69 ,1);
myScreen.setXY( 25 , 70 ,1);
myScreen.setXY( 25 , 78 ,1);
myScreen.setXY( 25 , 79 ,1);
myScreen.setXY( 26 , 40 ,1);
myScreen.setXY( 26 , 41 ,1);
myScreen.setXY( 26 , 42 ,1);
myScreen.setXY( 26 , 54 ,1);
myScreen.setXY( 26 , 58 ,1);
myScreen.setXY( 26 , 59 ,1);
myScreen.setXY( 26 , 60 ,1);
myScreen.setXY( 26 , 61 ,1);
myScreen.setXY( 26 , 62 ,1);
myScreen.setXY( 26 , 63 ,1);
myScreen.setXY( 26 , 64 ,1);
myScreen.setXY( 26 , 65 ,1);
myScreen.setXY( 26 , 66 ,1);
myScreen.setXY( 26 , 67 ,1);
myScreen.setXY( 26 , 70 ,1);
myScreen.setXY( 26 , 78 ,1);
myScreen.setXY( 26 , 79 ,1);
myScreen.setXY( 27 , 40 ,1);
myScreen.setXY( 27 , 41 ,1);
myScreen.setXY( 27 , 42 ,1);
myScreen.setXY( 27 , 54 ,1);
myScreen.setXY( 27 , 58 ,1);
myScreen.setXY( 27 , 59 ,1);
myScreen.setXY( 27 , 63 ,1);
myScreen.setXY( 27 , 64 ,1);
myScreen.setXY( 27 , 70 ,1);
myScreen.setXY( 27 , 71 ,1);
myScreen.setXY( 27 , 79 ,1);
myScreen.setXY( 28 , 39 ,1);
myScreen.setXY( 28 , 40 ,1);
myScreen.setXY( 28 , 41 ,1);
myScreen.setXY( 28 , 54 ,1);
myScreen.setXY( 28 , 55 ,1);
myScreen.setXY( 28 , 58 ,1);
myScreen.setXY( 28 , 59 ,1);
myScreen.setXY( 28 , 63 ,1);
myScreen.setXY( 28 , 64 ,1);
myScreen.setXY( 28 , 70 ,1);
myScreen.setXY( 28 , 71 ,1);
myScreen.setXY( 28 , 79 ,1);
myScreen.setXY( 28 , 80 ,1);
myScreen.setXY( 29 , 39 ,1);
myScreen.setXY( 29 , 40 ,1);
myScreen.setXY( 29 , 41 ,1);
myScreen.setXY( 29 , 55 ,1);
myScreen.setXY( 29 , 59 ,1);
myScreen.setXY( 29 , 60 ,1);
myScreen.setXY( 29 , 61 ,1);
myScreen.setXY( 29 , 62 ,1);
myScreen.setXY( 29 , 63 ,1);
myScreen.setXY( 29 , 71 ,1);
myScreen.setXY( 29 , 79 ,1);
myScreen.setXY( 29 , 80 ,1);
myScreen.setXY( 30 , 39 ,1);
myScreen.setXY( 30 , 40 ,1);
myScreen.setXY( 30 , 55 ,1);
myScreen.setXY( 30 , 60 ,1);
myScreen.setXY( 30 , 61 ,1);
myScreen.setXY( 30 , 62 ,1);
myScreen.setXY( 30 , 71 ,1);
myScreen.setXY( 30 , 79 ,1);
myScreen.setXY( 30 , 80 ,1);
myScreen.setXY( 31 , 36 ,1);
myScreen.setXY( 31 , 37 ,1);
myScreen.setXY( 31 , 38 ,1);
myScreen.setXY( 31 , 39 ,1);
myScreen.setXY( 31 , 40 ,1);
myScreen.setXY( 31 , 55 ,1);
myScreen.setXY( 31 , 71 ,1);
myScreen.setXY( 31 , 79 ,1);
myScreen.setXY( 31 , 80 ,1);
myScreen.setXY( 32 , 32 ,1);
myScreen.setXY( 32 , 33 ,1);
myScreen.setXY( 32 , 34 ,1);
myScreen.setXY( 32 , 35 ,1);
myScreen.setXY( 32 , 36 ,1);
myScreen.setXY( 32 , 37 ,1);
myScreen.setXY( 32 , 38 ,1);
myScreen.setXY( 32 , 39 ,1);
myScreen.setXY( 32 , 40 ,1);
myScreen.setXY( 32 , 55 ,1);
myScreen.setXY( 32 , 56 ,1);
myScreen.setXY( 32 , 71 ,1);
myScreen.setXY( 32 , 80 ,1);
myScreen.setXY( 33 , 31 ,1);
myScreen.setXY( 33 , 32 ,1);
myScreen.setXY( 33 , 33 ,1);
myScreen.setXY( 33 , 34 ,1);
myScreen.setXY( 33 , 36 ,1);
myScreen.setXY( 33 , 37 ,1);
myScreen.setXY( 33 , 56 ,1);
myScreen.setXY( 33 , 61 ,1);
myScreen.setXY( 33 , 62 ,1);
myScreen.setXY( 33 , 63 ,1);
myScreen.setXY( 33 , 64 ,1);
myScreen.setXY( 33 , 65 ,1);
myScreen.setXY( 33 , 66 ,1);
myScreen.setXY( 33 , 67 ,1);
myScreen.setXY( 33 , 68 ,1);
myScreen.setXY( 33 , 71 ,1);
myScreen.setXY( 33 , 80 ,1);
myScreen.setXY( 34 , 31 ,1);
myScreen.setXY( 34 , 32 ,1);
myScreen.setXY( 34 , 34 ,1);
myScreen.setXY( 34 , 35 ,1);
myScreen.setXY( 34 , 56 ,1);
myScreen.setXY( 34 , 60 ,1);
myScreen.setXY( 34 , 61 ,1);
myScreen.setXY( 34 , 62 ,1);
myScreen.setXY( 34 , 63 ,1);
myScreen.setXY( 34 , 64 ,1);
myScreen.setXY( 34 , 65 ,1);
myScreen.setXY( 34 , 66 ,1);
myScreen.setXY( 34 , 67 ,1);
myScreen.setXY( 34 , 68 ,1);
myScreen.setXY( 34 , 69 ,1);
myScreen.setXY( 34 , 71 ,1);
myScreen.setXY( 34 , 80 ,1);
myScreen.setXY( 35 , 31 ,1);
myScreen.setXY( 35 , 35 ,1);
myScreen.setXY( 35 , 56 ,1);
myScreen.setXY( 35 , 60 ,1);
myScreen.setXY( 35 , 61 ,1);
myScreen.setXY( 35 , 62 ,1);
myScreen.setXY( 35 , 64 ,1);
myScreen.setXY( 35 , 65 ,1);
myScreen.setXY( 35 , 67 ,1);
myScreen.setXY( 35 , 68 ,1);
myScreen.setXY( 35 , 69 ,1);
myScreen.setXY( 35 , 71 ,1);
myScreen.setXY( 35 , 80 ,1);
myScreen.setXY( 36 , 31 ,1);
myScreen.setXY( 36 , 35 ,1);
myScreen.setXY( 36 , 56 ,1);
myScreen.setXY( 36 , 60 ,1);
myScreen.setXY( 36 , 61 ,1);
myScreen.setXY( 36 , 64 ,1);
myScreen.setXY( 36 , 65 ,1);
myScreen.setXY( 36 , 68 ,1);
myScreen.setXY( 36 , 69 ,1);
myScreen.setXY( 36 , 71 ,1);
myScreen.setXY( 36 , 80 ,1);
myScreen.setXY( 37 , 31 ,1);
myScreen.setXY( 37 , 32 ,1);
myScreen.setXY( 37 , 34 ,1);
myScreen.setXY( 37 , 35 ,1);
myScreen.setXY( 37 , 56 ,1);
myScreen.setXY( 37 , 60 ,1);
myScreen.setXY( 37 , 61 ,1);
myScreen.setXY( 37 , 64 ,1);
myScreen.setXY( 37 , 65 ,1);
myScreen.setXY( 37 , 68 ,1);
myScreen.setXY( 37 , 69 ,1);
myScreen.setXY( 37 , 71 ,1);
myScreen.setXY( 37 , 80 ,1);
myScreen.setXY( 38 , 31 ,1);
myScreen.setXY( 38 , 32 ,1);
myScreen.setXY( 38 , 33 ,1);
myScreen.setXY( 38 , 34 ,1);
myScreen.setXY( 38 , 36 ,1);
myScreen.setXY( 38 , 37 ,1);
myScreen.setXY( 38 , 56 ,1);
myScreen.setXY( 38 , 60 ,1);
myScreen.setXY( 38 , 61 ,1);
myScreen.setXY( 38 , 68 ,1);
myScreen.setXY( 38 , 69 ,1);
myScreen.setXY( 38 , 71 ,1);
myScreen.setXY( 38 , 80 ,1);
myScreen.setXY( 39 , 32 ,1);
myScreen.setXY( 39 , 33 ,1);
myScreen.setXY( 39 , 34 ,1);
myScreen.setXY( 39 , 35 ,1);
myScreen.setXY( 39 , 36 ,1);
myScreen.setXY( 39 , 37 ,1);
myScreen.setXY( 39 , 38 ,1);
myScreen.setXY( 39 , 39 ,1);
myScreen.setXY( 39 , 40 ,1);
myScreen.setXY( 39 , 56 ,1);
myScreen.setXY( 39 , 61 ,1);
myScreen.setXY( 39 , 68 ,1);
myScreen.setXY( 39 , 71 ,1);
myScreen.setXY( 39 , 80 ,1);
myScreen.setXY( 40 , 36 ,1);
myScreen.setXY( 40 , 37 ,1);
myScreen.setXY( 40 , 38 ,1);
myScreen.setXY( 40 , 39 ,1);
myScreen.setXY( 40 , 40 ,1);
myScreen.setXY( 40 , 56 ,1);
myScreen.setXY( 40 , 71 ,1);
myScreen.setXY( 40 , 80 ,1);
myScreen.setXY( 41 , 39 ,1);
myScreen.setXY( 41 , 40 ,1);
myScreen.setXY( 41 , 55 ,1);
myScreen.setXY( 41 , 56 ,1);
myScreen.setXY( 41 , 59 ,1);
myScreen.setXY( 41 , 60 ,1);
myScreen.setXY( 41 , 71 ,1);
myScreen.setXY( 41 , 80 ,1);
myScreen.setXY( 42 , 39 ,1);
myScreen.setXY( 42 , 40 ,1);
myScreen.setXY( 42 , 41 ,1);
myScreen.setXY( 42 , 55 ,1);
myScreen.setXY( 42 , 59 ,1);
myScreen.setXY( 42 , 60 ,1);
myScreen.setXY( 42 , 71 ,1);
myScreen.setXY( 42 , 80 ,1);
myScreen.setXY( 43 , 39 ,1);
myScreen.setXY( 43 , 40 ,1);
myScreen.setXY( 43 , 41 ,1);
myScreen.setXY( 43 , 54 ,1);
myScreen.setXY( 43 , 55 ,1);
myScreen.setXY( 43 , 59 ,1);
myScreen.setXY( 43 , 60 ,1);
myScreen.setXY( 43 , 71 ,1);
myScreen.setXY( 43 , 79 ,1);
myScreen.setXY( 43 , 80 ,1);
myScreen.setXY( 44 , 40 ,1);
myScreen.setXY( 44 , 41 ,1);
myScreen.setXY( 44 , 42 ,1);
myScreen.setXY( 44 , 54 ,1);
myScreen.setXY( 44 , 59 ,1);
myScreen.setXY( 44 , 60 ,1);
myScreen.setXY( 44 , 61 ,1);
myScreen.setXY( 44 , 62 ,1);
myScreen.setXY( 44 , 63 ,1);
myScreen.setXY( 44 , 64 ,1);
myScreen.setXY( 44 , 65 ,1);
myScreen.setXY( 44 , 66 ,1);
myScreen.setXY( 44 , 67 ,1);
myScreen.setXY( 44 , 70 ,1);
myScreen.setXY( 44 , 71 ,1);
myScreen.setXY( 44 , 79 ,1);
myScreen.setXY( 44 , 80 ,1);
myScreen.setXY( 45 , 40 ,1);
myScreen.setXY( 45 , 41 ,1);
myScreen.setXY( 45 , 42 ,1);
myScreen.setXY( 45 , 53 ,1);
myScreen.setXY( 45 , 59 ,1);
myScreen.setXY( 45 , 60 ,1);
myScreen.setXY( 45 , 61 ,1);
myScreen.setXY( 45 , 62 ,1);
myScreen.setXY( 45 , 63 ,1);
myScreen.setXY( 45 , 64 ,1);
myScreen.setXY( 45 , 65 ,1);
myScreen.setXY( 45 , 66 ,1);
myScreen.setXY( 45 , 67 ,1);
myScreen.setXY( 45 , 70 ,1);
myScreen.setXY( 45 , 71 ,1);
myScreen.setXY( 45 , 78 ,1);
myScreen.setXY( 45 , 79 ,1);
myScreen.setXY( 45 , 80 ,1);
myScreen.setXY( 46 , 41 ,1);
myScreen.setXY( 46 , 42 ,1);
myScreen.setXY( 46 , 43 ,1);
myScreen.setXY( 46 , 53 ,1);
myScreen.setXY( 46 , 59 ,1);
myScreen.setXY( 46 , 60 ,1);
myScreen.setXY( 46 , 69 ,1);
myScreen.setXY( 46 , 70 ,1);
myScreen.setXY( 46 , 78 ,1);
myScreen.setXY( 46 , 79 ,1);
myScreen.setXY( 47 , 41 ,1);
myScreen.setXY( 47 , 42 ,1);
myScreen.setXY( 47 , 43 ,1);
myScreen.setXY( 47 , 52 ,1);
myScreen.setXY( 47 , 59 ,1);
myScreen.setXY( 47 , 60 ,1);
myScreen.setXY( 47 , 68 ,1);
myScreen.setXY( 47 , 69 ,1);
myScreen.setXY( 47 , 78 ,1);
myScreen.setXY( 48 , 42 ,1);
myScreen.setXY( 48 , 43 ,1);
myScreen.setXY( 48 , 50 ,1);
myScreen.setXY( 48 , 51 ,1);
myScreen.setXY( 48 , 52 ,1);
myScreen.setXY( 48 , 68 ,1);
myScreen.setXY( 48 , 77 ,1);
myScreen.setXY( 48 , 78 ,1);
myScreen.setXY( 49 , 42 ,1);
myScreen.setXY( 49 , 43 ,1);
myScreen.setXY( 49 , 44 ,1);
myScreen.setXY( 49 , 45 ,1);
myScreen.setXY( 49 , 46 ,1);
myScreen.setXY( 49 , 47 ,1);
myScreen.setXY( 49 , 48 ,1);
myScreen.setXY( 49 , 49 ,1);
myScreen.setXY( 49 , 50 ,1);
myScreen.setXY( 49 , 51 ,1);
myScreen.setXY( 49 , 52 ,1);
myScreen.setXY( 49 , 53 ,1);
myScreen.setXY( 49 , 54 ,1);
myScreen.setXY( 49 , 55 ,1);
myScreen.setXY( 49 , 56 ,1);
myScreen.setXY( 49 , 57 ,1);
myScreen.setXY( 49 , 58 ,1);
myScreen.setXY( 49 , 59 ,1);
myScreen.setXY( 49 , 60 ,1);
myScreen.setXY( 49 , 61 ,1);
myScreen.setXY( 49 , 62 ,1);
myScreen.setXY( 49 , 63 ,1);
myScreen.setXY( 49 , 64 ,1);
myScreen.setXY( 49 , 65 ,1);
myScreen.setXY( 49 , 66 ,1);
myScreen.setXY( 49 , 67 ,1);
myScreen.setXY( 49 , 68 ,1);
myScreen.setXY( 49 , 69 ,1);
myScreen.setXY( 49 , 70 ,1);
myScreen.setXY( 49 , 71 ,1);
myScreen.setXY( 49 , 72 ,1);
myScreen.setXY( 49 , 73 ,1);
myScreen.setXY( 49 , 74 ,1);
myScreen.setXY( 49 , 75 ,1);
myScreen.setXY( 49 , 76 ,1);
myScreen.setXY( 49 , 77 ,1);
myScreen.setXY( 49 , 78 ,1);
myScreen.setXY( 50 , 42 ,1);
myScreen.setXY( 50 , 43 ,1);
myScreen.setXY( 50 , 44 ,1);
myScreen.setXY( 50 , 45 ,1);
myScreen.setXY( 50 , 46 ,1);
myScreen.setXY( 50 , 47 ,1);
myScreen.setXY( 50 , 48 ,1);
myScreen.setXY( 50 , 49 ,1);
myScreen.setXY( 50 , 50 ,1);
myScreen.setXY( 50 , 51 ,1);
myScreen.setXY( 50 , 52 ,1);
myScreen.setXY( 50 , 53 ,1);
myScreen.setXY( 50 , 54 ,1);
myScreen.setXY( 50 , 55 ,1);
myScreen.setXY( 50 , 56 ,1);
myScreen.setXY( 50 , 57 ,1);
myScreen.setXY( 50 , 58 ,1);
myScreen.setXY( 50 , 59 ,1);
myScreen.setXY( 50 , 60 ,1);
myScreen.setXY( 50 , 61 ,1);
myScreen.setXY( 50 , 62 ,1);
myScreen.setXY( 50 , 63 ,1);
myScreen.setXY( 50 , 64 ,1);
myScreen.setXY( 50 , 65 ,1);
myScreen.setXY( 50 , 66 ,1);
myScreen.setXY( 50 , 67 ,1);
myScreen.setXY( 50 , 68 ,1);
myScreen.setXY( 50 , 69 ,1);
myScreen.setXY( 50 , 70 ,1);
myScreen.setXY( 50 , 71 ,1);
myScreen.setXY( 50 , 72 ,1);
myScreen.setXY( 50 , 73 ,1);
myScreen.setXY( 50 , 74 ,1);
myScreen.setXY( 50 , 75 ,1);
myScreen.setXY( 50 , 76 ,1);
myScreen.setXY( 50 , 77 ,1);

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
    myScreen.setCharXY(51, 95);
    myScreen.print("NON");
    myScreen.setCharXY(6, 112);
    myScreen.print("RECYCLABLE");
    myScreen.setCharXY(10, 60);

    myScreen.flush();

    for (uint8_t i = 0; i < 2; i++)
    {
        delay(100);
    }
}
