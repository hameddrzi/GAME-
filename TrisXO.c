#include <stdio.h>

#define ROW 3
#define COL 3

int main() {
    char mat[ROW][COL];

    for (int i = 0; i < ROW; ++i) {
        for (int j = 0; j < COL; ++j) {
            scanf("%c", &mat[i][j]);
        }
    }

    for (int i = 0; i < ROW; ++i) {
        if(mat[i][0] == mat[i][1] && mat[i][1] == mat[i][2]){
                if(mat[i][0] == 'X') {
                    printf("X\n");
                    return 0;
                }else if(mat[i][0] == 'O') {
                    printf("O\n");
                    return 0;
                }
        }

    }
    for (int j = 0; j < ROW; ++j) {

        if(mat[0][j] == mat[1][j] && mat[1][j] == mat[2][j]) {
                if (mat[0][j] == 'X') {
                    printf("X\n");
                    return 0;
                } else if (mat[0][j] == 'O') {
                    printf("O\n");
                    return 0;
                }
        }

    }

    if(mat[0][0] == mat[1][1] && mat[1][1] == mat[2][2]) {
        if (mat[0][0] == 'X') {
            printf("X\n");
            return 0;
        } else if (mat[0][0] == 'O') {
            printf("O\n");
            return 0;
        }
    }



    if(mat[0][2] == mat[1][1] && mat[1][1] == mat[2][0]) {
        if (mat[0][2] == 'X') {
            printf("X\n");
            return 0;
        } else if (mat[0][2] == 'O') {
            printf("O\n");
            return 0;
        }
    }


    printf("-\n");
    return 0;
    
}    