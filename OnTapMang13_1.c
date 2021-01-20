/*
1, Nhập 2 mảng A và B có n phần tử. Tính mảng C. Biết C = A+B
Ví Dụ: A = { 1,2,3 } B = {0,1,2} C={ 1,3,5 }
2, Nhập mảng A, copy mảng A sang mảng B.
3, Nhập mảng A có n phần tử, In ngược mảng.
VD: A = {1,2,3} => in ra màn hình: 3,2,1
4, Nhập mảng A, in ra phần tử nhỏ nhất, lớn nhất và vị trí của chúng
5, Thêm 1 phần tử vào sau vị trí thứ k của mảng.
6, Xóa 1 phần tử ở vị trí thứ k.
7, Thay đổi giá trị của phần tử tại vị trí thứ k của mảng.
8, Nhập mảng A và B, in ra phần tử lớn nhất của 2 mảng.
9, Nhập mảng A có n phần tử, In ra màn hình mảng B là mảng gồm các phần tử lẻ của A, C là mảng gồm cấc phần tử chẵn của A.
10, Nhập số k, in ra màn hình số lần số k xuất hiện trong mảng.
11, Tìm phần tử nhỏ nhất của mảng, in ra số lượng phần tử đó trong mảng.
12, In ra màn hình số lần xuất hiện của tất cả các phần tử trong mảng.
13*, Nhập vào bậc n của biểu thức: S = x0* x^0 + x1 * x^1 + ... x(n) * x^n. Nhập các giá trị x0,x1,x2,...xn. Tính S.
14*, Sắp xếp mảng theo chiều tăng dần, giảm dần.
15*, Tìm phần tử lớn thứ k của mảng ( k nhập vào tư bàn phím ).
16*, Sắp xếp mảng theo quy tắc: nửa đầu mảng toàn số chẵn, nửa sau toàn số lẻ.
17*,  Nhiều bài quá, làm hết đi rồi tui đưa tiếp :D
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Dem so luong tung phan tu trong mang
/*
int main(){
    int value;
    int A[100];
    int B[100];
    int a;
    int count=0;

    scanf("%d",&a);
    for(int i=0; i<a; i++){
        scanf("%d",&A[i]);
    }

    while(a!=0){
        int k=0;
        count=0;
        for(int i=0; i<a; i++){
            if(A[i]==A[0]){
                count++;
            }
            else{
                B[k]=A[i];
                k++;
            }
        }
        printf("So luong phan tu %d la: %d\n",A[0],count);
        a=k;
        for(int i=0; i<a; i++){
            A[i]=B[i];
        }
    }

    return 0;
}*/
//Xoa phan tu o vi tri k
/*
int maxof(int a[100], int n){
    int max;
    max=a[0];
    for(int i=0; i<n; i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int minof(int a[100], int n){
    int min;
    min=a[0];
    for(int i=0; i<n; i++){
        if(a[i]<min){min=a[i];}
    }
    return min;
}
int main(){
    int arr[100];
    int n,k,k1;
    int min,max;

    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    k1=k;

    while(k>=1){
        min=minof(arr,n);
        max=maxof(arr,n);
        for(int i=0; i<n; i++){
            if(arr[i]==max){
                arr[i]=min;
            }
        }
        k--;
    }
    printf("Phan tu lon thu %d la: %d",k1,max);
    return 0;
}*/



