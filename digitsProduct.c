#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int digitsProduct(int product)
{
    if(product==1){return 1;}
    if(product==0){return 10;}
    int answer=0;
    int X=0;
        for(int i=9;i>=2;i--){

            while(product%i==0)
            {
                X=X*10+i;
                product/=i;
            }
        }
    while(X>0){
        answer=answer*10+X%10;
        X/=10;
    }
     printf("%d\n",answer);
    if(product==1){
        return answer;
    }
    else{
        return -1;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    puts("\n");
    printf("%d\n",digitsProduct(n));
    puts("Quyen Hap");
    return 0;
}
