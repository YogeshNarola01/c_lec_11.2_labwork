/*
Q.1 Write a Program to find the reverse of a 1D array using a Pointers.
For example,
Input:
Enter the array's size: 5


Enter array elements:
a[0] = 5
a[1] = 9
a[2] = 4
a[3] = 7
a[4] = 3

Output:
Reversed array elements:
3, 7, 4, 9, 5
*/

#include<stdio.h>
#include<stdio.h>

void reverce(){
	
}

void main(){
	int i,n;
	int a[50];
	int *ptr;
	
	ptr= &a[i];
	
	printf("Enter array size : ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("enter a[%d]:- ",i);
		scanf("%d",&ptr[i]);
	}
	
	for(i=n-1; i>=0; i--){
		printf("enter : %d \n",ptr[i]);
	}	
}
