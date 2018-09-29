
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int max = 3;
typedef struct {
    char masv[10];
    char tensv[50];
    char sdt[50];
} danhsachsv;
void themsv(int i, danhsachsv sv[]) {
    printf("Vui long nhap ma sinh vien:\n");
    while (1 == 1) {
        fgetc(stdin);
        scanf("%s",sv[i].masv);
        if (strlen(sv[i].masv) != 5) {
            printf("ma sinh vien khong duoc dai hoac ngan hon 5 ky tu!\n vui long nhap lai:");
        } else break;
    }
    fgetc(stdin);
    printf("Vui long nhap ten sinh vien: \n");
    scanf("%[^\n]", sv[i].tensv);
    fgetc(stdin);
    printf("Vui long nhap so dien thoai sinh vien: \n");
    scanf("%s", sv[i].sdt);
    fgetc(stdin);
}
void hiensv(int dem, danhsachsv sv[]) {
    int j;
    printf("-%-20s|%-20s|%s", "Ma sinh vien", "Ten sinh vien", "So dien thoai\n");
    for (j = 0; j < dem; j++) {
        printf("\n-%-18s|%-18s|%s", sv[j].masv, sv[j].tensv, sv[j].sdt);
    }
}
void luusv(int i, danhsachsv sv[]) {
    int j;
    FILE *fp = fopen("danhsachsinhvien.txt", "w");
    fprintf(fp, "-%-20s|%-20s|%s", "Ma sinh vien", "Ten sinh vien", "So dien thoai\n");
    for (j = 0; j < i; j++) {
        fprintf(fp, "\n-%-18s|%-18s|%s", sv[j].masv, sv[j].tensv, sv[j].sdt);
    }
    fclose(fp);
}
void docsv() {
    FILE *f = fopen("danhsachsinhvien.txt", "r");
    int bufferSize = 225;
    char buffer[bufferSize];
    while (fgets(buffer, bufferSize, f) != NULL) {
        printf("%s", buffer);
    }
}
int main() {
    int choice;
    int i=0;
    danhsachsv sv[10];  
    while (1 == 1) {
    	printf("-----Vui long chon mot trong cac lua chon sau:-----\n");
  	 	printf("1.Them 1 sinh vien. \n");
   		printf("2.Hien thi danh sach sinh vien. \n");
	  	printf("3.Luu danh sach sinh vien ra file. . \n");
	    printf("4.doc danh sach sinh vien tu file\n");
   		printf("5.Thoat chuong trinh. \n");
  		printf("--------------------------\n");
        printf("Vui long nhap lua chon cua ban: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("---Them sinh vien.---\n");
                themsv(i, sv);
                i++;
                break;
            case 2:
                printf("day la danh sach sinh vien.\n");
                hiensv(i, sv);
                break;
            case 3:
                printf("Danh sach sinh vien da duoc luu vao file (danhsachsinhvien.txt)\n ");
                luusv(i, sv);
                break;
            case 4:
                printf("day la danh sach sinh vien duoc doc tu file.\n");
                docsv();
                break;
        }
        if (choice == 5) {
            printf("Tam Biet!");
            break;
        }
    }
    return 0;
}
