	#include<stdio.h>
	int main()
	{
	int i,j,T,K,N,sum=0;
	short A,B;
	scanf("%d",&T);
	for(i=0;i<15,i<T;i++)
	{
	scanf("%d",&N);
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&K);
	for(j=1;j<=N;j++)
	{
	if(j%A==0&&j%B!=0)
	sum+=1;
	if(j%A!=0&&j%B==0)
	sum+=1;
	}
	
	if(sum>=K)
	printf("Win");
	else
	printf("Lose");
	return 0;
    }
}}
