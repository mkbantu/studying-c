#include<stdio.h>
int main(){
    FILE *fn;
    int x;
    fn=fopen("mukundabntu","w");
    for(x=9;x>=0;x--){
        fprintf(fn,"%d\n",x);
    }
    close(fn);
    return 0;
}