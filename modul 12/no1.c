#include <stdio.h>
#include "fungsi.h"

int main ()
  
{
printf("\t\t________________________________\n");
printf("\t\t||  NAMA = AQSHAL BIN ICHSAN  ||\n");
printf("\t\t||     NIM = 210204501012     ||\n");
printf("\t\t||       KELAS = PTE 01       ||\n");
printf("\t\t||____________________________||\n\n");
printf("===============================================================\n\n");
printf("+++++++++++++PROGRAM FUNGSI (LUAS BELAH KETUPAT)+++++++++++++\n\n");
int dig1,dig2;
printf("MASUKKAN PANJANG DIAGONAL PERTAMA :"); scanf("%d",&dig1);
printf("MASUKKAN PANJANG DIAGONAL KEDUA :"); scanf("%d",&dig2);
printf("LUAS BELAH KETUPAT ADALAH : %d",l_bk(dig1,dig1));
return 0;
}