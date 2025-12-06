#include <stdio.h>
int main()
 {
    int radius;
    float pi = 3.14;
    float area, perimeter;
    scanf("%d", &radius);
    area = pi * radius * radius;
    perimeter = 2 * pi * radius;
    printf("%.2f
", area);
    printf("%.2f
", perimeter);
    return 0;
}
