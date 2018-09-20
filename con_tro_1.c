#include<stdio.h>
void hoandoi2so(int *conTroCuaC, int *conTroCuaD){
	int bientam = *conTroCuaC;
	 *conTroCuaC = *conTroCuaD;
	 *conTroCuaD = bientam;
	 printf("sau khi hoan doi, tai ham hoandoi2so");
	 printf("gia tri tai vung nho cua con tro C la: %d \n",*conTroCuaC);
	 printf("gia tri tai vung nho cua con tro D la: %d \n",*conTroCuaD);
}
int main(){
	int *conTroCuaC;
	int *conTroCuaD;
	int c = 20;
	int d = 30;
	conTroCuaC = &c;
	conTroCuaD = &d;
	printf("so thu nhat la: %d\n",c);
	printf("so thu hai la: %d\n",d);
	hoandoi2so(conTroCuaC,conTroCuaD);
	printf("gia tri cua hai so C va D tai ham main: \n");
	printf("gia tri cua so thu nhat sau khi hoan doi: %d \n",c);
	printf("gia tri cua so thu hai sau khi hoan doi: %d \n",d);
	return 0;
	
}
