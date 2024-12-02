#include<stdio.h>
int main(){
	int arr[20]={1,2,7,3,4,5};
	int index,n;
	printf("Moi ban nhap vi tri can : ");
	scanf("%d",&n);
	index = n - 1;
	for(int i=index;i<5;i++){
		arr[i]=arr[i+1];
	}
	for(int i=0;i<5;i++){
		printf("%d",arr[i]);
	}
	
	
	return 0;
}
