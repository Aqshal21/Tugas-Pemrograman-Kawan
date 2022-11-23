#include <stdio.h>

int main (){
    printf("\t\t________________________________\n");
    printf("\t\t||  NAMA = AQSHAL BIN ICHSAN  ||\n");
    printf("\t\t||     NIM = 210204501012     ||\n");
    printf("\t\t||       KELAS = PTE 01       ||\n");
    printf("\t\t||____________________________||\n\n");
    printf("===============================================================\n\n");
    printf("+++++++++++++PROGRAM POLA BINTANG+++++++++++++\n\n");

    int a, b , c, input;
    printf("MASUKKAN JUMLAH BINTANG = "); scanf("%d",&input);
    a = 1;
    while (a<=input){
        b = 1;
         while(b<=a)
        {
            printf(" ");
            b++;
        }
        c = 1;
        while (c<=input)
        {
            printf("*");
            c++;
        }
    a++;
    printf("\n");
   }

    return 0;
}

