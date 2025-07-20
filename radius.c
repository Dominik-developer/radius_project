#include <stdio.h>
#include <math.h>

int main() {

    double radius = 0.0;
    double area = 0.0;
    double surface_area = 0.0;
    double volume = 0.0;
    
    const double PI = 3.14159265358979323846;
    

    printf("Enter the radius: ");
    scanf("%lf", &radius);

        area = PI * pow(radius, 2);

        surface_area = 4 * PI *pow(radius, 2);
    
        volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("Area of circle with radius %.2f is %.2f\n", radius, area);
    printf("Surface area of sphere with radius %.2f is %.2f\n", radius, surface_area);
    printf("Volume of sphere with radius %.2f is %.2f\n", radius, volume);
    

    return 0;
}
