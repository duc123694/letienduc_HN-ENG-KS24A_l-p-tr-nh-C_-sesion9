#include<stdio.h>
int main(){
	int currentLength=100,index,value;
	int arr[100];
if (currentLength <= 100) {
   printf("Nhap vi tri muon them: ");
   scanf("%d", &index);
   if (index >= 0 && index <= currentLength) {
        printf("Nhap gia tri can them: ");
		scanf("%d", &value);
        for (int i = currentLength; i > index; i--) {
            arr[i] = arr[i - 1];
            }
        arr[index] = value;
        currentLength++;
        printf("Mang sau khi nhap la: ");
        for (int i=0;i<=currentLength;i++){
            	printf("%d",arr[i]);
			}
     } else {
            printf("Vi trí không hop ly!\n");
         }
	}
	return 0;
}
