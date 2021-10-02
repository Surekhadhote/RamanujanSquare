#include<stdio.h>

/* function to calculate ramanujan square */
  void ramanujan_square(int d,int m,int c,int y)
{  
	/* declaring variables  */
	int a,b,k,n;
	/* pritning values to console */
	printf("%8d%8d%8d%8d",d,m,c,y);
	/* calculating values */
	a=y+1;
	b=c-1;
	k=m-3;
	n=d+3;
	  /* pritning values to console */
	printf("\n%8d%8d%8d%8d",a,b,k,n);
	
	a=m-2;
	b=d+2;
	k=y+2;
	n=c-2;
	  /* pritning values to console */
	printf("\n%8d%8d%8d%8d",a,b,k,n);
	  
	a=c+1;
	b=y-1;
	k=d+1;
	n=m-1;
	  /* pritning values to console */
	printf("\n%8d%8d%8d%8d",a,b,k,n);
	}




int main()
 {
	/* declaring variables  */
  	int d,m,c,y;
	
	/* pritning message to console */
 	 printf("\n\t\t\t\t%8s","RAMANUJAN_SQUARE");
	/* pritning message for user input */
  	printf("\n\n enter your birth date = ",d); 
	
	/* taking input from user */
	scanf("%d",&d);
	
	/* pritning message for user input */
 	 printf("\n enter your birth month =",m);   
	/* taking input from user */
	scanf("%d",&m);
	
	/* pritning message for user input */
  	printf("\n enter your birth century =",c); 
	/* taking input from user */
	scanf("%d",&c);
	
	/* pritning message for user input */
  	printf("\n enter your birth year =",y);
 
	/* taking input from user */
	scanf("%d",&y);

	/* pritning message for user input */
     	printf(" \n\n ramanujan square for given data  is \n\n");
	
	/* calling ramanujan_square function */
	ramanujan_square(d,m,c,y);

	/* pritning message for user input */
   	printf("\n\nsum of each elements of row , column and diagonal elements or your lucky square number is :%d \n\n",d+y+c+m);

	    
  	return 0;
}


