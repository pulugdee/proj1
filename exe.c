#include<stdio.h>
int add(int,int);
int sub(int,int);
int main()
{
	printf("Welcome Jenkins!\n");
	add(5,4);
	sub(5,4);
	return 0;
}
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
