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
    myScreen.print("WRAPPER");
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

myScreen.setXY( 14 , 51 ,1);
myScreen.setXY( 15 , 50 ,1);
myScreen.setXY( 15 , 51 ,1);
myScreen.setXY( 16 , 52 ,1);
myScreen.setXY( 16 , 53 ,1);
myScreen.setXY( 17 , 50 ,1);
myScreen.setXY( 17 , 54 ,1);
myScreen.setXY( 18 , 46 ,1);
myScreen.setXY( 18 , 48 ,1);
myScreen.setXY( 18 , 49 ,1);
myScreen.setXY( 18 , 55 ,1);
myScreen.setXY( 19 , 54 ,1);
myScreen.setXY( 19 , 55 ,1);
myScreen.setXY( 19 , 56 ,1);
myScreen.setXY( 20 , 46 ,1);
myScreen.setXY( 20 , 54 ,1);
myScreen.setXY( 20 , 56 ,1);
myScreen.setXY( 21 , 52 ,1);
myScreen.setXY( 21 , 53 ,1);
myScreen.setXY( 21 , 57 ,1);
myScreen.setXY( 21 , 58 ,1);
myScreen.setXY( 22 , 43 ,1);
myScreen.setXY( 22 , 44 ,1);
myScreen.setXY( 22 , 45 ,1);
myScreen.setXY( 22 , 46 ,1);
myScreen.setXY( 22 , 51 ,1);
myScreen.setXY( 22 , 59 ,1);
myScreen.setXY( 23 , 42 ,1);
myScreen.setXY( 23 , 51 ,1);
myScreen.setXY( 23 , 59 ,1);
myScreen.setXY( 24 , 49 ,1);
myScreen.setXY( 24 , 50 ,1);
myScreen.setXY( 24 , 60 ,1);
myScreen.setXY( 24 , 61 ,1);
myScreen.setXY( 25 , 48 ,1);
myScreen.setXY( 25 , 61 ,1);
myScreen.setXY( 25 , 62 ,1);
myScreen.setXY( 26 , 38 ,1);
myScreen.setXY( 26 , 39 ,1);
myScreen.setXY( 26 , 40 ,1);
myScreen.setXY( 26 , 42 ,1);
myScreen.setXY( 26 , 48 ,1);
myScreen.setXY( 26 , 62 ,1);
myScreen.setXY( 26 , 63 ,1);
myScreen.setXY( 27 , 38 ,1);
myScreen.setXY( 27 , 47 ,1);
myScreen.setXY( 27 , 63 ,1);
myScreen.setXY( 27 , 64 ,1);
myScreen.setXY( 28 , 45 ,1);
myScreen.setXY( 28 , 46 ,1);
myScreen.setXY( 28 , 64 ,1);
myScreen.setXY( 29 , 44 ,1);
myScreen.setXY( 29 , 65 ,1);
myScreen.setXY( 29 , 66 ,1);
myScreen.setXY( 30 , 35 ,1);
myScreen.setXY( 30 , 38 ,1);
myScreen.setXY( 30 , 43 ,1);
myScreen.setXY( 30 , 52 ,1);
myScreen.setXY( 30 , 53 ,1);
myScreen.setXY( 30 , 55 ,1);
myScreen.setXY( 30 , 67 ,1);
myScreen.setXY( 31 , 35 ,1);
myScreen.setXY( 31 , 43 ,1);
myScreen.setXY( 31 , 51 ,1);
myScreen.setXY( 31 , 55 ,1);
myScreen.setXY( 31 , 67 ,1);
myScreen.setXY( 32 , 35 ,1);
myScreen.setXY( 32 , 36 ,1);
myScreen.setXY( 32 , 41 ,1);
myScreen.setXY( 32 , 42 ,1);
myScreen.setXY( 32 , 56 ,1);
myScreen.setXY( 32 , 57 ,1);
myScreen.setXY( 32 , 68 ,1);
myScreen.setXY( 32 , 69 ,1);
myScreen.setXY( 33 , 37 ,1);
myScreen.setXY( 33 , 40 ,1);
myScreen.setXY( 33 , 57 ,1);
myScreen.setXY( 33 , 69 ,1);
myScreen.setXY( 33 , 70 ,1);
myScreen.setXY( 34 , 37 ,1);
myScreen.setXY( 34 , 38 ,1);
myScreen.setXY( 34 , 70 ,1);
myScreen.setXY( 34 , 71 ,1);
myScreen.setXY( 35 , 38 ,1);
myScreen.setXY( 35 , 39 ,1);
myScreen.setXY( 35 , 50 ,1);
myScreen.setXY( 35 , 71 ,1);
myScreen.setXY( 36 , 51 ,1);
myScreen.setXY( 36 , 72 ,1);
myScreen.setXY( 36 , 73 ,1);
myScreen.setXY( 37 , 40 ,1);
myScreen.setXY( 37 , 52 ,1);
myScreen.setXY( 37 , 61 ,1);
myScreen.setXY( 37 , 73 ,1);
myScreen.setXY( 37 , 74 ,1);
myScreen.setXY( 38 , 42 ,1);
myScreen.setXY( 38 , 52 ,1);
myScreen.setXY( 38 , 61 ,1);
myScreen.setXY( 38 , 72 ,1);
myScreen.setXY( 38 , 75 ,1);
myScreen.setXY( 39 , 43 ,1);
myScreen.setXY( 39 , 54 ,1);
myScreen.setXY( 39 , 61 ,1);
myScreen.setXY( 39 , 71 ,1);
myScreen.setXY( 39 , 76 ,1);
myScreen.setXY( 40 , 43 ,1);
myScreen.setXY( 40 , 55 ,1);
myScreen.setXY( 40 , 60 ,1);
myScreen.setXY( 40 , 69 ,1);
myScreen.setXY( 40 , 70 ,1);
myScreen.setXY( 40 , 77 ,1);
myScreen.setXY( 41 , 58 ,1);
myScreen.setXY( 41 , 68 ,1);
myScreen.setXY( 41 , 75 ,1);
myScreen.setXY( 41 , 76 ,1);
myScreen.setXY( 41 , 77 ,1);
myScreen.setXY( 42 , 45 ,1);
myScreen.setXY( 42 , 58 ,1);
myScreen.setXY( 42 , 68 ,1);
myScreen.setXY( 43 , 46 ,1);
myScreen.setXY( 43 , 66 ,1);
myScreen.setXY( 43 , 67 ,1);
myScreen.setXY( 44 , 47 ,1);
myScreen.setXY( 44 , 48 ,1);
myScreen.setXY( 44 , 65 ,1);
myScreen.setXY( 45 , 48 ,1);
myScreen.setXY( 45 , 49 ,1);
myScreen.setXY( 45 , 64 ,1);
myScreen.setXY( 45 , 69 ,1);
myScreen.setXY( 45 , 72 ,1);
myScreen.setXY( 46 , 50 ,1);
myScreen.setXY( 46 , 63 ,1);
myScreen.setXY( 46 , 64 ,1);
myScreen.setXY( 47 , 50 ,1);
myScreen.setXY( 47 , 63 ,1);
myScreen.setXY( 48 , 52 ,1);
myScreen.setXY( 48 , 61 ,1);
myScreen.setXY( 48 , 62 ,1);
myScreen.setXY( 49 , 53 ,1);
myScreen.setXY( 49 , 60 ,1);
myScreen.setXY( 49 , 68 ,1);
myScreen.setXY( 50 , 53 ,1);
myScreen.setXY( 50 , 60 ,1);
myScreen.setXY( 51 , 54 ,1);
myScreen.setXY( 51 , 55 ,1);
myScreen.setXY( 51 , 59 ,1);
myScreen.setXY( 52 , 55 ,1);
myScreen.setXY( 52 , 57 ,1);
myScreen.setXY( 52 , 65 ,1);
myScreen.setXY( 53 , 56 ,1);
myScreen.setXY( 53 , 61 ,1);
myScreen.setXY( 53 , 64 ,1);
myScreen.setXY( 54 , 57 ,1);
myScreen.setXY( 54 , 58 ,1);
myScreen.setXY( 56 , 60 ,1);
myScreen.setXY( 56 , 61 ,1);





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
