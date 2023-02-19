#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//Global Value
	int d,m,y;
	int x, y, z, a, b, total;
	int count = 1;
	char c1,c2,c,t;
	
	int opt, opt2, opt3, opt4,n;

//Random Program
int RandomI()
{
	srand(time(NULL));
	int random = 1+rand()%6;
	return random;
}


//Dice Thrower
void DiceThrower()
{
		do
		{
		printf("Input total: ");
		scanf("%d", &total);
		
		if(total < 2 || total >12) printf("Total must be in [2;12]! \n\n");
		} while(total < 2 || total >12);
	
		do
		{
			x=RandomI();
			for(a = 2; a<=20000; a++)
		for(b=2; b<=20000; b++){}
				
		y=RandomI();
			for(a = 2; a<=20000; a++)
		for(b=2; b<=20000; b++){}
	
		z=x+y;
		
		printf("Result of throw %d:  %d + %d\n", count, x, y);
		count++;
		
		}
		while (z!=total);
		count -=1;
		printf("You got your total in %d throws!\n\n\n", count);
}


//Ball Lottery Program
void BallLottery()
{
		do
	{
		printf("Input total: ");
		scanf("%d", &total);
		
		if(total < 1 || total >11) printf("Total must be in [1;11]! \n\n");
	} while(total < 1 || total >11);
	
	do
	{
		x=RandomI();
			for(a = 1; a<=20000; a++)
		for(b=1; b<=20000; b++){}
				
		y=RandomI();
			for(a = 1; a<=20000; a++)
		for(b=1; b<=20000; b++){}
	
		z=x+y;
		
		printf("Result of pick %d:  %d + %d\n", count, x, y);
		count++;
		
	}
	while (z!=total);
	count -=1;
	printf("You got your total in %d picks!\n", count);
}


//Datecheck Program
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


//Data Program
void data(){
	char c1,c2,c,t;
	printf("Enter character 1: ");
    			scanf("%c",&c1);
    			if(c1 == '\n')
    scanf("%c", &c1);
    			fflush(stdin);   
				  
    printf("Enter character 2: ");
    			scanf("%c",&c2);  
    			if ( c1 > c2 )
    			{    	
       			 t = c1; 
        		c1 = c2; 
        		c2 = t;
    }
    for( c = c1; c <= c2; c++)
	{
        printf("%c: %d, %xh\n", c, c, c);
    }
}


//Equation Program
void Equation()
{
	float a, b, c, d, x, y;
	printf("\nQuadratic equation: ax^2 + bx + c = 0 (a different from 0)\n");
	printf("\nPlease enter coefficient a, b, c: ");
	scanf("%f%f%f", &a, &b, &c);
	if (a != 0) {
		d = b*b - 4*a*c;
		if (d == 0)
			printf("\nEquation has double solution x1 = x2 = %f\n", -b/(2*a));
		else if ( d >= 0)
			printf("\nEquation has two real solutions: x1 = %f, x2 = %f\n", (-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a));
		else printf("\nEquation has no solution!\n");
	}
	else printf("\nWrong condition of a!\n");
}


//Bank Program
void bank() {
	float x, y, z, m;
	do {
	printf("\nEnter your deposit: ");
	scanf("%f", &x);
    }
    while (x <= 0);
	do {
	printf("\nEnter yearly rate (between 0.1 and 1.0): ");
	scanf("%f", &y);
    }
    while (y <= 0 || y > 1);
    do {
	printf("\nEnter number of year: ");
	scanf("%f", &z);
    }
    while (z <= 0);  
    m = x*pow(1+y,z);
    printf("\nYour amount after this duration: %f\n", m); 
}

int main()
{
	printf("WORKSHOP5_DA5LA6_ PHUONG_TRAN \n");
	
	//Full Programm
	printf("==============================\n");
	printf(" 1 | Dice Thrower \n 2 | Ball Lottery \n 3 | Program using Menu (a) \n 4 | Program using menu (b)! \n");
	printf("==============================\n \n");
	printf("\n Input program number: "); scanf("%d", &opt); printf("\n\n");
	
	switch(opt)
	{
	//program1
	case 1: 
		DiceThrower();
		break;
	
	
	//Program2	
	case 2:
		BallLottery();
		break;
	
	
	//Program 3
	case 3:
			printf("A new program \n");
	printf("==============================\n\n");
	printf("1 | Processing date data \n");
	printf("2 | Character data \n");
	printf("3 | Quit the program \n \n");
	printf("==============================\n\n");
	
	printf("Select the type program you want: ");
	scanf("%d",&opt3);

		switch(opt3)
		{
			
		case 1: 
			printf("Input day: "); scanf("%d",&d);
		printf("Input month: "); scanf("%d",&m);
		printf("Input year: "); scanf("%d",&y); 

		if(DateCheck() == 1)
			printf("Valid date");
		else printf("Invalid date!"); 
	
	
			break;
	
	
	
		case 2: 
				
			data();
			break;
	
	
		
		case 3: 
			return main();
			break;
			
		default:
			printf("Input the right program number!");
			break;
		}

		break;
	
	
	//program 4	
	case 4: 
		
			printf("A last program! \n");
	printf("==============================\n\n");
	printf("1 | Equation \n");
	printf("2 | bank \n");
	printf("3 | Quit the program \n \n");
	printf("==============================\n\n");
	
	printf("Select the type program you want: ");
	scanf("%d",&opt4);

		switch(opt4)
		{
			case 1: 
				Equation();
				break;
	
			case 2: 
				bank();
				break;
		
			case 3: 
				break;
}
		break;
		
	default:
		printf("please insert right number!"); return 0; break;
	
	}
	
	
	
	//Asking Button to use more or quit!
		printf("\n Using other program or quit? \n 1 | YES \n 2 | NO \n\n");
		printf("Input Number: ");scanf("%d",&opt2);
		switch(opt2)
		{
			case 1:
				printf("\n");
				return main(); break;
				
			case 2: 
			return 0;
				break;
				
			default:
				printf("please insert right number!"); return 0; break;
		}
}
