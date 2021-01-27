#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct SinhVien{
    char hoten[100];
    char gioitinh[100];
    int age;
    float DT,DL,DH;
    float dtb;
};
//typedef SinhVien SV;
struct SinhVien arr[100];
int N;
void nhap();
void xuat();
int diemtb(float dtoan, float dly, float dhoa){
    int value;
    value = (dtoan+dly+dhoa)/3;
    return value;
}
void sort();
void xeploai();
int main(){
    int func;
    puts("Welcome!");
    puts("Cac chuc nang: ");
    puts("1>\tNhap vao danh sach sinh vien");
    puts("2>\tXuat danh sach N sinh vien");
    puts("3>\tTinh diem trung binh");
    puts("4>\tSap xep sinh vien theo diem trung binh");
    puts("5>\tXep loai sinh vien");
    puts("6>\tXuat danh sach sinh vien ra file");
    puts("0>\tThoat chuong trinh");
    while(1){
        puts("");
        printf("Nhap chuc nang: ");
        scanf("%d",&func);
        switch(func){
        case 1:
            printf("Nhap danh sach Sinh vien\n");
            nhap();
            break;
        case 2:
            printf("Xuat danh sach sinh vien\n");
            xuat();
            break;
        case 3:
            printf("Tinh diem trung binh: \n");
            printf("Da tinh diem trung binh:\n");
            for(int i=1; i<=N; i++){
                printf("Diem trung binh cua sinh vien thu %d la: %.2f\n",i,arr[i].dtb);
            }
            break;
        case 4:
            printf("Sap xep sinh vien theo diem trung binh\n");
            printf("Da sap xep\n");
            sort();
            xuat();
            break;
        case 5:
            printf("Xep loai sinh vien!\n");
            xeploai();
            break;

        case 0:;
            int ex;
            printf("Exit?\n1> yes\t2> no\n");
            scanf("%d",&ex);
            if(ex==1){exit(0);}
            else{break; }
        }

    }
}
void nhap(){
    printf("Nhap so luong sinh vien: ");
    scanf("%d",&N);
    for(int i=1; i<=N; i++){
        printf("Sinh vien thu %d: \n",i);
        printf("\tNhap ho ten: ");
        fflush(stdin);
        gets(arr[i].hoten);
        printf("\tNhap tuoi: ");
        scanf("%d",&arr[i].age);
        printf("\tNhap diem Toan, Ly, Hoa: ");
        scanf("%f %f %f",&arr[i].DT,&arr[i].DL,&arr[i].DH);
        puts("*----------*");
        arr[i].dtb = diemtb(arr[i].DT,arr[i].DL,arr[i].DH);
    }
    puts("->Da nhap xong!");
}
void xuat(){
    for(int i=1; i<=N; i++){
        printf("Sinh vien thu %d: \n",i);
        printf("\tHo ten: %s\n",arr[i].hoten);
        printf("\tTuoi: %d\n",arr[i].age);
        printf("\tDiem Toan: %.2f\n",arr[i].DT);
        printf("\tDiem Ly: %.2f\n",arr[i].DL);
        printf("\tDiem Hoa: %.2f\n",arr[i].DH);
        printf("\tDiem trung binh: %.2f\n",arr[i].dtb);

    }
}

void sort(){
    struct SinhVien tmp;
    for(int i=1; i<=N; i++){
       for(int j=i; j<=N; j++){
            if(arr[i].dtb>arr[i].dtb){
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
       }
    }
}
void xeploai(){
    for(int i=1; i<=N; i++){
        printf("Xep loai cua sinh vien %s la: ",arr[i].hoten);
        if(arr[i].dtb>=8){
            printf("gioi\n");
        }
        else if(arr[i].dtb >= 6.5){
            printf("Kha\n");
        }
        else if(arr[i].dtb > 4){
            printf("Trung Binh\n");
        }
        else{printf("yeu\n");}
    }
}
