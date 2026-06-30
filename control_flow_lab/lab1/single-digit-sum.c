#include <stdio.h>


int singleDigitSum(int num)
{
    while(num > 9)
    {
        int sum = 0;

        while(num != 0)
        {
            sum = sum + (num % 10);
            num = num / 10;
        }

        num = sum;
    }

    return num;
}

int main()
{
	int num;
	printf("Enter any positive Integer :: ");
	scanf("%d", &num);

	int res = singleDigitSum(num);

	printf("%d",res);

return 0;
}

int single_digit_sum(int a){
	int digit_sum = 0;
	while(a!=0)
	{
		digit_sum = digit_sum + (a%10);
		a = a/10;
	}
	return digit_sum;
	}
