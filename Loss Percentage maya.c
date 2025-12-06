#include <stdio.h>
int main()
 {
    double cp,sp,loss_percent;
    scanf("%lf %lf", &cp, &sp);
    loss_percent = ((cp - sp) / cp) * 100;
    printf("%.2f
", loss_percent);
    return 0;
}
