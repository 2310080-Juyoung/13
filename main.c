#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
	int ID;
	char name[100];
	float score;
	};
	
void main (void) {
	struct student s1 = {132, "JuYeong", 4.3};
	
	s1.ID = 2233;
	s1.name[0] = 'c';
	s1.score = 4.20000;
	
	printf("ID : %d\n", s1.ID);
	printf("name : %s\n", s1.name);
	printf("score : %f\n", s1.score);
	
	strcpy(s1.name,"JuYeop");
	printf("name2: %s\n",s1.name);
}	

