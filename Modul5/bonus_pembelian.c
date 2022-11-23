#include <stdio.h>

int main(){
    int total,diskon,akhir;

    printf("\t\t________________________________\n");
    printf("\t\t||  NAMA = AQSHAL BIN ICHSAN  ||\n");
    printf("\t\t||     NIM = 210204501012     ||\n");
    printf("\t\t||       KELAS = PTE 01       ||\n");
    printf("\t\t||____________________________||\n\n");
    printf("===============================================================\n\n");

    printf("MASUKKAN HARGA TOTAL PEMBELIAN ANDA = "); scanf("%d",&total);
    
    if (total>=100000){
        diskon = 10*total/100;
        akhir = total - diskon;
        printf("ANDA MENDAPATKAN DISKON SEBESAR 10 PERSEN\n");
        printf("TOTAL PEMBAYARAN ANDA = %d\n",akhir);
    }

    else if(total<100000 && total>=50000){
        printf("ANDA MENDAPATKAN PIRING CANTIK!!!");
    }

    else if(total<50000 && total>=10000){
        printf("ANDA MENDAPATKAN GELAS CANTIK!!!");
    }

    else if(total<10000){
        printf("SAYANG SEKALI ANDA TIDAK MENDAPATKAN BONUS");
    }


    return 0;
}