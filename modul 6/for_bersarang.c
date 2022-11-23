#include <stdio.h>

int main(){
   printf("\t\t________________________________\n");
    printf("\t\t||  NAMA = AQSHAL BIN ICHSAN  ||\n");
    printf("\t\t||     NIM = 210204501012     ||\n");
    printf("\t\t||       KELAS = PTE 01       ||\n");
    printf("\t\t||____________________________||\n\n");
    printf("===============================================================\n\n");
    
   
    printf("+++++++++++++PROGRAM FOR LOOP BERSARANG (NESTED LOOP)+++++++++++++\n\n");
 for (int row = 1; row<=5; row++)
 {
    printf("%d ", row);
    int a = row;
    int b = 4;

    for (int col =1  ; col<row; col++)
    {
        a += b;
        printf("%d ", a);
        b--;
    }
    printf("\n");
 }
    return 0 ;
}


