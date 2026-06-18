#include<stdio.h>
int main(){
    char name[50];
    char g;
    int age;
    printf("=======Enter your name====== \n");
    fgets(name, sizeof(name), stdin);
    printf("your name is %s\n",name);

    return 0;
}