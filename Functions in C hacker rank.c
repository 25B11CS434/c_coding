#include <stdio.h>
int max(int x, int y)
 {
    return (x > y) ? x : y;
}
int max_of_four(int a, int b, int c, int d)
 {
    int m1 = max(a, b);
    int m2 = max(c, d);
    return max(m1, m2);
}
int main()
 {
    int a, b, c, d;
    
    // Read four integers (one per line)
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    // Print the greatest of the four
    printf("%d\n", max_of_four(a, b, c, d));
    
    return 0;
}

