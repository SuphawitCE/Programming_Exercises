#include <stdio.h>
int main(){
	printf("-------------------menu---------------------\n");
	int L,U,E;
	int sum=0;
	printf("plese enter lower bound : ");
	scanf("%d",&L);
	printf("plese enter upper bound : ");
	scanf("%d",&U);
	printf("==================================================\n");
	printf(" lower = %d upper = %d \n",L,U);
	printf("==================================================\n");
	E=U-L+1;
	int s[E];
	int i;
	for(i=L;i<=U;i++){
		printf("**press 0 if you do not know the number in this position.**");
		printf("\n plese enter number [A%d] : ",L++);
		scanf("%d",&s[i]);
		if(s[i]==0) sum++;
	}
	for(i=1;i<sum+1;i++){
		printf("======================================================\n");
		int A,B,C,a1,a2,a3,a4;
		printf("choice \n 1 to + \n 2 to -\n 3 to *\n 4 to / \n ");
		printf("=======================================================\n");
		printf("input your choice\n");
		scanf("%d",&C);
		printf("How much position do you need ? (a?):\n");
		scanf("%d",&A);
		printf("A [%d]=%d\n",A,s[A]);
		printf("How much position do you need ? (a?):\n");
		scanf("%d",&B);
		printf("A [%d]=%d\n",B,s[B]);
		a1=s[A]+s[B];
		a2=s[A]-s[B];
		a3=s[A]*s[B];
		a4=s[A]/s[B];
		switch(C)
		{
		case 1 :printf("%d + %d = %d \n",s[A],s[B],a1);
		break;
		case 2 :printf("%d - %d = %d \n",s[A],s[B],a2);
		break;
		case 3 :printf("%d * %d = %d \n",s[A],s[B],a3);
		break;
		case 4 :printf("%d / %d = %d \n",s[A],s[B],a4);
		break;
		default: printf("Eror!!!!!");
		}
		printf("====================================================\n");
	int p=0;
	if(C==1)
	{
		printf(" where to store(a?):");
		scanf("%d",&p);
		s[p]=a1;
	}
		if(C==2)
	{
		printf(" where to store(a?):");
		scanf("%d",&p);
		s[p]=a2;
	}
		if(C==3)
	{
		printf(" where to store(a?):");
		scanf("%d",&p);
		s[p]=a3;
	}
		if(C==4)
	{
		printf(" where to store(a?):");
		scanf("%d",&p);
		s[p]=a4;
	}
}
   printf("====================================================\n");
	for(i=L;i<=U;i++){
		printf(" %2d : %4d :address %p \n",i,s[i],s[i]);
	}
}

	printf("====================================================\n");
	printf("..................................end.......................................");
	

}
