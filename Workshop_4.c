//Program 1
#include <stdio.h>

void printMinMaxDigits(int n) {                              
     int max, min;
     max = n % 10;
	 min = n % 10;
	 while( n > 0) {
		int temp = n % 10;
		       n/=10;
		if ( max < temp) {
			 max = temp;
		}
		if ( min > temp) {
			 min = temp;
		}
     }
     printf("Minimum of digits: %d\n", min);
     printf("Maximum of digits: %d\n", max);    
}

int PrimeCheck(int a)
{
	int i;
	int s=1;
	
	if(a<2)
		s=0;
	
	for(i=2; i<=sqrt(a); i++)
	{
		if(a%i == 0){s= 0;}
	}
	return s;
	
}

int main()
{
int opt, n, x; 
double a;
printf("A new program \n");
	
printf("1 | Process primes \n");
printf("2 | Print max, min digit in an integer \n");
printf("3 | Quit the program \n \n");

printf("Select the type program you want: ");
scanf("%d",&opt);

switch(opt)
{
	case 1: 
		{
			int i, t; printf("Input n: ");
			scanf("%d", &n);
			if(n==3)
				{printf("No prime number between 2 and 3!\n"); return 0;}
	
			printf("The prime range: ");
			for( i=2; i<=n; i++)
				{
					t = PrimeCheck(i);
		
					if(t == 1)
				{printf("%d ", i);}
		
				}
	
				return 0;
		}
		break;
	
	case 2: 
		printf("Enter integer: ");
		scanf("%d", &n);
		printMinMaxDigits(n);
		return 0;

		break;
		
	case 3: 
		return 0;
		break;
}
while(opt>0 && opt<3);
return 0;

}

//Program 2
#include <stdio.h>


double fibo(int n)
{
	int a=1, b=1, t=1;
	if(n==1) return 1;
	while(t<n)
	{
		t= a+b;
		a=b;
		b=t;
	}
	
	return n==t;
	if(n == t) return 1;
}

int DateCheck(int d, int m, int y)
{
	int mdate=31;
	
	if((d<1) || (d>31)||(m<1) || (m>12)) return 0;
	
	if( (m== 4)|| (m == 6) || (m==9) || (m==11)) mdate=30;
	
	else if(m==2)
			{
				if(y%400 == 0 || (y%4 == 0 && y%100!=0)) mdate = 29;
				else mdate =28;
			}
			
		return d <=mdate;
}

int main()
{
int opt, n, x; 
double a;
int d,m,y;
printf("A new program \n");
	
printf("1 | Date Checking program \n");
printf("2 | Fibonacci program \n");
printf("3 | Quit the program \n \n");

printf("Select the type program you want: ");
scanf("%d",&opt);

switch(opt)
{
	case 1: 
			
	printf("Input day: "); scanf("%d",&d);
	printf("Input month: "); scanf("%d",&m);
	printf("Input year: "); scanf("%d",&y); 

	if(DateCheck(d,m,y) == 1)
		printf("Valid date");
	else printf("Invalid date!"); 
	
	return 0;
		break;
	
	case 2: 
	
	printf("Input n: ");
	
	do{
		scanf("%d", &n);
	}
	while(n<1);
	if(fibo(n) == 1)
		{printf("In the Fibonacci sequence!");}
	else{printf("not in the Fibonacci sequence!");
	}
		break;
		
	case 3: 
		return 0;
		break;
}
while(opt>0 && opt<3);
return 0;

}
