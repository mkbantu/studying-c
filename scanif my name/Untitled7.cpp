#include <stdio.h>

int main() {
	char name[50];
	int age;
	printf("=======Enter your name====== \n");
	scanf("%[^\n]",&name);
	printf("your name is %s\n",name);
	printf("=======enter your age =======\n");
	scanf("%d",&age);
	printf("your age is %d\n",age);
	 printf("press enter to exist...");
	 
	 
	 getchar();
	return 0;
}