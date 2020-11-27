/*
 * main.c
 *
 *  Created on: Nov 27, 2020
 *      Author: aliaa
 */


#include"stdlib.h"
#include "LCD_4bit_driver.h"
int main(){

	LCD_init();
	lcd_String("hello");

	return 0;
}
