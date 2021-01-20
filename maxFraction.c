/*
Đề Bài:
Cho một danh sách các phân số, hãy tìm chỉ số của phân số lớn nhất (đếm từ 0)

Giả định rằng không có các phân số bằng nhau trong tập đầu vào

Ví dụ:
Với numerators = [5, 2, 5] và denominators = [6, 3, 4], thì kết quả maxFraction(numerators, denominators) = 2.
5/4 là phân số lớn nhất, có chỉ số là 2.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maxFraction(int numerators[100], int denominators[100],int n,int m)
{
    int TSmax,MSmax;
    TSmax=numerators[0];
    MSmax=denominators[0];
    int chiso=0;
    int size1,size2;
    size1=n;
    size2=m;
    for(int i=1; i<size1; i++){
            if((numerators[i]*MSmax-denominators[i]*TSmax)>0){
                TSmax=numerators[i];
                MSmax=denominators[i];
                chiso=i;
            }
    }
    return chiso;
}
int main(){
    int TS[100];
    int MS[100];
    int n,m;

    scanf("%d %d",&n,&m);
    for(int i=0; i<n; i++){
        scanf("%d",&TS[i]);
    }
    for(int i=0; i<m; i++){
        scanf("%d",&MS[i]);
    }

    puts("\n");
    printf("%d",maxFraction(TS,MS,n,m));
    puts("\n");
    puts("Yeu <3");

    return 0;
}
