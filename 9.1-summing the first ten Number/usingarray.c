#include<stdio.h>
int main(){
    int marks[10]={50,55,67,73,45,21,39,70,49,51};
int i;
int sum=0;
float avg;
for(i=0;i<=9;i++){gcc
    
    sum=sum+marks[i];
}
avg=float(sum)/10;
printf("average :%f",avg);
return 0;
}


