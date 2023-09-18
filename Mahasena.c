#include <stdio.h>

int main() {
	int n,w,count=0,count1=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	scanf("%d",&w);
	if (w%2==0)
	   count++;
	else
	   count1++;
	}
	if(count>count1)
	   printf("READY FOR BATTLE");
	else 
	   printf("NOT READY");

	return 0;
}

