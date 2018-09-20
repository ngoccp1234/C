#include<stdio.h>
#include<stdlib.h>
int main(){
	int sizeOfArray;

	
	while (1 == 1){
		printf("nhap size cua mang\n");
		scanf("%d",&sizeOfArray);
		if (sizeOfArray < 5 ){
			printf("size cua mang phai lon hon 5\n");
			}
		else if (sizeOfArray > 10 ){
			printf("size cua mang phai nho hon 10\n");}
		else {
		break;
		}
			int numberArray[sizeOfArray];
	
        	int i;
	    	for (i = 0; i < sizeOfArray; i++){
	    		printf("nhap gia tri cho index thu %d\n",i);
	    		scanf("%d",&numberArray[i]);
	    	}
			for (i = 0; i < sizeOfArray; i++){
		   		printf("phan tu thu %d co gia tri la %d\n",i,numberArray[i]);
			}
	}
		return 0;

	}

	
	
	
	

	
	

