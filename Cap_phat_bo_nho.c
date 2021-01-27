#include <stdio.h>
int main(){
    int func=0;
    int x,*p;
    while(1){
        puts("");
        printf("Nhap yeu cau: ");
        scanf("%d",&func);
        switch(func){
            case 1:
                printf("So luong o nho can cap phat: ");
                scanf("%d",&x);
                p  = (int*) malloc(x * sizeof(int));
                printf("Bo nho da cap phat: %d byte\n",x*sizeof(int));
                break;
            case 2:
                printf("Da giai phong bo nho\n");
                break;
            case 0:
                return 0;
        }
    }
}
