#include <stdio.h>
int main()
 {
    double cp, sp, profit_percent;
    scanf("%lf %lf",&cp,&sp);
    profit_percent = ((sp - cp) / cp) * 100;
    printf("%.2f
", profit_percent);
    return 0;
}
