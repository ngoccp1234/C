#include<stdio.h>
#include<stdlib.h>
int main(){
float namKinhNghiem, namLamViec, thuong;
int luong;
char choice;
{
	printf("so nam kinh nghiem la: \n");
	scanf("%f",&namKinhNghiem);
	printf("so nam lam viec la: \n");
	scanf("%f",&namLamViec);
if (namKinhNghiem == 0) luong = 0;

else if (namKinhNghiem > 0 && namKinhNghiem <= 0.5) luong = 3;
else if (namKinhNghiem >0.5 && namKinhNghiem <= 	2 ) luong = 7;
else if (namKinhNghiem > 2 && namKinhNghiem <= 5 ) luong = 10;
else if (namKinhNghiem >5) luong = 15;
if (namLamViec < 0.5) thuong = luong * 1 / 10;
else if (namLamViec >= 0.5 && namLamViec < 1) thuong = luong *2 /10;
else if (namLamViec >= 1 && namLamViec < 3) thuong = luong *5 /10;
else if (namLamViec >= 3 && namLamViec < 5) thuong = luong *8 /10;
else if (namLamViec >= 5 && namLamViec < 10) thuong = luong ;
else if (namLamViec > 10 ) thuong = luong *2 ;
	printf("tien thuong la: %.2f trieu\n",thuong);
	printf("ban co muon tiep tuc? (y/n)\n");
	scanf ("%s",choice);
if (choice == 'n' || choice == 'N');
	printf("goodbye!");
}

	
}
