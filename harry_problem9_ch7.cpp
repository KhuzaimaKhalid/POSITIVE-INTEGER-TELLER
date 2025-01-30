#include<stdio.h>

int count(int a[], int n);

int main()
{
	printf("\t POSITIVE INTEGER TELLER \n");
	int num;
	printf("Enter no of elements: ");
	scanf("%d", &num);
	int arr[num];
	for(int i = 0; i < num; i++){
		printf("\nEnter %d number = ",i+1);
		scanf("%d", &arr[i]);
	}
	printf("The no of positive integers is %d \n", count(arr,num));
	return 0;
}
int count(int a[], int n){
 int positive = 0;
 for(int i = 0; i < n; i++){
 	if(a[i] > 0){
 		positive++;
	 }
 }
	return positive;
}
