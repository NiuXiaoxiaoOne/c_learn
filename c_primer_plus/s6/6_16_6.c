#include <stdio.h>
int main(void)
{
    long digit_lower; // 输入的下限
    long digit_upper; // 输入的上限
    long initialize; // for循环初始化
    long square, cube;

    printf("please input random lower of the digit: ");
    scanf("%ld", &digit_lower);
    printf("please input random upper of the digit: ");
    scanf("%ld", &digit_upper);

    printf("digit\t\tsquare\t\tcube\n");
    for (initialize = digit_lower; initialize <= digit_upper; initialize++)
    {
        square = initialize * initialize;
        cube = initialize * square;
        printf("%ld\t\t%ld\t\t%ld", initialize, square, cube);
        printf("\n");
    }

    return 0;
}