#include<stdio.h>
#include<conio.h>
// prog414
void main()
{
	int day;
	printf("break statement [break out when day == 3 ]\n");
	for(day=1;day<8;day++){
		if(day==3) break;
			printf("%d	", day );
		if(day==2)	printf("%d	%d	%d	%d", 4,5,6,7);

	}
	//for(int r=4;r<8;++r)		printf("%d	", r);
	printf("\n\ncontinue statement [skip when day == 3 ]\n");
	for(day =1;day<8;day++){
		if(day==3)	continue;
			printf("%d	", day );
	}
	
	printf("\n\n");
}
