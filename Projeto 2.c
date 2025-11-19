#include <stdio.h>

int main()

{

    float num1, num2, num3;

	printf("Digite a 1ª nota: ");

	scanf("%f", &num1);

	printf("A 1ª nota é: %0.2f\n", num1);

	printf("Digite a 2ª nota: ");

	scanf("%f", &num2);

	printf("A 2ª nota é: %0.2f\n", num2);

	printf("Digite a 3ª nota: ");

	scanf("%f", &num3);

	printf("A 3ª nota é: %0.2f\n", num3);

	if(num1 > 0 && num1<=10) {

		printf("A 1ª nota é valida.\n");

	}
	else {
		printf("A 1ª nota é invalida.\n");
	}

	if (num2 >0 && num2<=10 )
		printf("A 2ª nota é valida.\n");
	else {
		printf("A 2ª nota é invalida.\n");
	}

	if (num3 >0 && num3<=10 )
		printf("A 3ª nota é valida.\n");
	else {
		printf("A 3ª nota é invalida.\n");
	}


	return 0;

}