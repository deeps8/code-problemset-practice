#include<stdio.h>
#include<conio.h>
int  main()
{
    int  x,i;
	  for(i=1;i<=10;i++)
	  {
	   printf("number   numeral\n");
    scanf("%d",&x);
	if(x==100) {
	    printf("C");
	    x=0;
	}
	if(x>=50) {
	    printf("L");
	    x-=50;
	}
	if(x>=40)
	{   printf("XL");
	    x-=40;
	}
	while(x>=10) {
	    printf("X");
	    x-=10;
	}
	if(x>=5) {
	    if(x%10==9) {
		printf("IX");
		x-=9;
	    }
	    else {
		printf("V");
		x-=5;
	    }
	}
	while(x>0)
	{
	    if(x%10==4) {
		printf("IV");
		x-=4;
	    }
	    else {
		printf("I");
		x-=1;
	    }

	}
	printf("\n");

       }
       
       return 0;
}
