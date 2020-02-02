#include<stdio.h>
#include<conio.h>

void main()
{
	char weather,cool;
	for(int i =0;i<6;i++){
	printf("Weather is good ? : ");
	weather = getche();
	
	if(weather == 'Y' || weather == 'y')
		printf("\nCool enough? : ");
		cool = getche();
		
	if(weather == 'Y' || weather == 'y')
	{
		printf("\nGo out in the yard.");
		if(cool=='Y' || cool=='y')	printf("Sit in the sun ");
		else	printf("Sit in the shade ");
	}
	else	printf("\nSit indoors");
	
	printf("\nand to drink a cup of coffee\n\n");
	
}
}
