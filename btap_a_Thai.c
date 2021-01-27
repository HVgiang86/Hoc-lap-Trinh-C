#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int arr[1000];
int m;

void Nhap(){ //func 1
    int k;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&m);
    printf("Nhap cac phan tu cua mang: ");
    srand(time(NULL));
    for(int i=0; i<m; i++){
        k=rand()&1 ? 1 : -1;
        arr[i]=k*(rand()%100);
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Da nhap xong!");
}
void Xuat(){ //func2
    for(int i=0; i<m; i++){
        printf("%d ",arr[i]);
    }
}
int DemAm(){ //func3
    int count=0;
    for(int i=0; i<m; i++){
        if(arr[i]<0){
            count++;
        }
    }
    return count;
}
void timMaxMin(){ //func4
    int max,min;
    min=max=arr[0];
    for(int i=0; i<m; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("Max= %d\n",max);
    printf("Min= %d\n",min);
}
void timAmDuong(){ //func5
    int duong[1000];
    int am[1000];
    int max, min;
    int demduong=0;
    int demam=0;

    for(int i=0; i<m; i++){
        if(arr[i]>0){
            duong[demduong]=arr[i];
            demduong++;
        }
    }
    for(int i=0; i<m; i++){
        if(arr[i]<0){
            am[demam]=arr[i];
            demam++;
        }
    }
    min=duong[0];
    for(int i=0; i<demduong; i++){
        if(duong[i]<min){
            min=duong[i];
        }
    }
    max=am[0];
    for(int i=0; i<demam; i++){
        if(am[i]>max){
            max=am[i];
        }
    }
    if(demduong>0){
        printf("Min= %d\n",min);
    }
    else{
        puts("Khong co phan tu duong");
    }
    if(demam>0){
        printf("Max= %d\n",max);
    }
    else{
        puts("Khong co phan tu am");
    }

}
void Prime(){ //func 6
    int prime[10000];
    int dem=0;
    for(int i=0; i<m; i++){
        if(arr[i]>0){
            int count=0;
            for(int j=1; j<=arr[i]; j++){
                if(arr[i]%j==0){
                    count++;
                }
            }
            if(count ==2){
                dem++;
                prime[dem]=arr[i];
            }
        }
    }
    if(dem>0){
        puts("Cac so nguyen to la: ");
        for(int i=1; i<=dem; i++){
            printf("%d ",prime[i]);
    }
    }
    else{
        puts("khong co so nguyen to");
    }
}
void Chinhphuong(){ //func7
    int cp[10000];
    int count=0;
    for(int i=0; i<m; i++){
        int sqr = sqrt(arr[i]);
        if(sqr*sqr == arr[i]){
            count++;
            cp[count]=arr[i];
        }
    }
    if(count>0){
        puts("Cac so chinh phuong la: ");
        for(int i=1; i<count; i++){
            printf("%d ",cp[i]);
        }
    }
    else{
        puts("khong co so chinh phuong");
    }
}
void Sortup(){  //func8
    for(int i=0; i<m; i++){
        for(int j=i; j<m; j++){
            if(arr[i]>arr[j]){
                int tg;
                tg=arr[i];
                arr[i]=arr[j];
                arr[j]=tg;
            }
        }
    }
    puts("mang da sap xep: ");
    Xuat();
}
void Sortdown(){ //func9
    for(int i=0; i<m; i++){
        for(int j=i; j<m; j++){
            if(arr[i]<arr[j]){
                int tg;
                tg=arr[i];
                arr[i]=arr[j];
                arr[j]=tg;
            }
        }
    }
    puts("mang da sap xep: ");
    Xuat();
}
void add(int value, int pos){ //func10
    for(int i=m; i>=pos; i-- ){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
    m++;
    puts("mang sau khi them: ");
    Xuat();
}
void removed(int pos){ //func11
    for(int i=pos-1; i<m-1; i++ ){
        arr[i]=arr[i+1];
    }
    m--;
    puts("mang sau khi xoa: ");
    Xuat();
}
void edit(int value, int pos){ //func12
    arr[pos-1]=value;
    puts("mang sau khi sua: ");
    Xuat();
}
int main(){
    int value,pos;
    int func;
            puts("Hi :> I'm Giang");
        puts("Chuc nang cua chuong trinh: ");
        puts("1>\tNhap Mang");
        puts("2>\tXuat Mang");
        puts("3>\tDem so phan tu am");
        puts("4>\tTim phan tu Max, Min");
        puts("5>\tTim phan tu am lon nhat va duong be nhat");
        puts("6>\tLiet ke cac so nguyen to trong mang");
        puts("7>\tLiet ke so chinh phuong");
        puts("8>\tSap xep mang theo thu tu tang dan");
        puts("9>\tSap xep mang theo thu tu giam dan");
        puts("10>\tThem mot phan tu vao mang");
        puts("11>\tXoa mot phan tu khoi mang");
        puts("10>\tSua mot phan tu cua mang");
        puts("0>\tExit");
    while(1){
        puts("");
        printf("-->Nhap chuc nang: ");
        scanf("%d",&func);
        switch(func){
        case 1:
            puts("ban da chon chuc nang: Nhap mang!\n");
            Nhap();
            break;
        case 2:
            puts("ban da chon chuc nang: Xuat mang!\n");
            Xuat();
            break;
        case 3:
            puts("ban da chon chuc nang: Dem so phan tu am\n");
            printf("So phan tu am: %d\n",DemAm());
            break;
        case 4:
            puts("ban da chon chuc nang: Tim phan tu Max, Min\n");
            timMaxMin();
            break;
        case 5:
            puts("ban da chon chuc nang: Tim phan tu am lon nhat va duong be nhat\n");
            timAmDuong();
            break;
        case 6:
            puts("ban da chon chuc nang: Liet ke cac so nguyen to trong mang\n");
            Prime();
            break;
        case 7:
            puts("ban da chon chuc nang: Liet ke so chinh phuong\n");
            Chinhphuong();
            break;
        case 8:
            puts("ban da chon chuc nang: Sap xep mang theo thu tu tang dan\n");
            Sortup();
            break;
        case 9:
            puts("ban da chon chuc nang: Sap xep mang theo thu tu giam dan\n");
            Sortdown();
            break;
        case 10:
            puts("ban da chon chuc nang: Them mot phan tu vao mang\n");
            printf("Gia tri, vi tri can them: ");
            scanf("%d %d",&value,&pos);
            add(value,pos);
            break;
        case 11:
            puts("ban da chon chuc nang: Xoa mot phan tu khoi mang\n");
            printf("Vi tri can xoa: ");
            scanf("%d",&pos);
            removed(pos);
            break;
        case 12:
            puts("ban da chon chuc nang: Sua mot phan tu cua mang\n");
            printf("Gia tri, vi tri can sua: ");
            scanf("%d %d",&value,&pos);
            edit(value,pos);
            break;
        case 0:
            return 0;
        }
    }
}
