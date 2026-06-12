#include<stdio.h>
#include<string.h>
int main(){
    char nom[15]={'m','a','r','i','o','n','\0'};
    printf("The original string is: %s\n",nom);
    strrev(nom);
    printf("The reversed string is: %s\n",nom);
    return 0;
}