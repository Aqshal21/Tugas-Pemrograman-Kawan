#include <stdio.h>

int main(){

    int jumlah,jumlah_barang,kode_barang,harga, total_pembelian, pembayaran, kembalian;
    char lanjut;
    
    printf("\t\t============================================================\n");
    printf("\t\t=======||SELAMAT DATANG DI TOKO SEMBAKO KANG AQSHAL||=======\n");
    printf("\t\t=======||     TERSEDIA BERBAGAI MACAM SEMBAKO      ||=======\n");
    printf("\t\t=======||       DENGAN PROMO YANG MENARIK!!!       ||=======\n");
    printf("\t\t============================================================\n\n");
    printf("____________________________________________________________________________________________\n");
    printf("||   KODE BARANG   ||          NAMA BARANG          ||            HARGA BARANG            ||\n");
    printf("||        1        ||         MINYAK GORENG         ||              Rp.14.000             ||\n");
    printf("||        2        ||            TERIGU             ||              Rp.30.000             ||\n");
    printf("||        3        ||        BERAS REFINA 5KG       ||              Rp.90.000             ||\n");
    printf("||        4        ||     INDOMIE COTO MAKASSAR     ||              Rp.5.000              ||\n");
    printf("||        5        ||           GULA PASIR          ||              Rp.20.000             ||\n");
    printf("||        6        ||          TELUR 1 RAK          ||              Rp.44.000             ||\n");
    printf("||_________________||_______________________________||____________________________________||\n\n");

    printf("APAKAH ANDA INGIN MELAKUKAN PEMBELIAN (y = IYA , t = TIDAK) = "); scanf("%c",&lanjut);

if (lanjut =='y'){

printf("MASUKKAN JUMLAH PESANAN = "); scanf("%d",&jumlah_barang);

for(jumlah = 1; jumlah <= jumlah_barang; jumlah++){
    printf("MASUKKAN KODE BARANG = ");scanf("%d",&kode_barang);
    switch (kode_barang)
    {
    case 1 :
        harga = 14000;
        printf("NAMA BARANG : MINYAK GORENG\n");
        printf("HARGA BARANG : RP.14.000\n");

        break;
    case 2 :
    harga = 30000;
        printf("NAMA BARANG : TERIGU\n");
        printf("HARGA BARANG : RP.14.000\n");
        break;
    case 3 :
    harga = 90000;
        printf("NAMA BARANG : BERAS REFINA 5KG\n");
        printf("HARGA BARANG : RP.14.000\n");
        break;  
    case 4 :
    harga = 5000;
        printf("NAMA BARANG : INDOMIE COTO MAKASSAR\n");
        printf("HARGA BARANG : RP.14.000\n");
        break;  
    case 5 :
    harga = 20000;
        printf("NAMA BARANG : GULA PASIR\n");
        printf("HARGA BARANG : RP.14.000\n");
        break;
    case 6 :
    harga = 44000;
        printf("NAMA BARANG : TELUR 1 RAK\n");
        printf("HARGA BARANG : RP.14.000\n");
        break;
    default:
        break;
    }
}

}
else{
        printf("SELAMAT TINGGAL");
}

return 0;
}