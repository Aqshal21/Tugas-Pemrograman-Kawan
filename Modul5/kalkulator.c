#include <stdio.h>
 int main(){
    printf("\t\t________________________________\n");
    printf("\t\t||  NAMA = AQSHAL BIN ICHSAN  ||\n");
    printf("\t\t||     NIM = 210204501012     ||\n");
    printf("\t\t||       KELAS = PTE 01       ||\n");
    printf("\t\t||____________________________||\n\n");
    printf("===============================================================\n\n");
    printf("==========PROGRAM KALKULATOR SEDERHANA==========\n\n");
    
    double a,b,hasil;
    char operator;
    printf("MASUKKAN BILANGAN PERTAMA = "); scanf(" %lf",&a);
    printf("MASUKKAN OPERATOR (+,-,x,:) = "); scanf(" %c",&operator);
    printf("MASUKKAN BILANGAN KEDUA = "); scanf(" %lf",&b);

    switch (operator)
    {
    case '+' :
        hasil = a+b;
        printf("HASIL PENJUMLAHAN = %lf",hasil);
        break;
    
    case '-' :
        hasil = a-b;
        printf("HASIL PENGURANGAN = %lf",hasil);
        break;
    
    case 'x' :
        hasil = a*b;
        printf("HASIL PERKALIAN = %lf",hasil);
        break;

    case ':' :
        if(b != 0){
            hasil = a/b;
            printf("HASIL PEMBAGIAN = %lf",hasil);
        }
        else{
            printf("TIDAK BISA DIBAGI DENGAN ANGKA NOL");
        }
        break;

    default:
        printf("OPERATOR YANG ANDA MASUKKAN SALAH");
        break;
    }

    return 0;
 }