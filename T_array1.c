//Array 2 dimensi

#include<stdio.h>
#include<stdlib.h>

char c[3][3] = {{'X','O','X'}, {'O', 'X', 'O'}, {'X','O','X'}};

int main(int argc, char *argv[]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%c ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
