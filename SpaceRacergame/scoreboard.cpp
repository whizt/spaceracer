#include <stdio.h>
#include <stdlib.h>

//int board[40][80];
//# # # # # # # # # # # # # # #     SCOREBOARD    # # # # # # # # # # # # # # # #
//~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// - - - - - - - - - - - - - - - - - -  1  - - - - - - - - - - - - - - - - - - -
//~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

//function proto
void delay();
void plus_score();
int number(int pswt,int current_score);
void clear();
void score();


void delay() {
  for(int i = 0; i < 100000000; i++) {
    ;
  }
}
int number( int pswt, int current_score){
	if ( pswt == 0){
		return ++current_score;
	}
}
int plus_score(int pswt){
	int current_score = 0;
	int *a = &pswt;
	return number(*a,current_score);
}


void clear() {
  for(int i = 0; i < 60; i++) {
    puts("");
  }
}

void score(){
	clear();
	int pswt;
	scanf("%d",&pswt);
	
	puts("# # # # # # # # # # # # # # #     SCOREBOARD    # # # # # # # # # # # # # # # #");delay();
	puts("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~");delay();
	printf(" - - - - - - - - - - - - - - - - - -  %d  - - - - - - - - - - - - - - - - - - - \n",plus_score(pswt));delay();
	puts("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~");delay();

	for ( int y = 0; y < 40; y++){
		if ( y == 0 || y == 39 ){
			for ( int x = 0; x < 79; x++){
				if ( x % 2 == 0 ){
					printf(" ");
				} else {
					printf("#");
				}
			}
		}
		puts("#");
		delay();
	}	
}

int main(){
score();
return 0;
}
