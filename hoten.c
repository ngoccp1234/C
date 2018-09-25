#include <stdio.h>
#include <string.h>

void noiHoVaTen(char ho[], char ten[]) {
	int dodaiho = strlen(ho);
    int dodaiten = strlen(ten);
    int tong = dodaiho + dodaiten; 
    printf("Do dai cua ca ho va ten la %d\n", tong);
    tong++;
    char hovaten[tong];
    strcpy(hovaten, ho);
    strcat(hovaten, " ");
    strcat(hovaten, ten);
    printf("ho va ten la:%s", hovaten);
}

int main() {

    char ho[10], ten[10];
    
    	printf("Vui long nhap ho cua ban: \n");
    	fgets(ho, 10, stdin);
    	puts(ho);
    	if (!strchr(ho, '\n')){
    while (fgetc(stdin) != '\n');
		}
  	printf("Vui long nhap ten cua ban:\n ");
  	fgets(ten, 10, stdin);
  	puts (ten);
   noiHoVaTen(ho, ten);
    return 0;
}
