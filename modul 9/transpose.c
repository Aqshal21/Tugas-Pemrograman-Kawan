#include<stdio.h>

int main()
{
int baris, kolom,i,j;
int matriks1 [30][30], k[30][30];
printf("\t\t________________________________\n");
printf("\t\t||  NAMA = AQSHAL BIN ICHSAN  ||\n");
printf("\t\t||     NIM = 210204501012     ||\n");
printf("\t\t||       KELAS = PTE 01       ||\n");
printf("\t\t||____________________________||\n\n");
printf("===============================================================\n\n");
printf("+++++++++++++PROGRAM TRANSPOSE MATRIX+++++++++++++\n\n");
printf("========MATRIKS========\n\n");
printf("MASUKKAN JUMLAH BARIS = "); scanf("%d", &baris);
printf("MASUKKAN JUMLAH KOLOM = "); scanf("%d", &kolom);

printf("\nMASUKKAN ELEMEN MATRIKS \n"); 
    for(i = 0 ; i < baris; i++)
    {
        for(j = 0; j < kolom; j++)
        {
            printf("MATRIKS A [%d] [%d] = ",i+1,j+1); scanf("%d", &matriks1[i][j]);
        }  
    }

printf("\n=========================================================\n\n");

//PERBANDINGAN SEBELUM DAN SESUDAH TRANSPOSE

printf("SEBELUM TRANSPOSE\n");
for(i = 0; i < baris; i++)
{
    for(j = 0; j < kolom; j++)
    {
        printf("%d\t", matriks1[i][j]);
    }
    printf("\n");
}

printf("\n=========================================================\n\n");

//proses transpose
for(i = 0; i < baris; i++)
{
    for(j = 0; j < kolom; j++)
    {
        k[j][i]=matriks1[i][j];
    }
}

printf("SETELAH TRANSPOSE\n");

for(i = 0; i < kolom; i++)
{
    for(j = 0; j < baris; j++)
    {
        printf("%d\t",  k[i][j]);
    }
    printf("\n");
}


return 0;
}
