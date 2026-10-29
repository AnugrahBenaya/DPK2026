//Array 2 dimensi

#include<stdio.h>
#include<stdlib.h>

char c[3][3] = {{'_','_','_'}, {'_', '_', '_'}, {'_','_','_'}};

int main(int argc, char *argv[]){
    int giliran = 1, pemenang = -1, baris, kolom;

    for(int i = 0; i < 9; i++){

        for(int b = 0; b < 3; b++){         //Cetak Layout Tic Tac Toe
            for(int k = 0; k < 3; k++){
                printf("%c ", c[b][k]);
            }
            printf("\n");
        }

        if(giliran == 1){ //Player A input
            printf("Player A(X)\n");
            printf("Baris : ");
            scanf("%d", &baris);
            printf("Kolom : ");
            scanf("%d", &kolom);
            if(c[baris][kolom] == '_'){
                c[baris][kolom] = 'X';
                giliran = 0;
            }
            else i--; //Jika baris dan kolom sudah terisi

            //Kondisi Player A menang
            if((c[0][0]=='X' && c[0][1]=='X' && c[0][2]=='X') ||
            (c[1][0]=='X' && c[1][1]=='X' && c[1][2]=='X') ||
            (c[2][0]=='X' && c[2][1]=='X' && c[2][2]=='X') ||
            // Cek Vertikal (Kolom)
            (c[0][0]=='X' && c[1][0]=='X' && c[2][0]=='X') ||
            (c[0][1]=='X' && c[1][1]=='X' && c[2][1]=='X') ||
            (c[0][2]=='X' && c[1][2]=='X' && c[2][2]=='X') ||
            // Cek Diagonal
            (c[0][0]=='X' && c[1][1]=='X' && c[2][2]=='X') ||
            (c[0][2]=='X' && c[1][1]=='X' && c[2][0]=='X')) {    
                pemenang = 1;
                break; // Langsung hentikan game karena Player A menang
            }
        }
    
        else{
            printf("Player B(O)\n"); //Player B input
            printf("Baris : ");
            scanf("%d", &baris);
            printf("Kolom : ");
            scanf("%d", &kolom);
            if(c[baris][kolom] == '_'){
                c[baris][kolom] = 'O';
                giliran = 1;
            }
            else i--; //Jika baris dan kolom sudah terisi

            //Kondisi Player B menang
            if((c[0][0]=='O' && c[0][1]=='O' && c[0][2]=='O') ||
            (c[1][0]=='O' && c[1][1]=='O' && c[1][2]=='O') ||
            (c[2][0]=='O' && c[2][1]=='O' && c[2][2]=='O') ||
            // Cek Vertikal (Kolom)
            (c[0][0]=='O' && c[1][0]=='O' && c[2][0]=='O') ||
            (c[0][1]=='O' && c[1][1]=='O' && c[2][1]=='O') ||
            (c[0][2]=='O' && c[1][2]=='O' && c[2][2]=='O') || 
            // Cek Diagonal
            (c[0][0]=='O' && c[1][1]=='O' && c[2][2]=='O') ||
            (c[0][2]=='O' && c[1][1]=='O' && c[2][0]=='O')) {                
                pemenang = 2;
                break; // Langsung hentikan game karena Player B menang
            }
        }
    }
    for(int b = 0; b < 3; b++){         //Cetak Layout Tic Tac Toe
        for(int k = 0; k < 3; k++){
            printf("%c ", c[b][k]);
        }
        printf("\n");
    }

    if(pemenang == 1) printf("Player A menang");
    else if(pemenang == 2) printf("Player B Menang");
    else printf("Seri");
    
    return 0;
}
