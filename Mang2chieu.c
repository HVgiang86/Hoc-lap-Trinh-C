//Sắp xếp mảng 2 chiều tăng dần theo hình xoắn ốc//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int a[100][100];
int m,n;
int maxof(){ //func 1
    int hang=m;
    int cot=n;
    int max;
    max=a[0][0];
    for(int i=0; i<hang; i++){
        for(int j=0; j<cot; j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
    }
    return max;

}
int minof(){ //func 2
    int hang=m; int cot=n;
    int min;
    min=a[0][0];
    for(int i=0; i<hang; i++){
        for(int j=0; j<cot; j++){
            if(a[i][j]<min){
                min=a[i][j];
            }
        }
    }
    return min;

}
void listofPrime(){ //func 3
    int hang=m; int cot=n;
    printf("Cac so nguyen to la: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            int count=0;
            for(int k=1; k<=a[i][j]; k++){
                if(a[i][j]%k==0){
                    count++;
                }
            }
            if(count==2){printf("%d\t",a[i][j]);}
        }
        printf("\n");
        }
    }
int Sum(){ //func 4
    //Tong tat ca phan tu trong mang
    int hang=m;
    int cot=n;
    int sum=0;
    for(int i=0; i<hang; i++){
        for(int j=0; j<cot; j++){
            sum+=a[i][j];
        }
    }

}
void sortUp(){ //func 5
    int hang=m; int cot =n;
    int b[10000];
    int k=0;
    int size;
    for(int i=0; i<hang; i++){
        for(int j=0; j<cot; j++){
            b[k]=a[i][j];
            k++;
        }
    }
    size=k;
    //
    k=0;
    for(int i=0; i<size; i++){
        for(int j=i; j<size; j++){
            if(b[i]>b[j]){
                int tmp;
                tmp=b[i];
                b[i]=b[j];
                b[j]=tmp;
            }
        }
    }
    //
    for(int i=0; i<hang; i++){
            for(int j=0; j<cot; j++){
                a[i][j]=b[k];
                k++;
            }
            printf("\n");
    }

    //
    for(int i=0; i<hang; i++){
            for(int j=0; j<cot; j++){
                printf("%d\t",a[i][j]);
            }
            printf("\n");
    }
}
void sortDown(){ //func 6
    int hang=m; int cot=n;
    int b[100*100];
    int k=0;
    int size;
    for(int i=0; i<hang; i++){
        for(int j=0; j<cot; j++){
            b[k]=a[i][j];
            k++;
        }
    }
    //
    size=k;
    k=0;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(b[i]<b[j]){
                int tmp;
                tmp=b[i];
                b[i]=b[j];
                b[j]=tmp;
            }
        }
    }
    //
    for(int i=0; i<hang; i++){
            for(int j=0; j<cot; j++){
                a[i][j]=b[k];
                k++;
            }

    }
    //
    for(int i=0; i<hang; i++){
            for(int j=0; j<cot; j++){
                printf("%d\t",a[i][j]);
            }
            printf("\n");
    }
}
void RowSwap(int hang1, int hang2){ //func 7
    int hang=m;
    int cot=n;
    int tg[cot];
    int k=0;
    for(int i=0; i<cot; i++){
        tg[k]=a[hang1-1][i];
        k++;
    }
    for(int i=0; i< cot; i++){
        a[hang1-1][i]=a[hang2-1][i];
    }
    k=0;
    for(int i=0; i<cot; i++){
        a[hang2-1][i]=tg[k];
        k++;
    }
    for(int i=0; i<hang; i++){
        for(int j=0; j<cot; j++){
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
int startvalue(int key[100][100] ){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(key[i][j]==1){
                return a[i][j];
            }
        }
    }
}
void frequency(){//func 8
    int flag[100][100];
    int k=0; int value;
    int count=0;
    int size=m*n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            flag[i][j]=1;
        }
    }
    while(size!=0){
        count=0;
        value = startvalue(flag);
        for(int i=0; i<m; i++){
           for(int j=0; j<n; j++){
                if(value==a[i][j]){
                    count++;
                    flag[i][j]=0;
                }
           }
        }
    printf("Phan tu %d\txuat hien: %d lan\n",value,count);
    size=size-count;
    }
}
void SortInSpiralShape(){ //func 9
    //Sap xep thang mang 1 chieu:
    int tg[10000];
    int k=0;
    int size;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            tg[k]=a[i][j];
            k++;
        }
    }
    size=k;
    //
    k=0;
    for(int  i=0; i<size; i++){
        for(int j=i; j<size; j++){
            if(tg[i]>tg[j]){
                int tmp;
                tmp=tg[i];
                tg[i]=tg[j];
                tg[j]=tmp;
            }
        }
    }
    // Xep mang 1 chieu vao dung vi tri

    //Xac dinh kich thuoc duyet:
    int hang=m-1;
    int cot=n-1;
    //Xac dinh 2 diem gioi han khu vuc duyet A(x0,y0) B(m,n)
    int x0=0;
    int y0=0;
    //Duyet
    while(k<size){
        //Duyet canh tren cung
        for(int i=y0; i<=cot; i++){
            a[x0][i]=tg[k];
            k++;
        }
        x0++;
        //Duyet canh ben phai
        for(int i=x0; i<=hang; i++){
            a[i][cot]=tg[k];
            k++;
        }
        cot--;
        //Duyet canh duoi
        for(int i=cot; i>=y0; i--){
            a[hang][i]=tg[k];
            k++;
        }
        hang--;
        //Duyet canh trai
        for(int i=hang; i>=x0; i-- ){
            a[i][y0]=tg[k];
            k++;
        }
        y0++;

    }

    //
    printf("Mang sau khi sap xep: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

}
int main(){
    int f=0;
    int x1,x2;
    printf("Nhap so hang, so cot: ");
    scanf("%d %d",&m,&n);
    printf("Nhap cac phan tu cua mang: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Menu: \n");
    printf("1> Tim phan tu lon nhat\n");
    printf("2> Tim phan tu nho nhat\n");
    printf("3> In ra cac so nguyen to\n");
    printf("4> Tinh tong tat ca phan tu \n");
    printf("5> Sap xep mang tang dan\n");
    printf("6> Sap xep mang giam dan\n");
    printf("7> Doi vi tri 2 hang\n");
    printf("8> Tinh tan xuat cua cac phan tu trong mang\n");
    printf("9> Sap xep mang tang dan theo hinh xoay oc\n");
    printf("10> exit");
  while(1){
    puts("\n");
    printf("Nhap chuc nang: ");
    scanf("%d",&f);
    printf("\n");
    switch(f){
    case 1:
        printf("=> ban da chon chuc nang Tim phan tu lon nhat cua mang\n");
        printf("=> processing...\n");
        printf("=> Phan tu lon nhat: %d",maxof());
        break;
    case 2:
        printf("=> ban da chon chuc nang Tim phan tu nho nhat cua mang\n");
        printf("=> processing...\n");
        printf("=> Phan tu nho nhat: %d",minof());
        break;
    case 3:
        printf("=> ban da chon chuc nang in ra cac so nguyen to trong mang\n");
        printf("=> processing...\n");
        listofPrime();
        break;
    case 4:
        printf("=> ban da chon chuc nang Tinh tong tat ca phan tu trong mang\n");
        printf("=> processing...\n");
        printf("=> Tong: %d",Sum());
        break;
    case 5:
        printf("=> ban da chon chuc nang Sap xep mang tang dan\n");
        printf("=> processing...\n");
        printf("=> Mang da sap xep: \n");
        sortUp();
        break;
    case 6:
        printf("=> ban da chon chuc nang Sap xep mang giam dan\n");
        printf("=> processing...\n");
        printf("=> Mang da sap xep: \n");
        sortDown();
        break;
    case 7:
        printf("=> Ban da chon chuc nang doi cho 2 hang bat ky\n");
        printf("Nhap vao 2 hang ban can: ");
        scanf("%d %d",&x1,&x2);
        printf("\n");
        printf("Mang sau khi doi cho: \n");
        RowSwap(x1,x2);
        break;
    case 8:
        printf("=> Ban da chon chuc nang Tinh tan suat xuat hien cua cac phan tu\n");
        frequency();
        break;
    case 9:
        printf("=> Ban da chon chuc nang Sap xep mang tang dan theo hinh xoan oc\n");
        SortInSpiralShape();
        break;
    case 10:
        return 0;
    default :
        printf("=> Khong hop le! Chuc nang trong khoang 1->10");
        break;
    }
  }
    printf("\n");
    printf("Goodbye <3");
    //done at 10h25m 20/1/2021
}
