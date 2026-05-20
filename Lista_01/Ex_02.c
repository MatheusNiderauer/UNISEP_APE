#include <stdio.h>
int main(){
int sal;

printf("Digite seu salário ");
scanf("%i", &sal);

if(sal>3000){
printf("Você receberá %i",(sal/20)+sal);
}else printf("Você receberá %i", (sal/10)+sal);
}