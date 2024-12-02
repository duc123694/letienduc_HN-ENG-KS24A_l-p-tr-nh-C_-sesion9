#include<stdio.h>
#define MAX_SIZE 100
int main(){
	int arr[MAX_SIZE];
	int curentLength=0;
	int index,value,choice;
	while(1){
		printf("\nMENU\n");
		printf("1.Nhap so phan tu can nhap va gia tri cac phan tu\n");
		printf("2.In ra gia tri cac phan tu dang quan ly\n");
		printf("3.In ra phan tu chan va tinh tong \n");
		printf("4.In ra gia tri lon nhat va gia tri nho nhat \n");
		printf("5.In ra so nguyen to va tinh tong\n");
		printf("6.Thong ke so lan xuat hien cua phan tu\n");
		printf("7.Them phan tu vao vi tri\n");
		printf("8.Thoat\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				 printf("Moi ban nhap so luong phan tu: ");
                scanf("%d", &curentLength);
                for (int i = 0; i < curentLength; i++) {
                    printf("Nhap phan tu thu %d la: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;

			case 2:
				printf("Mang hien tai la ");
				for(int i=0;i<curentLength;i++){
					printf("%d",arr[i]);
				}
				printf("\n");
				break;
			case 3:
				{
				printf("Cac phan tu chan la: \n");
				for(int i=0;i<curentLength;i++){
					if(arr[i]%2==0){
						printf("%d",i);
					}
				}
				int sum=0;
				for(int i=0;i<curentLength;i++){
					if(arr[i]%2==0){
						sum+=arr[i];
					}
					}
					printf("Tong cac so chan la %d \n",sum);
				}
				break;
			case 4:
				if (curentLength > 0) {
                    int max = arr[0], min = arr[0];
                    for (int i = 1; i < curentLength; i++) {
                        if (arr[i] > max) max = arr[i];
                        if (arr[i] < min) min = arr[i];
                    }
                    printf("Lon nhat: %d, Nho nhat: %d\n", max, min);
                }
                break;
			case 5:
			 {
                    int sum_primes = 0;
                    printf("Cac so nguyen to co trong mang la: ");
                    for (int i = 0; i < curentLength; i++) {
                        int is_prime = 1;
                        for (int j = 2; j <= arr[i] / 2; j++) {
                            if (arr[i] % j == 0) {
                                is_prime = 0;
                                break;
                            }
                        }
                        if (is_prime && arr[i] > 1) {
                            printf("%d ", arr[i]);
                            sum_primes += arr[i];
                        }
                    }
                    printf("\nTong cua cac so nguyen to la: %d\n", sum_primes);
                }
                break;
			case 6:
				{
				printf("Nhap phan tu can thong ke: ");
                scanf("%d", &value);
                int count = 0;
                for (int i = 0; i < curentLength; i++) {
                    if (arr[i] == value) count++;
                }
                printf("So %d xuat hien %d lan.\n", value, count);
            }
                break;
			case 7:
				{
				printf("Moi nhap vi tri muon them vao: ");
				scanf("%d",&value);
				if(value>=0&&value<=curentLength){
					printf("Moi nhap phan tu muon them vao: ");
				    scanf("%d",&index);
				    for(int i = curentLength; i > index; i--){
				    	arr[i] = arr[i - 1];
					}
					arr[index] = value;
                    curentLength++;
					
				}
				printf("Mang moi sau khi them la ");
				for(int i=0;i < curentLength;i++){
					printf("%d ",arr[i]);
				}
			}
				break;
			case 8:
                printf("Thoat chuong trinh.\n");
                return 0;
            default:
                printf("Lua chon k hop le.Vui long thu lai\n");
				
				
		}
	}
	return 0;
}
