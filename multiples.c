#include <stdio.h>

#define MAX 1000
#define THREE 3
#define FIVE 5

int main(){
	int i;
	int multiplesof2;
	int multiplesof3;
	int multiplesof5;
	int sum;

	for(i = 1; i < 10; i++){
		multiplesof3 = 3 * 3;
		multiplesof5 = 5 * 5;
		multiplesof2 = 2 * 2;
		printf("3: %d  \t 5: %d \t 2 :%d\n", multiplesof3, multiplesof5, multiplesof2);
	}

}

