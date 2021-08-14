#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int gotoxy(int x,int y)
{
    COORD coord = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int gotoxy(int,int);

char Area[40][80];

void board(){

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

void spaceShip(){

    board();

    int a,b,c,i;
    char obj = 'X';

    a=39;
    b=38;

    system("cls");
    gotoxy(a,b);
    printf("%c",obj);

while(1)
{
    if(kbhit())
    {
    c=getch();
        if(c==72)
        b--;

        if(c==80)
        b++;
       system("cls");
     gotoxy(a,b);
     printf("%c",obj);

     }
}
   getch();
}

int main(){

    spaceShip();

}
