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

myScreen.setXY( 27 , 46 ,1);
myScreen.setXY( 27 , 47 ,1);
myScreen.setXY( 27 , 48 ,1);
myScreen.setXY( 27 , 51 ,1);
myScreen.setXY( 27 , 54 ,1);
myScreen.setXY( 27 , 55 ,1);
myScreen.setXY( 27 , 58 ,1);
myScreen.setXY( 27 , 61 ,1);
myScreen.setXY( 27 , 62 ,1);
myScreen.setXY( 27 , 63 ,1);
myScreen.setXY( 27 , 64 ,1);
myScreen.setXY( 27 , 65 ,1);
myScreen.setXY( 27 , 66 ,1);
myScreen.setXY( 27 , 67 ,1);
myScreen.setXY( 27 , 68 ,1);
myScreen.setXY( 27 , 69 ,1);
myScreen.setXY( 27 , 70 ,1);
myScreen.setXY( 27 , 71 ,1);
myScreen.setXY( 27 , 72 ,1);
myScreen.setXY( 27 , 73 ,1);
myScreen.setXY( 27 , 74 ,1);
myScreen.setXY( 27 , 75 ,1);
myScreen.setXY( 27 , 76 ,1);
myScreen.setXY( 28 , 44 ,1);
myScreen.setXY( 28 , 45 ,1);
myScreen.setXY( 28 , 46 ,1);
myScreen.setXY( 28 , 47 ,1);
myScreen.setXY( 28 , 48 ,1);
myScreen.setXY( 28 , 49 ,1);
myScreen.setXY( 28 , 50 ,1);
myScreen.setXY( 28 , 51 ,1);
myScreen.setXY( 28 , 52 ,1);
myScreen.setXY( 28 , 53 ,1);
myScreen.setXY( 28 , 54 ,1);
myScreen.setXY( 28 , 55 ,1);
myScreen.setXY( 28 , 56 ,1);
myScreen.setXY( 28 , 57 ,1);
myScreen.setXY( 28 , 58 ,1);
myScreen.setXY( 28 , 59 ,1);
myScreen.setXY( 28 , 60 ,1);
myScreen.setXY( 28 , 61 ,1);
myScreen.setXY( 28 , 62 ,1);
myScreen.setXY( 28 , 63 ,1);
myScreen.setXY( 28 , 64 ,1);
myScreen.setXY( 28 , 65 ,1);
myScreen.setXY( 28 , 66 ,1);
myScreen.setXY( 28 , 67 ,1);
myScreen.setXY( 28 , 68 ,1);
myScreen.setXY( 28 , 69 ,1);
myScreen.setXY( 28 , 70 ,1);
myScreen.setXY( 28 , 71 ,1);
myScreen.setXY( 28 , 72 ,1);
myScreen.setXY( 28 , 73 ,1);
myScreen.setXY( 28 , 74 ,1);
myScreen.setXY( 28 , 75 ,1);
myScreen.setXY( 28 , 76 ,1);
myScreen.setXY( 28 , 77 ,1);
myScreen.setXY( 29 , 42 ,1);
myScreen.setXY( 29 , 43 ,1);
myScreen.setXY( 29 , 44 ,1);
myScreen.setXY( 29 , 45 ,1);
myScreen.setXY( 29 , 48 ,1);
myScreen.setXY( 29 , 49 ,1);
myScreen.setXY( 29 , 50 ,1);
myScreen.setXY( 29 , 51 ,1);
myScreen.setXY( 29 , 52 ,1);
myScreen.setXY( 29 , 53 ,1);
myScreen.setXY( 29 , 54 ,1);
myScreen.setXY( 29 , 55 ,1);
myScreen.setXY( 29 , 56 ,1);
myScreen.setXY( 29 , 57 ,1);
myScreen.setXY( 29 , 58 ,1);
myScreen.setXY( 29 , 59 ,1);
myScreen.setXY( 29 , 60 ,1);
myScreen.setXY( 29 , 61 ,1);
myScreen.setXY( 29 , 76 ,1);
myScreen.setXY( 29 , 77 ,1);
myScreen.setXY( 30 , 42 ,1);
myScreen.setXY( 30 , 43 ,1);
myScreen.setXY( 30 , 77 ,1);
myScreen.setXY( 30 , 78 ,1);
myScreen.setXY( 31 , 34 ,1);
myScreen.setXY( 31 , 35 ,1);
myScreen.setXY( 31 , 36 ,1);
myScreen.setXY( 31 , 37 ,1);
myScreen.setXY( 31 , 38 ,1);
myScreen.setXY( 31 , 39 ,1);
myScreen.setXY( 31 , 41 ,1);
myScreen.setXY( 31 , 42 ,1);
myScreen.setXY( 31 , 77 ,1);
myScreen.setXY( 31 , 78 ,1);
myScreen.setXY( 32 , 34 ,1);
myScreen.setXY( 32 , 35 ,1);
myScreen.setXY( 32 , 36 ,1);
myScreen.setXY( 32 , 37 ,1);
myScreen.setXY( 32 , 38 ,1);
myScreen.setXY( 32 , 39 ,1);
myScreen.setXY( 32 , 41 ,1);
myScreen.setXY( 32 , 42 ,1);
myScreen.setXY( 32 , 77 ,1);
myScreen.setXY( 32 , 78 ,1);
myScreen.setXY( 33 , 33 ,1);
myScreen.setXY( 33 , 34 ,1);
myScreen.setXY( 33 , 38 ,1);
myScreen.setXY( 33 , 39 ,1);
myScreen.setXY( 33 , 40 ,1);
myScreen.setXY( 33 , 41 ,1);
myScreen.setXY( 33 , 77 ,1);
myScreen.setXY( 33 , 78 ,1);
myScreen.setXY( 34 , 33 ,1);
myScreen.setXY( 34 , 34 ,1);
myScreen.setXY( 34 , 38 ,1);
myScreen.setXY( 34 , 39 ,1);
myScreen.setXY( 34 , 40 ,1);
myScreen.setXY( 34 , 41 ,1);
myScreen.setXY( 34 , 77 ,1);
myScreen.setXY( 34 , 78 ,1);
myScreen.setXY( 35 , 33 ,1);
myScreen.setXY( 35 , 34 ,1);
myScreen.setXY( 35 , 38 ,1);
myScreen.setXY( 35 , 39 ,1);
myScreen.setXY( 35 , 40 ,1);
myScreen.setXY( 35 , 41 ,1);
myScreen.setXY( 35 , 77 ,1);
myScreen.setXY( 35 , 78 ,1);
myScreen.setXY( 36 , 33 ,1);
myScreen.setXY( 36 , 34 ,1);
myScreen.setXY( 36 , 38 ,1);
myScreen.setXY( 36 , 39 ,1);
myScreen.setXY( 36 , 40 ,1);
myScreen.setXY( 36 , 41 ,1);
myScreen.setXY( 36 , 77 ,1);
myScreen.setXY( 36 , 78 ,1);
myScreen.setXY( 37 , 33 ,1);
myScreen.setXY( 37 , 34 ,1);
myScreen.setXY( 37 , 38 ,1);
myScreen.setXY( 37 , 39 ,1);
myScreen.setXY( 37 , 40 ,1);
myScreen.setXY( 37 , 41 ,1);
myScreen.setXY( 37 , 77 ,1);
myScreen.setXY( 37 , 78 ,1);
myScreen.setXY( 38 , 33 ,1);
myScreen.setXY( 38 , 34 ,1);
myScreen.setXY( 38 , 38 ,1);
myScreen.setXY( 38 , 39 ,1);
myScreen.setXY( 38 , 40 ,1);
myScreen.setXY( 38 , 41 ,1);
myScreen.setXY( 38 , 44 ,1);
myScreen.setXY( 38 , 45 ,1);
myScreen.setXY( 38 , 77 ,1);
myScreen.setXY( 38 , 78 ,1);
myScreen.setXY( 39 , 34 ,1);
myScreen.setXY( 39 , 35 ,1);
myScreen.setXY( 39 , 36 ,1);
myScreen.setXY( 39 , 37 ,1);
myScreen.setXY( 39 , 38 ,1);
myScreen.setXY( 39 , 39 ,1);
myScreen.setXY( 39 , 41 ,1);
myScreen.setXY( 39 , 42 ,1);
myScreen.setXY( 39 , 44 ,1);
myScreen.setXY( 39 , 45 ,1);
myScreen.setXY( 39 , 46 ,1);
myScreen.setXY( 39 , 47 ,1);
myScreen.setXY( 39 , 62 ,1);
myScreen.setXY( 39 , 63 ,1);
myScreen.setXY( 39 , 64 ,1);
myScreen.setXY( 39 , 65 ,1);
myScreen.setXY( 39 , 66 ,1);
myScreen.setXY( 39 , 67 ,1);
myScreen.setXY( 39 , 68 ,1);
myScreen.setXY( 39 , 69 ,1);
myScreen.setXY( 39 , 70 ,1);
myScreen.setXY( 39 , 71 ,1);
myScreen.setXY( 39 , 72 ,1);
myScreen.setXY( 39 , 73 ,1);
myScreen.setXY( 39 , 74 ,1);
myScreen.setXY( 39 , 77 ,1);
myScreen.setXY( 39 , 78 ,1);
myScreen.setXY( 40 , 34 ,1);
myScreen.setXY( 40 , 35 ,1);
myScreen.setXY( 40 , 36 ,1);
myScreen.setXY( 40 , 37 ,1);
myScreen.setXY( 40 , 38 ,1);
myScreen.setXY( 40 , 39 ,1);
myScreen.setXY( 40 , 41 ,1);
myScreen.setXY( 40 , 42 ,1);
myScreen.setXY( 40 , 45 ,1);
myScreen.setXY( 40 , 46 ,1);
myScreen.setXY( 40 , 47 ,1);
myScreen.setXY( 40 , 62 ,1);
myScreen.setXY( 40 , 63 ,1);
myScreen.setXY( 40 , 64 ,1);
myScreen.setXY( 40 , 65 ,1);
myScreen.setXY( 40 , 66 ,1);
myScreen.setXY( 40 , 67 ,1);
myScreen.setXY( 40 , 68 ,1);
myScreen.setXY( 40 , 69 ,1);
myScreen.setXY( 40 , 70 ,1);
myScreen.setXY( 40 , 71 ,1);
myScreen.setXY( 40 , 72 ,1);
myScreen.setXY( 40 , 73 ,1);
myScreen.setXY( 40 , 74 ,1);
myScreen.setXY( 40 , 77 ,1);
myScreen.setXY( 40 , 78 ,1);
myScreen.setXY( 41 , 41 ,1);
myScreen.setXY( 41 , 42 ,1);
myScreen.setXY( 41 , 43 ,1);
myScreen.setXY( 41 , 77 ,1);
myScreen.setXY( 41 , 78 ,1);
myScreen.setXY( 42 , 42 ,1);
myScreen.setXY( 42 , 43 ,1);
myScreen.setXY( 42 , 44 ,1);
myScreen.setXY( 42 , 45 ,1);
myScreen.setXY( 42 , 49 ,1);
myScreen.setXY( 42 , 50 ,1);
myScreen.setXY( 42 , 52 ,1);
myScreen.setXY( 42 , 53 ,1);
myScreen.setXY( 42 , 54 ,1);
myScreen.setXY( 42 , 56 ,1);
myScreen.setXY( 42 , 57 ,1);
myScreen.setXY( 42 , 59 ,1);
myScreen.setXY( 42 , 60 ,1);
myScreen.setXY( 42 , 61 ,1);
myScreen.setXY( 42 , 76 ,1);
myScreen.setXY( 42 , 77 ,1);
myScreen.setXY( 43 , 43 ,1);
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
myScreen.setXY( 43 , 68 ,1);
myScreen.setXY( 43 , 69 ,1);
myScreen.setXY( 43 , 70 ,1);
myScreen.setXY( 43 , 71 ,1);
myScreen.setXY( 43 , 72 ,1);
myScreen.setXY( 43 , 73 ,1);
myScreen.setXY( 43 , 74 ,1);
myScreen.setXY( 43 , 75 ,1);
myScreen.setXY( 43 , 76 ,1);
myScreen.setXY( 43 , 77 ,1);
myScreen.setXY( 44 , 45 ,1);
myScreen.setXY( 44 , 46 ,1);
myScreen.setXY( 44 , 47 ,1);
myScreen.setXY( 44 , 48 ,1);
myScreen.setXY( 44 , 51 ,1);
myScreen.setXY( 44 , 52 ,1);
myScreen.setXY( 44 , 54 ,1);
myScreen.setXY( 44 , 55 ,1);
myScreen.setXY( 44 , 58 ,1);
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
myScreen.setXY( 44 , 71 ,1);
myScreen.setXY( 44 , 72 ,1);
myScreen.setXY( 44 , 73 ,1);
myScreen.setXY( 44 , 74 ,1);
myScreen.setXY( 44 , 75 ,1);
myScreen.setXY( 44 , 76 ,1);

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
    //myScreen.setCharXY(51, 95);
    //myScreen.print("NON");
    myScreen.setCharXY(6, 100);
    myScreen.print("RECYCLABLE");
    myScreen.setCharXY(10, 60);

    myScreen.flush();

    for (uint8_t i = 0; i < 2; i++)
    {
        delay(100);
    }
}
