#include<stdio.h>
#include<stdlib.h>


void matriks(int a[4][4], int b[4], int hasil[4]){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            hasil[i] +=  a[i][j] * b[j];
        }
    }
}

int main(){
    int a[4][4], b[4], hasil[4] = {0};

    printf("Matriks A (4 x 4)\n");
    for(int i = 0; i < 4; i++){
        scanf("%d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3]);
    }

    printf("Matriks B(4 x 1)\n");
    scanf("%d %d %d %d", &b[0], &b[1], &b[2], &b[3]);

    matriks(a, b, hasil);

    printf("A x B\n");
    for(int i = 0; i < 4; i++){
        printf("%d\n", hasil[i]);
    }

    return 0;
}