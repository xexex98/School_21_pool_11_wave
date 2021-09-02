#include <stdio.h>

#include <stdlib.h>

char a,b,c;

int num;

void hanoy(int num,char a,char b,char c){

  if(num>0){

    hanoy(num-1,a,c,b);

    printf("%c--->%c\n",a,c);

    hanoy(num-1,b,a,c);

  }

}

void main(){

  clrscr();

  printf("number of rings=");

  scanf("%d",&num);

  a='A';b='B';c='C';

  hanoy(num,a,b,c);

  getch();

}