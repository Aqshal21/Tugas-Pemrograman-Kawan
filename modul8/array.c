#include <stdio.h>

int main(){
printf("\t\t________________________________\n");
printf("\t\t||  NAMA = AQSHAL BIN ICHSAN  ||\n");
printf("\t\t||     NIM = 210204501012     ||\n");
printf("\t\t||       KELAS = PTE 01       ||\n");
printf("\t\t||____________________________||\n\n");
printf("===============================================================\n\n");
printf("+++++++++++++ARRAY BILANGAN PRIMA+++++++++++++\n\n");
    int n[20];
    printf("INPUT BILANGAN DARI 1 - 20  \n");
    for(int i = 1; i<=20 ; i++){
       
        printf("BILANGAN %d = ", i);
        scanf("%d",&n[i]);
    }

    printf("BILANGAN PRIMA YANG ANDA MASUKKAN = ");
    for(int i = 1; i <20; i++){
        int b = 0;
        for(int a = 2; a < n[i]; a++){
            if(n[i] % a == 0){
                b++;
            }
        }
        if(b==0 && n[i] != 1){
            printf("%d ", n[i]);
        }
    }
return 0;
}