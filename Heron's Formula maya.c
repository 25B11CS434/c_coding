#include <stdio.h>
int main()
 {
    int a, b, c;
    double s, area;
    scanf("%d %d %d", &a, &b, &c);
    s = (a + b + c) / 2.0;
    if (a + b > c && a + c > b && b + c > a) 
    {
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    } 
    else
    {
    area = 0.0;
    }
    printf("%.4f
", area);
    return 0;
}
