#include "calc.h"

int main(void)
{
	int firstNO, secondNO, result;
	char operator;
	
	printf("\tBasic Calculator\n\n");
	scanf("%d %c %d", &firstNO, &operator, &secondNO);

	if (firstNO && secondNO)
	{
		switch (operator)
		{
		case '*':
			result = firstNO * secondNO;
			break;
		case 'x':
			result = firstNO * secondNO;
			break;
		case '+':
			result = firstNO + secondNO;
			break;
		case '-':
			result = firstNO - secondNO;
			break;
		case '/':
			result = firstNO / secondNO;
			break;
		case '%':
			result = firstNO % secondNO;
			break;
		case '^':
			result = firstNO ^ secondNO;
			break;
		
		default:
			break;
		}
	}

	printf("%d %c %d = %d \n\n", firstNO, operator, secondNO, result);

}

