#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define ROW 3
#define COL 3

int main() {
    char matrice[ROW][COL];
    char input;
    bool tutti = true;
    for(int i=0;i<ROW;i++) {
        for (int j = 0; j <COL; ++j) {
            scanf("%s", &input);

            if(input == 'X' || input == 'O'){
                matrice[i][j] = input;
            } else{
                printf("non valido");
            }

        }
    }




}