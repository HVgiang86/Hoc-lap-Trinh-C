#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long numberZeroDigits(long long n)
{
    long long count=0;
    //Duyet cac so chia het cho 5. So luong chu so 0 tan cung bang so luong nhan tu 5
    for(long long i = 5; i <= n; i+=5){
        long long x=i;
        while(x%5==0){
            count++;
            x/=5;
        }
    }
    return count;
}
int main(){
    long long n;
    scanf("%d",&n);
    printf("%d",numberZeroDigits(n));
}
