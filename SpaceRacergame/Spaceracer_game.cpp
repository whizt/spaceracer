#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

char Area[40][80];

void printBoard();
void StartGame();
void menu();
void delay();


int gotoxy(int x,int y)
{
    COORD coord = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int gotoxy(int,int);

void board(){
//untuk print board
        for (int i = 0; i < 40; i++) {
        for(int j = 0; j < 80; j++){
            if(i==0 || i==39 || j==0 || j==79){
                Area[i][j] = '#';
            }
            else Area[i][j] = ' ';

            printf("%c", Area[i][j]);
        }
        printf("\n");
    }

}

int pswt = 0; //dijadiin variabel global biar setiap loop return scorenya tidak kembali 0
void StartGame(){
	
	int a,b,c,i;
	char obj = 'X';
		
	puts("# # # # # # # # # # # # # # #     SCOREBOARD    # # # # # # # # # # # # # # # #");
	puts("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~");
	printf(" - - - - - - - - - - - - - - - - - -  %d  - - - - - - - - - - - - - - - - - - - \n",pswt);
	puts("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~");
	
	// print scoreboardnya
    board();
    
    a=38;
    b=42;
	//lokasi start player
    gotoxy(a,b);
    printf("%c",obj);
    
while( pswt < 2 ) //bila batas poin tercukupi maka stop loop sementara poin di buat 2 agar test lebih cepat
{
	int k = 0;
    if(kbhit())
    {
    c=getch();
        if(c==72){
        	// untuk maju
        	++k;
			b -= k;
			if (Area[38][42-k]){
				printf("\b "); 
				// "\b" = backspace
			}
			if (b == 4){
				pswt = pswt + 1; // menambahkan score
				system("cls"); // for clear screen
				return StartGame();
			}
		}
        

        if(c==80){
        	// untuk mundur
        	++k;
			b+=k;
			if (Area[38][42+k]){
				printf("\b ");
			}
			if (b == 43){
				system("cls");
				return StartGame();
			}
		}
        

	 obj = 'X'; // pesawatnya atau player
     gotoxy(a,b);
     printf("%c",obj);

     }
}
	
   system("cls");
   printf("YOU WIN !!!\n");delay();delay();
   
   system("cls");
   return menu();
}

void menu(){
	pswt = 0;
    puts("Welcome to Space Race, Have Fun!");
    puts("================================");
    puts(" ");
    puts("1. Lets Race!");
    puts("2. I'm done.\n");
    
    int choice=0;
    do{
        printf("Select -> ");
        scanf("%d", &choice); 
    } while (choice < 1 || choice > 2);
    
    switch (choice){
        case 1:
			system("cls");
            StartGame();
            break;
        case 2:
			system("cls");
            printf("Adios!\n");
            break;
    }
    
}

void delay() {
	// memberi jeda
  for(int i = 0; i < 1000000000; i++) {
    ;
  }
}

int main(){
	menu();
	return 0;
}
