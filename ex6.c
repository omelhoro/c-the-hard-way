/*
 * ex6.c
 *
 *  Created on: Jun 8, 2014
 *      Author: igor
 */

#include <stdio.h>


int main(int argc, char **argv) {
	int age=25;
	float gda=1.39;
	double value=2320.234234;
	double profit=10e6;
	//int profit2012= 7F;
	char initial='I';
	char firstname[] = "Igor";
	char lastname[] = "Fischer";

	printf("I am %d years old.\n",age);
	printf("My GDA is %f.\n",gda);
	printf("I am %f $ worth.\n",value);
	printf("Last year I gained %g $.\n",profit);
	printf("2012 I gained %0x $.\n",435435);
	printf("2011 I gained %d in Hex and %d in Oct and %d in Ints $ and %f in Hexfloats.\n",0x7E,075,255,0x7F.7Fp1);
	printf("My name begins with %c.\n",initial);
	printf("My first name is %s.\n",firstname);
	printf("My whole name is %s E %s.\n",firstname,lastname);
	printf("");
	return 0;
}

