#include<stdio.h>
int main() {
	int mang[100], type, sophantu, vitri, giatri;
	do {
	printf("\nMENU\n");
    printf("1. Nhap Vao Mang\n");
    printf("2. Hien Thi Mang\n");
   	printf("3. Them Phan Tu\n");
    printf("4. Sua Phan Tu\n");
    printf("5. Xoa Phan Tu\n");
    printf("6. Thoat\n");
    printf("Ban Hay Nhap Lua Chon: ");
    scanf("%d", &type);
    switch (type){
    	case 1:
    	printf("Ban Hay Nhap So Phan Tu: ");
    	scanf("%d", &sophantu);
    	for(int i = 0; i < sophantu; i++){
    	printf("PhanTu[%d] = ", i);
    	scanf("%d", &mang[i]);
		}
    	break;
		case 2:
		printf("Mang Cua Ban La: ");
		for(int i = 0; i < sophantu; i++){
		printf("%2d", mang[i]);
		}
		printf("\n");
    	break;
    	case 3:
    	printf("Nhap Vi Tri Can Xoa (1-%d): ", sophantu);
        scanf("%d", &vitri);
        printf("Nhap Gia Tri: ");
        scanf("%d", &giatri);
        for (int i = sophantu; i >= vitri; i--) {
        mang[i] = mang[i - 1];
        }
    	mang[vitri - 1] = giatri;
        sophantu++;
        break;
        case 4:
    	printf("Nhap Vi Tri Can Xoa (1-%d): ", sophantu);
        scanf("%d", &vitri);
        printf("Nhap Gia Tri Moi: ");
        scanf("%d", &giatri);
        mang[vitri - 1] = giatri;
        break;
    	case 5:
    	printf("Nhap Vi Tri Can Xoa (1-%d): ", sophantu);
        scanf("%d", &vitri);
        for (int i = vitri - 1; i < sophantu - 1; i++) {
        mang[i] = mang[i + 1];
        }
        sophantu--;
    	break;
    	case 6:
    	printf("Thoat Chuong Trinh");
    	break;
	}
	}while (type != 6);
return 0;
}

