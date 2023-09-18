#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,x;
	int arr[5];
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d%d",&n,&x);
	    arr[i]=n*x;
	    if(arr[i]>=10000 & arr[i]<=99999)
	       printf("yes\n");
	    else 
	       printf("no\n");
	}
	return 0;
}

