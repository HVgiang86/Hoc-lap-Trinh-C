#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int day1[100];
    int day2[100];
    int day3[100];
    int f=0;
    int size1,size2,size3;
    int i=0; int j=0;
    int k=0;
//
        puts("Menu: \n");
        puts("1> Nhap 2 day so nguyen theo chieu tang dan\n");
        puts("2> Ghep 2 day\n");
        puts("3> In ra 3 day so\n");
        puts("4> Ket thuc\n");

    while(1){
        puts("Nhap chuc nang: ");
        scanf("%d",&f);
        switch(f){
            case 1:
                printf("So phan tu cua day 1: ");
                scanf("%d",&size1);
                printf("Nhap day 1: ");
                for(i=0; i<size1; i++){
                    day1[i]=rand()%100;
                }
                for(i=0; i<size1;i++){
                    for(j=i; j<size1; j++){
                        if(day1[i]>day1[j]){
                            int tg;
                            tg=day1[i];
                            day1[i]=day1[j];
                            day1[j]=tg;
                        }
                    }
                }
                for(i=0; i<size1; i++){
                    printf("%d ",day1[i]);
                }
                puts("\n");
                printf("So phan tu cua day 2: ");
                scanf("%d",&size2);
                printf("Nhap day 2: ");
                for(i=0; i<size2; i++){
                    day2[i]=rand()%100;
                }
                for(i=0; i<size2;i++){
                    for(j=i; j<size2; j++){
                        if(day2[i]>day2[j]){
                            int tg;
                            tg=day2[i];
                            day2[i]=day2[j];
                            day2[j]=tg;
                        }
                    }
                }
                for(i=0; i<size1; i++){
                        printf("%d ",day2[i]);
                }
                puts("\n");
                break;
            case 2:
                i=0; j=0; k=0;
                for(i=0; i<size1; i++){
                    for(int a=j; a<size2; a++){
                        if(day2[a]<=day1[i]){
                            day3[k]=day2[a];
                            k++;
                            j++;
                        }
                        else{
                            day3[k]=day1[i];
                            k++;
                            break;
                        }
                    }
                }
                while(j<size2){
                    day3[k]=day2[j];
                    k++;
                    j++;
                }
                size3=k;
                puts("Da ghep xong\n");
                break;
            case 3:
                puts("Day1: ");
                for(i=0; i<size1; i++){
                    printf("%d ",day1[i]);
                }
                puts("\n");
                puts("Day2: ");
                for(i=0; i<size2; i++){
                    printf("%d ",day2[i]);
                }
                puts("\n");
                puts("Day3: ");
                for(i=0; i<size3;i++){
                    printf("%d ",day3[i]);
                }
                puts("\n");
                break;
            case 4: return 0;
                    break;
        }
    }
}
