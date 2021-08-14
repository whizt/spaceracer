#include <stdio.h>
#include <windows.h>

void delay();
void clear();
void timer();

void delay() {
  for(int i = 0; i < 1000000000; i++) {
    ;
  }
}

void clear() {
  for(int i = 0; i < 60; i++) {
    puts("");
  }
}

void timer(){
    for(int i=5; i>=1; i--){
        printf("\r SISA WAKTU TERSISA : %d", i);
        Sleep(1000);
        if (i == 1){
            clear();
            printf("GAME SELESAI\n");
            printf("HASIL SKOR : %d", HasilSkor);
            break;
        } 
    }    
}


int main(){
    HasilSkor=10;
    menu();
    
    return 0;
    
}
