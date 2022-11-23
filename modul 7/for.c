#include <stdio.h>

int main()
{
    printf("\t\t________________________________\n");
    printf("\t\t||  NAMA = AQSHAL BIN ICHSAN  ||\n");
    printf("\t\t||     NIM = 210204501012     ||\n");
    printf("\t\t||       KELAS = PTE 01       ||\n");
    printf("\t\t||____________________________||\n\n");
    printf("===============================================================\n\n");
    printf("+++++++++++++PROGRAM POLA BINTANG+++++++++++++\n\n");

   int a,b,c,d;
   
   printf("MASUKKAN JUMLAH BARIS BINTANG \"*****\" = "); scanf("%d",&a);
   for(b = 1; b<=a; b++){
      for(c = 1; c<=b; c++)
      {
         printf(" ");
      }
      for ( d = 1; d<=a; d++)
      { 
         printf("*");
      }

      printf("\n");
   }
   return 0;
}