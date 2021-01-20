/*

Chúng ta có một số nguyên dương n.
Mỗi một lần ta thay thế n bằng tổng các thừa số nguyên tố của nó
(ví dụ 12=2*2*3 thì 12 sẽ được thay thế bằng số 2+2+3=7)

Chúng ta áp dụng phép toán này vào số hiện tại cho đến khi kết quả thu được giống vs số hiện tại

Cho một số tự nhiên, hãy tìm kết quả cuối cùng của phép toán trên.

Ví dụ:
Với n = 24, kết quả factorSum(n) = 5.
24 -> (2 + 2 + 2 + 3) = 9 -> (3 + 3) = 6 -> (2 + 3) = 5 -> 5.
Vì vậy kết quả trong trường hợp n = 24 là 5.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
int solve(int n)
{
    int i=2;
    int sum=0;
    while(n>1){
        while(n%i==0){
            sum+=i;
             n/=i;
        }
        i++;
    }
    return sum;
}
int factorSum(int n){
    while(n!=solve(n)){
        n=solve(n);
    }
    return n;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",factorSum(n));
}

