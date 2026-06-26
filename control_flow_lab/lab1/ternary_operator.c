#include <stdio.h>
void main()
{
                int a,b,c,res,final_res;
		printf("Enter num1, num2, num3 :: ");
                scanf("%d%d%d", &a,&b,&c);

                res = a > b ? a : b;
                final_res = res > c ? res : c;

                printf("%d", final_res);
}
