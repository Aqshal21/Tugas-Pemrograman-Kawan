#include <stdio.h>

int main()
{
    int opsi,golongan,kawin,anak,tunjangan,hotel,hari;
    char nama[100];
    printf("PILIHAN MENU");
    printf("\n1. MENGHITUNG GAJI"); 
    printf("\n2. BOKING KAMAR HOTEL"); 
    printf("\n3. KELUAR"); 
    printf("\n\nMASUKKAN PILIHAN ANDA : "); scanf("%d",&opsi);
    
    //Program Menghitung Gaji
    if (opsi == 1)
    {
        printf("==============================================\n");
        printf("MASUKKAN NAMA KARYAWAN: "); fflush(stdin);gets(nama);
        printf("MASUKKAN GOLONGAN (1/2/3): "); scanf("%d", &golongan);
        printf("==============================================\n");
        printf("MASUKKAN STATUS PERNIKAHAN \n1.MENIKAH \n2.BELUM MENIKAH \nMASUKKAN PILIHAN ANDA: "); scanf("%d",&kawin);
        if (kawin == 1)
        {
        printf("MASUKKAN JUMLAH ANAK : "); scanf("%d",&anak);
        tunjangan = (jabatan(golongan)+50*jabatan(golongan)/100)+(anak*(25*jabatan(golongan)/100));
        printf("==============================================\n");
        printf("\n               INFO KARYAWAN                   ");
        printf("\n\nNAMA : %s",nama);
        cetakdata(tunjangan,kawin,golongan);
        }
        else
        {
        tunjangan = 0;
        printf("==============================================\n");
        printf("\n               INFO KARYAWAN                   ");
        printf("\nNAMA : %s",nama);
         cetakdata(tunjangan,kawin,golongan);
        }
    }
    else if(opsi==2)
    {
        printf("==============================================\n");
        printf("MASUKKAN NAMA TAMU : "); fflush(stdin);gets(nama);
        printf("==============================================\n");
        printf("MASUKKAN JENIS KAMAR HOTEL: \n1.SINGLE ROOM \n2.DOUBLE ROOM \n3.DELUXE ROOM \n4.SUITE ROOM \nMASUKKAN PILIHAN : "); scanf("%d",&hotel);
        printf("LAMA WAKTU MENGINAP (HARI) : "); scanf("%d",&hari);
        printf("==============================================\n");
        printf("                  PEMBAYARAN                    ");
        printf("\nNAMA TAMU     : %s", nama);
        printf("\nTOTAL BIAYA   : Rp.%d",biaya(hotel,hari));
        printf("\n==============================================");

    }
}
 int jabatan(int i)
    {
        int gaji_pokok;
        if (i==1)
            gaji_pokok = 2000000;
        else if (i==2)
            gaji_pokok = 3000000;
        else if (i==3)
            gaji_pokok = 4000000;
        return gaji_pokok;
    }

int cetakdata (int tunjangan, int kawin, int golongan)
    {
        if (kawin==1)
        {
            printf("\nSTATUS : SUDAH MENIKAH");
            printf("\nTUNJANGAN : Rp.%d",tunjangan);
            printf("\nTOTAL GAJI : Rp.%d",jabatan(golongan)+tunjangan);
        }
        else
        {
            printf("\nSTATUS : BELUM MENIKAH");
            printf("\nTUNJANGAN : Rp.%d",tunjangan);
            printf("\nTOTAL GAJI : Rp.%d",jabatan(golongan)+tunjangan);

        }
    }

int biaya (int x, int y)
{
    if(x==1)
        return y*650000;
    else if (x==2)
        return y*900000;
    else if (x==3)
        return y*12000000;
    else
        return y*1500000;
}

