#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define ROW 3
#define COL 3

int main() {
    char mat[ROW][COL];
    char input;

    for(int i=0;i<ROW;i++) {
        for (int j = 0; j <COL; ++j) {
            scanf("%s", &input);

            if(input == 'X' || input == 'O'){
                mat[i][j] = input;
            } else{
                printf("non valido");
            }

        }
    }
    bool tutti = false;
    for (int i = 0; i < ROW && !tutti; ++i) {
        for (int j = 0; j < COL && !tutti; ++j) {
            if       ((mat[0][0]=='X' && mat[0][1]=='X' && mat[0][2]) == 'X') || (mat[0][0]=='O' && mat[0][1]=='O' && mat[0][2] == 'O')) {
                    //tutti = true;
                    printf("hai vonto",tutti);
            } else if((mat[1][0] =='X' && mat[1][1] =='X' && mat[1][2] == 'X') || (mat[1][0]=='O' && mat[1][1]=='O' && mat[1][2] == 'O')) {
                    //tutti = true;
                    printf("hai vonto",tutti);
            }else if((mat[2][0]=='X' && mat[1][1]=='X' && mat[1][2] == 'X') || (mat[2][0]=='O' && mat[2][1]=='O' && mat[2][2] == 'O')){
                    //tutti = true;
                    printf("hai vinto",tutti);
            }else if((mat[0][0] =='X' && mat[1][0]== 'X' && mat[2][0] == 'X') || (mat[0][0]=='O' && mat[1][0]=='O' && mat[2][0] == 'O')){
                    //tutti = true;
                    printf("hai vinto",tutti);
            } else if((mat[0][1]=='X' && mat[1][1]=='X' && mat[2][1] == 'X' )|| (mat[0][1]=='O' && mat[1][1]== 'O' && mat[2][1] == 'O')){
                    //tutti = true;
                    printf("hai vinto",tutti);
            } else if((mat[0][2]=='X' && mat[1][2]=='X' && mat[2][2] == 'X') ||(mat[0][2]=='O' && mat[1][2]=='O' && mat[2][2] == 'O'){
                    //tutti = true;
                    printf("hai vinto",tutti);
            }else if((mat[0][0]=='X' && mat[1][1]=='X' && mat[2][2] == 'X' || (mat[0][0]=='O' && mat[1][1]=='O' && mat[2][2] == 'O')){
                    //tutti = true;
                    printf("hai vinto",tutti);
            }else if((mat[2][0]=='X' && mat[1][1]=='X' && mat[0][2] == 'X') || (mat[2][0]=='O' && mat[1][1]=='0' && mat[0][2]) == 'O')){
                    //tutti = true;
                    printf("hai vinto", tutti);
            }

        }
    }
    printf("gioco terminato senza vincere");





}