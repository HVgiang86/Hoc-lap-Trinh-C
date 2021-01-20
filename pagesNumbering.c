/*
Tiếng Việt
Cho biết số trang sách của 1 quyển sách

Hãy tìm số lượng các chữ số dùng để đánh số trang của quyển sách đó

Ví dụ:

Với n = 11, thì kết quả pagesNumbering(n) = 13.
13 chữ số được sử dụng là: 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 0, 1, 1
Đầu vào/đầu ra:

[Thời gian chạy] 0.5 giây
[Đầu vào] integer n
Điều kiện:
1 ≤ n ≤ 10^8.
[output] integer
Gợi ý:

Do n có thể rất lớn, nên ko thể dùng vòng lặp để tính số các chữ số
Hãy tính số các chữ số theo công thức toán học (ví dụ như có bao nhiêu số có 1 chữ số, 2 chữ số, 3 chữ số, ...)
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pagesNumbering(int n)
{
    int m=n;
    int value=0;
    int i=1;
    if(n<10){
        return n;
    }
    //dem so chu so cua n
    int count=0;
    while(n>0){
        count++;
        n/=10;
    }
    printf("So chu so cua n: %d\n",count);
    for(int i=1; i<count; i++){
        value=value+i*9*(int)pow(10,i-1);
    }
    printf("%d\n",value);
    value=value+count*(m-(int)pow(10,count-1)+1);
    return value;
}
int main(){
    int n;
    scanf("%d",&n);
    puts("");
    printf("%d",pagesNumbering(n));
    return 0;
}
