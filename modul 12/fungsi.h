#include<stdio.h>

int l_bk (int a, int b)
{
    int hasil = a*b/2;
    return hasil;
}

int bilangan_terbesar(int a, int b, int c)
{
   int maks;
   if (a>b&& a>c){
    maks = a;
   }
   else if(b>a&&b>c){
    maks=b;
   }
   else maks = c;
   return maks;
}
