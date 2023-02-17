//Bai 1
#include <math.h>
#include <stdio.h>

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
	int n,i,t;
	printf("Input the number limit: " );
	scanf("%d",&n);
	if(n==3)
	{
		printf("No prime number between 2 and 3!\n"); return 0;
	}
	
	printf("The prime range: ");
	for( i=2; i<=n; i++)
	{
		t = PrimeCheck(i);
		
		if(t == 1)
		{printf("%d ", i);}
		
	}
	
	return 0;
}

//Bai 2
#include <stdio.h>
#include <math.h>

int d,  m, y;

int DateCheck()
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
	
	printf("Input day: "); scanf("%d",&d);
	printf("Input month: "); scanf("%d",&m);
	printf("Input year: "); scanf("%d",&y); 

	if(DateCheck() == 1)
		printf("Valid date");
	else printf("Invalid date!"); 
	
	return 0;
}

//Bai 3
#include <stdio.h>
#include <math.h>



int getPos(double x, double y, double r)
{
	double d2 = x*x + y*y;
	double r2 = r*r;
	
	if(d2<r2){ return 1;}
	else if(d2 == r2){ return 0;}
	
	return -1;
	
}

int main()
{
	double x,y;
	double r;
	int res;
	
	printf("Input Coordinate of P: "); 
	scanf("%lf %lf", &x, &y);
	printf("Input radius: ");
	do
	{
		scanf("%lf", &r);
	}
	while(r<0);
	res = getPos(x,y,r);
	
	if(res == 1){printf("The point is in circle!");}
	else if(res == 0){printf("The point is on circle!");}
	else {printf("The point is out of the circle!");}
	
	return 0;
	
	
}

//Bai 4

#include <stdio.h>
#include <math.h>

double factorial(int n)
{
	double p=1;
	int i;
	for(i = 2; i<= n; i++)
		p*=i;
		
	return p;
}

int main()
{
	int n, s;
	printf("Input n: ");
	
	do
	{scanf("%d",&n);}
	while(n<0);
	printf("Factorial is: %lf ", factorial(n));
}

//Bai 5
#include <stdio.h>
#include <math.h>
#include <string.h>

double fibo(int n)
{
	int a=1, b=1, t=1, i;
	for(i =3; i<=n; i++)
	{
		t= a+b;
		a=b;
		b=t;
	}
	
	return t;
}

int main()
{
	double a;
	int n,x; printf("Input n: ");
	
	do{
		scanf("%d", &n);
	}
	while(n<1);
	a = fibo(n);
	x=a;
	printf("Fibonaccy: %d", x);

	
}

//Bai 6
#include <stdio.h>
#include <math.h>
#include <string.h>

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

int main()
{
	double a;
	int n; printf("Input n: ");
	
	do{
		scanf("%d", &n);
	}
	while(n<1);
	if(fibo(n) == 1)
		{printf("In the Fibonacci sequence!");}
	else{printf("not in the Fibonacci sequence!");
	}

	
}

//Bai 7
#include <stdio.h>

int SumDig(int n)
{
	int remainder;
	int sum = 0;
	do{
		remainder = n%10;
		n = n/10;
		sum+= remainder;
	}
	while(n>0);
	return sum;
}

int main(){
	int n,S;
	printf("Input n: ");
	do{
		scanf("%d", &n);
		if(n>=0){
			S= SumDig(n);
			printf("Sum of %d decimal digits: %d", n, S);
		}
	}while(n>=0);
	
	 return 0;
}

//Bai 8
#include <stdio.h>
#include <math.h>

double DoubCombine(int ip, int fr)
{
	double df=fr;
	while(df>=1)
	{
		df= df/10;
	}
	
	if(ip < 0) return ip-df;
	return ip+df;
}

int main()
{
	int a,b;
	printf("Input the ipart: ");scanf("%d", &a);
	
	printf("Input the fraction: ");
	do
	{
		scanf("%d", &b);
	}
	while (b<0);
	float val = DoubCombine(a,b);
	printf("The number is: %lf", val); return 0;
}

//Bai 9
#include <stdio.h>
#include <math.h>

int gcd(int a, int b)
{
	while(a!=b)
	{
		if(a>b)a-=b;
		else b-=a;
		
		return a;
	}
	

}

	int lcm(int a, int b)
	{
		return (a*b)/gcd(a,b);
	}
	
	
int main()
{
	int a,b;
	printf("Input a & b: ");
	do{
		scanf("%d%d",&a,&b);
	}
	while(a <=0 || b<=0);
	int d=gcd(a,b);
	int m=lcm(a,b);
	 printf("Greatest common divisor of %d and %d: %d\n", a, b, d);
    printf("Least common multiple of %d and %d: %d\n", a, b, m);
}

//Bai 10
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

int main () {
	int n;
	printf("Enter integer: ");
	scanf("%d", &n);
	printMinMaxDigits(n);
return 0;
}

