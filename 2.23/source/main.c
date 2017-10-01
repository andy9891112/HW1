#include <stdlib.h>
#include <stdio.h>

int main(void){

	int num1, num2, num3;
	printf("叫块3计(ㄒ:6 5 2):");
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 > num2 && num1 > num3){
		printf("程计:%d\n", num1);
	}
	if (num2 > num1 && num2 > num3){
		printf("程计:%d\n", num2);
	}
	if (num3 > num2 && num3 > num1){
		printf("程计:%d\n", num3);
	}
	if (num1 < num2 && num1 < num3){
		printf("程计:%d\n", num1);
	}
	if (num2 < num1&& num2 < num3){
		printf("程计:%d\n", num2);
	}
	if (num3 < num2 && num3 < num1){
		printf("程计:%d\n", num3);
	}
	system("pause");
	return 0;

}

	
	