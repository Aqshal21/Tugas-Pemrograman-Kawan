#include <stdio.h>

int main ()
{
printf("\t\t________________________________\n");
printf("\t\t||  NAMA = AQSHAL BIN ICHSAN  ||\n");
printf("\t\t||     NIM = 210204501012     ||\n");
printf("\t\t||       KELAS = PTE 01       ||\n");
printf("\t\t||____________________________||\n\n");
printf("===============================================================\n\n");
printf("+++++++++++++PROGRAM POLA BINTANG+++++++++++++\n\n");

 int input;
 printf("MASUKKAN JUMLAH BINTANG = "); scanf("%d",&input);

int i = 1;
while (i <= input-2){
    int j = 1;
    while(j <= i)
    {
        printf(" ");
        j++;
    }
    int a = 1;
    while(a <= input)
    {
        printf("*");
        a++;
    }
    i++;
    printf("\n");
}

i = 1;
while (i <= input - 3)
{
    int l = input - 3;
    while (l >= i)
    {
        printf(" ");
        l--;
    }
    int b = 1;
    while (b <= input)
    {
        printf("*");
        b++;
    }
    i++;
    printf("\n");
}

return 0;
}