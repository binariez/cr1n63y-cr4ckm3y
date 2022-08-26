#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

int main(void){
	int a = 63;
	char b;
	bool valid;
	printf("\"the answer might right in front of you, you just have to look at it!\" -binariez\n\n");
	printf("what have you found");
	scanf(" %c", &b);

	if(b == (char)a){
		valid = true;
	}
	else{
		valid = false;
	}

	if(valid == true){
		printf("Correct answer!\n");
	}
	else{
		printf("Incorrect answer!\n");
	}

	getch();
	return 0;
}
