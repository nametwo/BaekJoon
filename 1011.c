#include <stdio.h>
#include <math.h>

int main(void) {

    int a=0, k=0, z=0, c=0;
    double x=0;
    double xx, yy;

    scanf("%d", &a);


    for (int i = 0; i < a; i++) {
        scanf("%lf %lf", &xx, &yy );

        c = x = yy - xx;
        
        x = sqrt(c);
        z = x;

        if (x > z) {
            k = z + 1;
        }
        else {
            k = z;
        }

        if ((double)k * k - c < k) {
            printf("%d\n", 2 * k - 1);
        }
        else {
            printf("%d\n", 2 * k - 2);
        }

    }
}
