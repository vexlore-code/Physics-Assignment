#include <stdio.h>
#include <math.h>

#define PI 3.1416

int main()
{
    int m;
    double th, d, l;

    printf("Enter m, θ (deg), d (μm): ");
    scanf("%d %lf %lf", &m, &th, &d);

    d *= pow(10, -6); 
    l = (d * sin(th * PI / 180)) / m * pow(10, 9); 

    printf("Wavelength: %.2f nm\n", l);

    if (l >= 380 && l < 450) printf("Color: Violet\n");
    else if (l >= 450 && l < 485) printf("Color: Blue\n");
    else if (l >= 485 && l < 500) printf("Color: Cyan\n");
    else if (l >= 500 && l < 565) printf("Color: Green\n");
    else if (l >= 565 && l < 590) printf("Color: Yellow\n");
    else if (l >= 590 && l < 625) printf("Color: Orange\n");
    else if (l >= 625 && l <= 750) printf("Color: Red\n");
    else printf("Color: Out of Visible Spectrum\n");

    return 0;
}
