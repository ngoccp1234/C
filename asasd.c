#include <stdio.h>
#include <stdlib.h>
//tong diem thi ly thuyet la 10
//tong diem thi thuc hanh la 25
//tong diem trung binh mon = (% diem ly thuyet + % diem thuc hanh)/2
float tinhDiemTrungBinhMonHoc (int diemLyThuyet, int diemThucHanh){
	return ((float) diemLyThuyet /10 * 100 +(float) diemThucHanh / 25*100)/2;
}
//diem trung binh < 40%: not pass
//diem trung binh 40 - 65: trung binh
// diem trung binh 65 - 75: kha
//diem trung binh > 75: gioi
void inKetQuaHocTap (float diemTrungBinhMonHoc){
	printf("diem trung binh mon hoc: %2f\n",diemTrungBinhMonHoc);
	printf("ket qua hoc tap cua ban la: \n");
}
	if (diemTrungBinhMonHoc < 40) {
		printf("not pass\n");
	}
	else if
	 (diemTrungBinhMonhoc >= 40 && diemTrungBinhMonHoc < 65) {
		printf ("trung binh\n");
	}
	else if
	 (diemTrungBinhMonHoc >= 65 && diemTrungBinhMonHoc < 75){
		printf("kha\n");
	}
	else 
	{
		printf ("gioi\n");
	}
	
	

//bai tap tinh diem trung binh mon
int main(){
	char luaChon;
	while (1==1) {
		int diemLyThuyet, diemThithucHanh, diemBaiTapLon;
		printf("nhap diem ly thuyet \n");
		scanf("%d",&diemLyThuyet);
		printf("nhap diem thuc hanh \n");
		scanf("%d",&diemThiThucHanh);
		printf("nhap diem assigment: \n");
		scanf ("%d",&diembaitaplon);
		
		int diemthuchanh = diemThiThucHanh + diemBaiTapLon;
		float diemTrungBinhMonHoc = tinhDiemTrungBinhMonHoc(diemlythuyet, diemthuchanh);
		inketquahctap(diemtrungbinhmonhoc);
		printf("ban co muon tiep tuc khong? (y/n)\n");
		scanf("%s",&luachon);
		if (luachon == 'n' || luachon = 'N'){
			printf ("hen gap ban o mon sau");
			break;
		}
	}
	return 0;
}

