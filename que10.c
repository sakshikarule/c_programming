#include <stdio.h>
#include <math.h>   

int main() {
    float a, b, c;          
    float perimeter, s, area;

    
    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    
    perimeter = a + b + c;
    printf("Perimeter of triangle = %.2f\n", perimeter);

    
    s = perimeter / 2;

    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of triangle = %.2f\n", area);

    return 0;
}
