#include <stdio.h>
#include <stdlib.h>
int main (){
int *p; // khai bao bien con tro la 'p'
int a = 10; //khai bao bien int co gia tri = 10
int b = 99; //khai bao bien int co gia tri = 99
p = &a; // tro con tro pointer den dia chi bo nho cua bien a
printf("gia tri cua con tro la %d\n", *p); // in ra gia tri cua con tro p
p = &b; //tro con tro pointer den dia chi bo nho cua bien b
printf("gia tri cua con tro la %d\n", *p); //in ra gia tri cua con tro p
*p = 50; // thay doi gia tri cua con tro p thanh 50 (thay doi gia tri bien b)
int arrayInt[5] = {20, 50, 70, 10, 25};
//arrayInt [0] = 20
//arrayInt [1] = 50
//arrayInt [2] = 70
//arrayInt [3] = 10
//arrayInt [4] = 25
p = &arrayInt[0];
*p = 100;
p++;
*p = 200;
printf ("gia tri phan tu 2: %d", arrayInt[1]);
return 0;
} 
// & la vi tri bo nho
// * la gia tri trong do
