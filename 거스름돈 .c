#include<stdio.h>

int coinChange( int m)
{
	
	int ff=0;  
	int oo;
	int ftft; 
	
	
	ff=m/500;
	printf("500�� : %d�� ",ff);
	
	
	m=m%500; //1700%500 ==> m is 200
	
	
	oo =m/100;

	printf("100�� : %d�� ",oo);
	
	m=m%100;
		
	ftft = m/50;
	
	printf("50�� : %d�� ",ftft);
	
	m=m%50;
		
	
	int tt = m/10;
	
	printf("10�� : %d�� ",tt);
	
	
	
	
	return 0;
} 






int  main()
{
  
coinChange(1700);


	
	return 0;
}
