#include <stdio.h>
#include <stdlib.h>

void clear() {
  for(int i = 0; i < 100; i++) {
    puts("");
  }
}

void menu(){
	puts("Welcome to Space Race, Have Fun!");
	puts("================================");
	puts(" ");
	puts("1. Lets Race!");
	puts("2. I'm done.\n");
	
	int choice=0;
	do{
		printf("Select -> ");
		scanf("%d", &choice); getchar();
	} while (choice < 1 || choice > 2);
	
	switch (choice){
		case 1:
			clear();
//			startGame();
			break;
		case 2:
			clear();
			printf("Adios!\n");
			break;
	}
	
}

int main (){
	menu();
	return 0;
}
