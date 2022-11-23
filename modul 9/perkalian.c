#include<stdio.h>

int main()
{
int baris1, kolom1,baris2, kolom2,i,j,k,l,m,n,sum;
int matriks1 [100][100],matriks2[100][100], hasil[100][100];
printf("\t\t________________________________\n");
printf("\t\t||  NAMA = AQSHAL BIN ICHSAN  ||\n");
printf("\t\t||     NIM = 210204501012     ||\n");
printf("\t\t||       KELAS = PTE 01       ||\n");
printf("\t\t||____________________________||\n\n");
printf("===============================================================\n\n");
printf("+++++++++++++PROGRAM PERKALIAN MATRIX+++++++++++++\n\n");
printf("========MATRIKS A========\n\n");
printf("MASUKKAN JUMLAH BARIS = "); scanf("%d", &baris1);
printf("MASUKKAN JUMLAH KOLOM = "); scanf("%d", &kolom1);

printf("\n\n========MATRIKS B========\n\n");
printf("MASUKKAN JUMLAH BARIS = "); scanf("%d", &baris2);
printf("MASUKKAN JUMLAH KOLOM = "); scanf("%d", &kolom2);



printf("\n=========================================================\n");
if (kolom1 == baris2)
{  
    printf("\nMASUKKAN ELEMEN MATRIKS A\n"); 
    for(i = 0 ; i < baris1; i++)
    {
        for(j = 0; j < kolom1; j++)
        {
            printf("MATRIKS A [%d] [%d] = ",i+1,j+1); scanf("%d", &matriks1[i][j]);
        }  
    }

    printf("\nMASUKKAN ELEMEN MATRIKS B\n"); 
    for(i = 0 ; i < baris2; i++)
    {
        for(j = 0; j < kolom2; j++)
        {
            printf("MATRIKS B [%d] [%d] = ",i+1,j+1); scanf("%d", &matriks2[i][j]);
        }  
    }

    //PERKALIAN MATRIKS 1 DAN 2

    for (i = 0; i < kolom1; i++)
    {
        for(j = 0; j < baris1; j++)
        {
          for (k = 0; k < kolom2; k++)
                {
                    for (l=0;l<baris2;l++)
                    {
                        m = 0;
                        for (n=0; n<baris2;n++){
                            m = m + matriks1[i][n]*matriks2[n][j];
                        }
                        hasil[i][j]=m;
                    }
                }
        }      
    }
    printf("\nHASIL PERKALIAN MATRIKS A DAN B\n");
    for (i = 0; i < kolom1; i++)
    {
        for(j = 0; j <baris2; j++)
        {
            printf("%d\t",hasil[i][j]);
        }
        printf("\n");
    }
}
else{
    printf("KOLOM MATRIKS A DAN BARIS MATRIKS B HARUS SAMA!!!");
}

return 0;
}
