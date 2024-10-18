#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define ROW 3
#define COL 3

int main() {
    char matrice[ROW][COL];

    bool tutti = true;
    for(int i=0;i<ROW;i++) {
        for (int j = 0; j <COL; ++j) {
            scanf("%s", &matrice[i][j]);
            for (int i = 0; i < ROW; ++i) {
                for (int j = 0; j < COL; ++j) {
                    if(matrice[i][j] != 'X' || 'O' ){
                        tutti = false;
                        break;
                    }
                }
            }

        }
    }




}
