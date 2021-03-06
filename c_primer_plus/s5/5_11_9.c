#include <stdio.h>
void Temperatures(double F_value_random);
int main(void)
{
    double F_value; // 华氏温度

    printf("Enter a degrees Fahrenheit of random: ");
    while (scanf("%lf", &F_value) == 1)
    {
        Temperatures(F_value);

        printf("Enter 1 to re-execute the program, and enter q to exit the program: ");
    }
    
    return 0;
}

void Temperatures(double F_value_random)
{
    double con_st; // 中间转换变量

    con_st = 5.0 / 9.0 * (F_value_random - 32.0);  // 求摄氏温度
    printf("F: %.2f \tC: %.2f\t", F_value_random, con_st);
    con_st = con_st + 273.16; // 求开氏温度
    printf("K: %.2f\n", con_st);

}