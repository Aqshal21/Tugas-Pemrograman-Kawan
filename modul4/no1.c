#include <stdio.h>

int main() {

    printf("\t\t________________________________\n");
    printf("\t\t||  NAMA = AQSHAL BIN ICHSAN  ||\n");
    printf("\t\t||     NIM = 210204501012     ||\n");
    printf("\t\t||       KELAS = PTE 01       ||\n");
    printf("\t\t||____________________________||\n\n");
    printf("===============================================================\n\n");
     printf("+++++++++++++PROGRAM IF BILANGAN GANJIL+++++++++++++\n\n");

     int a,b;

     printf("MASUKKAN BILANGAN GANJIL = "); scanf("%d", &a);

     if  (a % 2){
        printf("BILANGAN GANJIL");
     }

     else {
        printf("BUKAN BILANGAN GANJIL");
     }
    return 0;

}



