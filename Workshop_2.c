//Bai 1

#include <stdio.h>

int main()
{
	int a,b;
	char op;
	
	printf("Enter Character: \n"); 
	scanf("%c", &op);
	printf("Enter Character: \n"); 
	scanf("%d%d", &a, &b);
	
	
	switch (op)
   {
     case '+':
         printf("%d + %d = %d", a, b, a + b);
         break;
         
     case '-':
         printf("%d - %d = %d", a, b, a - b);
         break;
         
     case '*':
         printf("%d * %d = %d", a, b, a * b);
         break;
         
	 case '/': 
         if(b == 0){
             printf("divided by 0\n");
         }else{
             printf("%d / %d = %.2f", a, b, (float)a / b);
         }
         break;
   
     default:
     printf("Operation failed %c!", op);
         break;
}


//Bai 2
	#include <stdio.h>
	#include <stdlib.h>
	
	int main()
	{
		long  pa=9000000, pd=3600000; 
		long n, tf,ic, ti;
		
		printf("IndependentS Number: "); scanf("%d", &n);
		printf("\n");
		
		printf("Yearly Income: "); scanf("%d",&ic);
		printf("____________________________________________________________________________________________________________________________\n");
		
		
		printf("Yearly Income: %d\n",ic);
		tf=12*(pa+n*pd);
		printf("Yearly tax free income: %d\n", tf);
		
		ti=ic-tf;
		
		if(ti<=0)
		{printf("Taxable Income: %d\n",ti);
		printf("Income Tax= 0\n"); return 0;}
		
		else if(ti<=5000000)
		{	printf("Taxable Income: %d\n",ti);
			printf("Income Tax: %d", ti/20);}
			
		else if(ti>=5000001 && ti<=10000000)
		{	printf("Taxable Income: %d\n",ti);
			printf("Income Tax: %d", ti*3/20);}
			
		else if(ti>=10000001 && ti<=18000000)
		{	printf("Taxable Income: %d\n",ti);
			printf("Income Tax: %d", ti/10);}
			
		else if(ti>18000000)
		{	printf("Taxable Income: %d\n",ti);
			printf("Income Tax: %d", ti/5);}
		
		return 0;
		
	}




//Bai 3

#include <stdio.h>

int main()
{
	int S=0;
	int x;
	while(x!=0){
		printf("Nhap x: "); scanf("%d", &x);
		if(x!=0)
		{S=S+x;}
		else
		{
			printf("Chon so khac 0!\n");
			return main;
		}
		 
	}
	{printf("Tong: %d\n", S);}
	return 0;
}


//Bai 4
#include <stdio.h>

void Swap(int *a, int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

int main()
{
	int x,y;
	printf("Nhap x, y: ");
	scanf("%d%d",&x,&y);
	if(x==0 && y==0)
	{printf("Please input value other than 0!");
	return main();}
	while(x!=0 && y!=0)
	{	
		printf("Before swap:\n X= %d; y=%d \n", x, y);	
		Swap(&x,&y);
		printf("After swap: \nX= %d; y=%d \n", x, y);	
		break;	
	}
}


//Bai 5
#include <stdio.h>
#include <string.h>

#define Enter 10
void main()
{
	
	int others = 0, vowels=0, consonants = 0;
	char A;
	printf("Input a string: ");
		while(A!=Enter)
		{
			A= getchar();
			if(('a'<=A && 'z'>=A) ||('A'<=A && 'Z'>=A))
			{
				switch(A)
				{
					case 'a':
					case 'e':
					case 'i':
					case 'o':
					case 'u':
					case 'A':
					case 'E':
					case 'I':
					case 'O':
					case 'U':
						vowels+=1;
						break;
					default:
						consonants +=1;
				}
			}
			else others+=1;
			
		}
		
		printf("vowels: %d \n", vowels);
		printf("consonants: %d \n", consonants);
		printf("others: %d \n", others-1);
		
	
}

//Bai 6
#include <stdio.h>

int main()
{
    int code;
    for (code = 0; code <256; code++)
    	printf("%6c | %6d | %6o | %6x \n", code, code, code, code); 
    return 0;
}

//Bai 7
#include <stdio.h>

int main()
{
    char c1, c2, c;
    int d;
    printf("Enter character 1: ");
    scanf("%c",&c1);
    fflush(stdin);
    printf("Enter character 2: ");
    scanf("%c",&c2);
    if (c1 > c2)
    {
        int t = c1; 
            c1 = c2; 
            c2 = t;
    }
    d = c2 - c1;
    printf("The distance between %c and %c: %d\n", c1, c2, d);
    printf("Char   Dec   Oct    Hex\n");
    for (c = c1; c <= c2; c++)
        printf("%3c%6d%6o%6x\n", c, c, c, c);
    return 0;
}
