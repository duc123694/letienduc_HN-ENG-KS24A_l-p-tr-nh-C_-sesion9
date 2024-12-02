#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int n,index;
	printf("Moi ban nhap vi tri phan tu muon sua: ");
	scanf("%d",&index);
	printf("Moi ban nhap so thay the: ");
	scanf("%d",&n);
	for(int i=0;i<5;i++){
		arr[index-1]=n;
	}
	for(int i=0;i<5;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
