#include <stdio.h>
int main()
 {
    int speed_kmh;
    scanf("%d", &speed_kmh);
    double speed_ms = speed_kmh * (5.0 / 18.0);
    printf("%.2f
", speed_ms);
    return 0;
}
