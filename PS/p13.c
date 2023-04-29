#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              	                  // Reading input from STDIN
       // Writing output to STDOUT
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<num;j++)
		{
			if(i==0||i+j==num-1||i==num-1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

