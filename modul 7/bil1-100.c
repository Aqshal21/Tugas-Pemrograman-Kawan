#include <stdio.h>

int main (){
    printf("\t\t________________________________\n");
    printf("\t\t||  NAMA = AQSHAL BIN ICHSAN  ||\n");
    printf("\t\t||     NIM = 210204501012     ||\n");
    printf("\t\t||       KELAS = PTE 01       ||\n");
    printf("\t\t||____________________________||\n\n");
    printf("===============================================================\n\n");
     printf("+++++++++++++PROGRAM DO WHILE BILANGAN GENAP+++++++++++++\n\n");


    int a, b;
    
    printf("MASUKKAN BATAS AWAL = "); scanf("%d", &a);
    printf("MASUKKAN BATAS AKHIR = "); scanf("%d", &b);

    do {
        if (a % 2 == 0 ){
            printf("%d ",a);
        }
    a++;
    }

    while (a<=b);

return 0;
}