#include <stdio.h>
#include <stdlib.h>

struct person{
    char name[100];
    int age;
    float weight;
    int height;
};
int main(){
    struct person *person_pointer, person1;
    person_pointer = &person1;
    printf("Nhap ten: ");
    gets(person_pointer->name);
    printf("Nhap tuoi: ");
    scanf("%d",&person_pointer->age);
    printf("Nhap can nang: ");
    scanf("%f",&person_pointer->weight);
    printf("Nhap chieu cao: ");
    scanf("%d",&person1.height);
    //
    puts("");
    //
    printf("Doi tuong:\nTen: ");
    puts(person1.name);
    printf("Tuoi: %d\n",person1.age);
    printf("Can nang: %.1f\n",person1.weight);
    printf("Chieu cao: %d cm\n",person1.height);
    return 0;

}
