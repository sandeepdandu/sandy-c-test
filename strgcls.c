#include <stdio.h> 
int x; 
void autostrgcls() 
{ 
	auto int a = 32;
	printf("Value of the variable  a is %d\n", a); 
} 
void registerStrgCls() 
{ 
	register char b='c' ;
	printf("Value of variable b is %d\n",b);
} 
void externStrgCls() 
{ 
	extern int x;  
	printf("Value of the variable x is  %d\n",x); 
	x = 2;
	printf("Modified value of the variable x is  %d\n",x);
} 
void staticStrgCls() 
{ 
	int i = 0; 
	printf(" y as static inside loop\n");  
	for (i = 1; i < 5; i++)
	 { 
		static int y = 5; 
		int p = 10; 
		y++; 
		p++; 
	printf("value of i and y is   %d %d\n", i, y);  
		printf("The value of non-static variable  %d  %d\n", i, p); 
	} 
 
} 

int main() 
{ 

	printf("A program for strg cls "); 
	autoStrgCls();  
	registerStrgCls(); 
	externStrgCls(); 
	staticStrgCls(); 
	printf("Storage Classes "); 
 
} 


