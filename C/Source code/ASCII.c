// date created 22.4.28

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
	int key, loop=1;
	printf("키 아스키코드값 구하기 (응근 유용)\n");
	printf("Ctrl + C를 두번 연속으로 누르면 종료됩니다. ");
	
	while(1) {
		key=getch();
		printf("\n\n%d. '%c' : %d ", loop, key, key);
		
		if(key==3) {
			key=getch();
			if(key==3) {
				printf("\n\n");
				printf("프로그램을 마칩니다. \n");
				system("pause"); 
				
				return 0;
			}
			printf("\n\n%d. '%c' : %d ", loop, key, key);
			
		}
		loop++;
		
	}
	
}
