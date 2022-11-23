#include <stdio.h>

int deret_fibonacchi(int a)
{
    if ((a==0)||(a==1)) //basis
    {
        return a;
    }
    else //rekrusif
    {
        return deret_fibonacchi(a-1)+deret_fibonacchi(a-2);
    }
}

int main()
{
 int a,b,c=0;
 printf("MASUKKAN BATAS DERET FIBONACCHI : "); scanf("%d",&a);
 for (b=1; b<=a;b++)
 {
    printf("\nDERET FIBONACHI KE-%d :%d",b,deret_fibonacchi(c));
    c++;
 }
 printf("\n");
 return 0;
}

