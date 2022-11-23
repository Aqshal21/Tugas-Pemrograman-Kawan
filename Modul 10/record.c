#include <stdio.h>


struct mahasiswa
{
 char nama[100];
 char nim [100];
 int Nilai_kuis;
 int Nilai_uas;
 int Nilai_uts;
 int Nilai_akhir;
}

data[1000];

int main()
{
printf("\t\t________________________________\n");
printf("\t\t||  NAMA = AQSHAL BIN ICHSAN  ||\n");
printf("\t\t||     NIM = 210204501012     ||\n");
printf("\t\t||       KELAS = PTE 01       ||\n");
printf("\t\t||____________________________||\n\n");
printf("===============================================================\n\n");
printf("+++++++++++++PROGRAM RECORD+++++++++++++\n\n");

for(int i=0;i<1;i++)
{
printf("NAMA MAHASISWA          : ");fgets(data[i].nama,100,stdin);
printf("NIM MAHASISWA           : ");scanf("%s",&data[i].nim);
printf("NILAI KUIS MAHASISWA    : ");scanf("%d",&data[i].Nilai_kuis);
printf("NILAI UTS MAHASISWA     : ");scanf("%d",&data[i].Nilai_uts);
printf("NILAI UAS MAHASISWA     : ");scanf("%d",&data[i].Nilai_uas);
data[i].Nilai_akhir = (20*data[i].Nilai_kuis/100)+(30*data[i].Nilai_uts/100)+(50*data[i].Nilai_uas/100);
printf("\n");
 }


printf("INFO DATA MAHASISWA\n\n");
for(int i=0;i<1;i++)
{
printf("NAMA MAHASISWA          : %s",data[i].nama);
printf("NIM MAHASISWA           : %s\n",data[i].nim);
printf("NILAI KUIS MAHASISWA    : %d\n",data[i].Nilai_kuis);
printf("NILAI UTS MAHASISWA     : %d\n",data[i].Nilai_uts);
printf("NILAI UAS MAHASISWA     : %d\n",data[i].Nilai_uas);
printf("NILAI AKHIR MAHASISWA   : %d\n",data[i].Nilai_akhir);
printf("\n");
 }

return 0;

}
