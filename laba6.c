#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    printf("Vvedit koordinati pochatku vektora (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Vvedit koordinati kicya vektora (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    int dx = x2 - x1;
    int dy = y2 - y1;

    double length = sqrt(dx * dx + dy * dy);

    printf("Dovjina vektora: %.6lf\n", length);

    return 0;
}
