// Faça um programa que leia um número e diga se o número é par ou não

#include <stdlib.h>
#include <stdio.h>

int main (void)
{
	
int num;
printf("digite um numero inteiro: ");
scanf("%d",&num);

if(num%2==0)//operador %
{
	
printf("Par");
}

else
printf("impar");
}
