/*
 * ex8.c
 *
 *  Created on: Jun 8, 2014
 *      Author: igor
 */

#include <stdio.h>

int main(int argc, char **argv) {
	char fname[]={'I','g',
			'o','r',' ','F','\0'};
	int numar[]={1,2,3,4,55};
	int singnum=1;
	short singnumsh=1;
	long long singnumll=1;
	double singnumbig=300.0;
	char firstname[]= "Igor";
	int index=20;
	int right_index=2;
	puts("---Size Of---");
	printf("Int size %d\n",sizeof(singnum));
	printf("BigInt size %d\n",sizeof(singnumbig));
	printf("ShInt size %d\n",sizeof(singnumsh));
	printf("LLInt size %d\n",sizeof(singnumll));
	printf("Array size %d\n",sizeof(numar));
	printf("Name size %d\n",sizeof(firstname));
	printf("CharNameArray size %d\n",sizeof(fname));
	puts("---Indexing---");
	printf("Array: index: %d wrong: %d\n",numar[right_index],numar[index]);
	printf("Firstname: index %c, wrong: %c\n",firstname[right_index],firstname[index]);
	printf("Fullname: index %c wrong: %c\n",fname[right_index],fname[index]);
	puts("---Reassigning and Indexing---");
	numar[right_index]=800;
	numar[right_index]=fname[right_index];
	fname[right_index]=65;
	firstname[right_index]='I';
	printf("Array: index: %d wrong: %d\n",numar[right_index],numar[index]);
	printf("Firstname: index %c, wrong: %c whole: %s \n",firstname[right_index],firstname[index],firstname);
	printf("Fullname: index %c wrong: %c whole: %s\n",fname[right_index],fname[index],fname);
	return 0;
}
