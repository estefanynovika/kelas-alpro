#include <stdio.h>
int main(){
    int a,b,r;
    printf("masukan angka pertama: ");
    scanf("%d",&a);
    printf("masukan angka kedua : ");
    scanf("%d",&b);
    int m = a;
    int n = b;
    while (n != 0)
    {
    r = m%n;
    m = n;
    n = r;
    }
    printf("GCD dari %d dan %d adalah =%d",a,b,m);
    return 0;
}