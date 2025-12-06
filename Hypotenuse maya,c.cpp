#include <stdio.h>

int main()
 {
    int x, y;
    double hypotenuse;
    scanf("%d %d", &x, &y);
    hypotenuse = sqrt((x * x) + (y * y));
    printf("%.2f", hypotenuse);
    return 0;
}
