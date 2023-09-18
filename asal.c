#include <stdio.h>




int main() {
	
	
	
	int sayi;
	int i;
	printf("lutfen bir sayi giriniz : ");
	scanf("%d",&sayi);
	
	
	
	for(i=2;i<sayi;i++){
		
		if(sayi%i==0){
			printf("asal sayi degildir");
			break;
		}
		
		else if(sayi%i!=0){
			printf("sayi asal sayidir");
			break;
		}
		
		else  {
			printf("gecerli sayi giriniz !!");
		
		}
	}
	
	
	

    
    
    
    return 0;
}

