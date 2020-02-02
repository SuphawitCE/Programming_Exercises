#include<stdio.h>


int main(){
	int input, max = 0;
	//int m = 0;
	scanf("%d", &input);
	int h[input];
	//int i,j,k;
	for(int i = 0;i < input;++i)
	{
		scanf("%d", &h[i]);
	    if(h[i] >= max)	max = h[i];   
	}
	// after loop max = h[i] not 0
	
	for(int i = 0;i < max;++i)
	{
		for(int j = 0;j < input;++j)
		{
			for(int k = 0;k < h[j];++k)	
				i + k == max - 1 ? printf("/") : printf(" ");
			for(int k = h[j]-1; k >= 0;--k)	
				i + k == max - 1 ? printf("\\") : printf(" ");
	    }
		printf("\n");
	}
	return 0;
}
