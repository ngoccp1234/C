#include <stdio.h>
#include <string.h>

void noiHoVaTen(char ho[], char ten[]) {
	int dodaiho = strlen(ho);
    int dodaiten = strlen(ten);
    int tong = dodaiho + dodaiten;
    printf("Do dai cua ho la: %d\n", strlen(ho));
    printf("Do dai cua ten la: %d\n", strlen(ten));
    
    printf("Do dai cua ca ho va ten la %d\n", tong);
    tong++;
    char hovaten[tong];
    strcat(hovaten, ho);
    strcat(hovaten, " ");
    strcat(hovaten, ten);
    printf("ho va ten la:%s", hovaten);
}

int main() {

    char ho[50], ten[50];
    while(1==1){
    	printf("Vui long nhap ho cua ban: \n");
    	gets(ho);
    	if (strlen(ho) > 50){
    		printf (" ho  qua dai vui long nhap lai\n");
		}
		else
		break;
	}
  
  while(1==1){
  	printf("Vui long nhap ten cua ban:\n ");
  	gets(ten);
    	if (strlen(ten) > 50){
    		printf (" ten qua dai vui long nhap lai\n");
    		
		}
		else
		break;
    
    }
    // ki?m tra d? dài tên.
   noiHoVaTen(ho, ten);
    return 0;
}
