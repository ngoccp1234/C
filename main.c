#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	for(i=0;i<100;i++){
		if (i%3) {
			printf("fizz\n");
		}
		else if (i%5){
			printf("buzz\n");
		}
		else if (i%3 && i%5){
			printf("fizz buzz\n");
		}
		else  {
			printf("%d\n",i);
		}
	}
	return 0;
}


//int congHaiSo (int a, int b){
//	return a + b;
//}
//int truHaiSo (int a, int b){
//	return a - b;
//}
//int nhanHaiSo (int a, int b){
//	return a * b;
//}
//float chiaHaiSo (int a, int b){
//	if (b==0){
//		printf ("khong chia duoc cho 0");
//		exit (-1);
//	}
//	return (float) a/b;
//}
//
//int main (){
//	int a,b,c;
//
//	int result;
//	printf("nhap so thu nhat: \n");
//	scanf("%d",&b);
//	printf("nhap so thu hai: \n");
//	scanf("%d",&c);
//	printf("--------may tinh--------\n");
//	printf("1.phep cong\n");
//	printf("2.phep tru\n");
//	printf("3.phep nhan\n");
//	printf("4.phep chia\n");
//	printf("Nhap lua chon cua ban: ");
//	scanf("%d",&a);
//	switch (a){
//		case 1:
//			result = congHaiSo (b,c);
//			break;
//		case 2:
//			result = truHaiSo (b,c);
//			break;
//		case 3:
//			result = nhanHaiSo (b,c);
//			break;
//		case 4:
//			result = chiaHaiSo (b,c);
//			break;
//		default:
//			printf("lua chon sai vui long chon lai tu 1-4");
//			break;
//	}
//	printf ("ket qua cua phep tinh la: %.2f", result);
//	return 0;
//	
//}

