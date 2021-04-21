#include<stdio.h>

  void ramanujan_square(int d,int m,int c,int y)
{  int a,b,k,n;
	printf("%8d%8d%8d%8d",d,m,c,y);
	a=y+1;
	b=c-1;
	k=m-3;
	n=d+3;
	printf("\n%8d%8d%8d%8d",a,b,k,n);
	a=m-2;

b=d+2;
	k=y+2;
	n=c-2;
	printf("\n%8d%8d%8d%8d",a,b,k,n);
	a=c+1;
	b=y-1;
	k=d+1;
	n=m-1;
	printf("\n%8d%8d%8d%8d",a,b,k,n);
	}




int main()
 {
  int d,m,c,y;
  printf("\n\t\t\t\t%8s","RAMANUJAN_SQUARE");
 printf("\n\n enter your birth date = ",d);     scanf("%d",&d);
  printf("\n enter your birth month =",m);      scanf("%d",&m);
  printf("\n enter your birth century =",c);               scanf("%d",&c);
  printf("\n enter your birth year =",y);
 scanf("%d",&y);

     printf(" \n\n ramanujan square for given data  is \n\n");
		  ramanujan_square(d,m,c,y);

   printf("\n\nsum of each elements of row , column and diagonal elements or your lucky square number is :%d \n\n",d+y+c+m);

	    
  return 0;}


