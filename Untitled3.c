#include<stdio.h>
#include<stdlib.h>
int congHaiSo (int a, int b){
return a+b;
}
int truHaiSo (int a, int b){
return a-b;
}
int nhanHaiSo (int a, int b){
return a*b;
}
float chiaHaiSo (int a, int b){
if (b==0){
printf("khong chia duoc cho 0");
exit(-1);
return (float) a/b;
}

}
int main (){
int choice, a,b;

printf("----may tinh-----\n");
printf("1.phep cong\n");
printf("2.phep tru\n");
printf("3.phep nhan\n");
printf("4.phep chia\n");
printf("nhap lua chon cua ban\n");
scanf("%d",&choice);
printf("--------------------\n");
printf("moi ban nhap so thu nhat: \n");
scanf("%d",&a);
printf("moi ban nhap so thu hai: \n");
scanf("%d",&b);
switch (choice){
case 1:
	printf("tong hai so %d va %d la: %d\n",a,b,congHaiSo(a,b));
	break;
case 2:
	printf("hieu hai so %d va %d la: %d\n",a,b,truHaiSo(a,b));
	break;
	case 3:
	printf("tich hai so %d va %d la: %d\n",a,b,nhanHaiSo(a,b));
	break;
	case 4:
	printf("thuong hai so %d va %d la: %.2f\n",a,b,chiaHaiSo(a,b));
	break;
	default:
	printf("lua chon sai vui long chon lai tu 1-4\n");
	break;
}
return 0;

}

