#include<stdio.h>

int main()
{
int matriks1 [10][10], matriks2[10][10], baris1, kolom1,baris2, kolom2, hasil[10][10],i,j;
printf("\t\t________________________________\n");
printf("\t\t||  NAMA = AQSHAL BIN ICHSAN  ||\n");
printf("\t\t||     NIM = 210204501012     ||\n");
printf("\t\t||       KELAS = PTE 01       ||\n");
printf("\t\t||____________________________||\n\n");
printf("===============================================================\n\n");
printf("+++++++++++++PROGRAM PENJUMLAHAN MATRIX+++++++++++++\n\n");
printf("========MATRIKS A========\n\n");
printf("MASUKKAN JUMLAH BARIS = "); scanf("%d", &baris1);
printf("MASUKKAN JUMLAH KOLOM = "); scanf("%d", &kolom1);

printf("\nMASUKKAN ELEMEN MATRIKS A\n"); 
    for(i = 0 ; i < baris1; i++)
    {
        for(j = 0; j < kolom1; j++)
        {
            printf("MATRIKS A [%d] [%d] = ",i+1,j+1); scanf("%d", &matriks1[i][j]);
        }  
    }

printf("\n=========================================================\n\n");

printf("========MATRIKS B========\n\n");
printf("MASUKKAN JUMLAH BARIS = "); scanf("%d", &baris2);
printf("MASUKKAN JUMLAH KOLOM = "); scanf("%d", &kolom2);
printf("\nMASUKKAN ELEMEN MATRIKS B\n"); 
    for(i = 0 ; i < baris2; i++)
    {
        for(j = 0; j < kolom2; j++)
        {
            printf("MATRIKS B [%d] [%d] = ",i+1,j+1); scanf("%d", &matriks2[i][j]);
        }  
    }


//PEMJUMLAHAN MATRIKS 1 DAN 2

if ((baris1==baris2)&&(kolom1==kolom2))
{
    printf("\nHASIL PENJUMLAHAN MATRIKS\n");
    for (i = 0; i < baris1; i++)
    {
        for(j = 0; j < kolom2; j++)
        {
        hasil[i][j]=matriks1[i][j]+matriks2[i][j];
        printf("%d\t",hasil[i][j]);
        }
        printf("\n");
    }
}
else{
    printf("BARIS DAN KOLOM YANG ANDA MASUKKAN SALAH");
}

return 0;
}
