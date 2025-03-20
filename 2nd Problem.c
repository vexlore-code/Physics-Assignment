#include <stdio.h>
#include <math.h>

#define PI 3.1415

int main()
{
    int m1 = 3, m2 = 2;
    double l1 = 530, l2 = 700, th1 = 65.0, s2, th2;

    s2 = (m2 * l2) / (m1 * l1) * sin(th1 * PI / 180);
    
    if (s2 > 1.0) printf("No valid angle exists.\n");
    else
    {
        th2 = asin(s2) * (180.0 / PI);
        printf("Angle for red light: %.2f°\n", th2);
    }

    return 0;
}
