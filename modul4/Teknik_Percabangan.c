#include<stdio.h>
#include<conio.h>
int main(){
    
printf("\t\t________________________________\n");
printf("\t\t||  NAMA = AQSHAL BIN ICHSAN  ||\n");
printf("\t\t||     NIM = 210204501012     ||\n");
printf("\t\t||       KELAS = PTE 01       ||\n");
printf("\t\t||____________________________||\n\n");
printf("===============================================================\n\n");
printf("+++++++++++++PROGRAM IF BILANGAN GANJIL+++++++++++++\n\n");

    printf("\n=============PERCABANGAN IF  BILANGAN TERBESAR=============\n\n");
    int nilai1,nilai2,nilai3;
    printf("MMASUKKAN BILANGAN PERTAMA : "); scanf(" %d",&nilai1);
    printf("MMASUKKAN BILANGAN KEDUA : "); scanf(" %d",&nilai2);
    printf("MMASUKKAN BILANGAN KETIGA : "); scanf(" %d",&nilai3);

    if (nilai1>nilai2&&nilai1>nilai3){
        printf("BILANGAN PERTAMA LEBIH BESAR DARI BILANGAN KEDUA DAN KETIGA");
    }
    else if(nilai2>nilai1&&nilai2>nilai3){
        printf("BILANGAN KEDUA LEBIH BESAR DARI BILANGAN PERTAMA DAN KETIGA");
    }
    else if(nilai3>nilai1&&nilai3>nilai2) {
        printf("BILANGAN KETIGA LEBIH BESAR DARI BILANGAN PERTAMA DAN KEDUA");
    }
    else{
        printf("SEMUA BILANGAN NILAINYA SAMA");
    }
    return 0;
}