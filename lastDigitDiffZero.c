/*Tìm chữ số khác không cuối cùng của n!(giai thừa)
Gợi ý:

n có thể rất lớn, nên ko thể tính được n! theo cách thông thường
Hãy chỉ lưu trữ vài chữ số khác 0 cuối cùng của n là được
*/
#include <stdio.h>
#include <stdlib.h>
int lastDigitDiffZero(int n)
{
    int value=1;
    for(int i=1; i<=n; i++){
        value*=i;
        while(value%10==0){
            value/=10;
        }
        value=value%100; //Chỉ lấy 2 chữ số cuối, để giá trị value k bị quá lớn dẫn đến lỗi
    }
    //kiểm tra lại
    while(value%10==0){
        value/=10;
    }
    return value%10;

}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",lastDigitDiffZero(n));
    return 0;
}
