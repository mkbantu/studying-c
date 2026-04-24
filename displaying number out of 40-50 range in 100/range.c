#include<stdio.h>
int main(){
        
        for(int i=0;i<=100;i++){
            if(i<=50 && i>=40){
                continue;
            }
        printf("%d\n",i);
        }
    return 0;
}