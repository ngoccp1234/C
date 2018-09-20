#include<stdio.h>
int main(){

int lt, as, th,c;
        float a, diem;
        char n,choice; 
    while(1){

        
        printf("Nhap diem thi ly thuyet:\n");
        scanf("%d", &lt);
        printf("Nhap diem thi asm:\n");
        scanf("%d", &as);
        printf("Nhap diem thi thuc hanh:\n");
        scanf("%d", &th);
        a = ((as + th) / 25) * 100;
        diem = ((lt * 10.0) + a) / 2;
        if (a < 40 || diem < 40){
		printf("duoc %.2f=> notpass\n", diem);}
        else if (diem >= 40 && diem < 65){
		
		printf("duoc %.2f=> tb\n", diem);
	}
        else if (diem >= 65 && diem < 75){
		printf("duoc %.2f=> kha\n", diem);
	}
        else if (diem >= 75){
		printf("duoc %.2f=> gioi\n", diem);
	}
        printf("ban co muon tiep tuc khong (y/n)?\n");
        scanf("%s",&c);
        if(c=='n')break;
    }

}
//if (lt<1 && lt>10){
//	printf("nhap sai vui long nhap lai")


