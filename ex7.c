/*
 * ex7.c
 *
 *  Created on: Jun 8, 2014
 *      Author: igor
 */

#include <stdio.h>

int main(int argc, char **argv) {
	int bugs=120;
	double brate=1.2;
	printf("You have so much %d bugs at that rate: %f .\n",bugs, brate);
	unsigned long universe_bugs= 10e20L;
	printf("The entire universe has %ld bugs.\n",universe_bugs);
	double expected_brate=bugs*brate;
	printf("You are expected having %f bugs.\n",expected_brate);
	double part_of_universe=expected_brate/universe_bugs;
	printf("You part in that mess is %g%%.\n",part_of_universe);

	//care factor
	char nul_byte='\0';
	double care_percentage=bugs*nul_byte;
	printf("You should care %g%% about it.\n",care_percentage);
	printf("Val of 0 is %d|%s|%c.\n",nul_byte,"igor",nul_byte);

	return 0;
}
