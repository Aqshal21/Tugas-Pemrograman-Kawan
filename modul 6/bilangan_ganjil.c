#include <stdio.h>

int main(){
    printf("\t\t________________________________\n");
    printf("\t\t||  NAMA = AQSHAL BIN ICHSAN  ||\n");
    printf("\t\t||     NIM = 210204501012     ||\n");
    printf("\t\t||       KELAS = PTE 01       ||\n");
    printf("\t\t||____________________________||\n\n");
    printf("===============================================================\n\n");
    
    printf("+++++++++++++PROGRAM FOR LOOP DERET BILANGAN GANJIL+++++++++++++\n\n");

    int a, batas_a,batas_b;

    printf("BATAS AWAL = "); scanf("%d",&batas_a);
    printf("BATAS AKHIR = "); scanf("%d",&batas_b);
    for (a=batas_a;a<=batas_b;a=a+2){
        printf("%d ",a);
    }

    return 0;
}