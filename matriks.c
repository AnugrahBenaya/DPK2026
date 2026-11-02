#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void matriks(int a[4][4], int b[4], int hasil[4]){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            hasil[i] +=  a[i][j] * b[j];
        }
    }
}

int main(){
    int a[4][4], b[4], hasil[4] = {0};

    srand(time(NULL));
    printf("Matriks A (4 x 4)\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            a[i][j] = rand() % 10;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Matriks B(4 x 1)\n");
    for(int i = 0; i < 4; i++){
        b[i] = rand() % 10;
        printf("%d\n", b[i]);
    }

    matriks(a, b, hasil);

    printf("A x B\n");
    for(int i = 0; i < 4; i++){
        printf("%d\n", hasil[i]);
    }

    return 0;
}
