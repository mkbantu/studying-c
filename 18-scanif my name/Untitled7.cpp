#include <stdio.h>

int main() {
	char name[50];
	char g;
	int age;
	printf("=======Enter your name====== \n");
	scanf("%[^\n]",&name);
	printf("your name is %s\n",name);
	printf("=======Enter your Gender(M or F)=====\n");
	scanf("%c",&g)
	printf("=======enter your age =======\n");
	scanf("%d",&age);
	printf("your age is %d\n",age);

	 printf("press enter to exist...");
	 
	 
	 getchar();
	return 0;
}