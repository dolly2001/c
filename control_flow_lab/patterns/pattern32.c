#include <stdio.h>

int main()
{
    int row;

    printf("Enter rows :: ");
    scanf("%d", &row);

    for(int i = 1; i <= row; i++)
    {
        for(char ch = 'A' + (row - i); ch <= 'A' + row - 1; ch++)
        {
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}
