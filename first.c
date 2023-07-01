#include <stdio.h>

int main()
{
    int l, w; // l = length and w = width
    int result = l * w;
    printf("Area of Rectangle...\n");

    // input
    printf("Enter Length: ");
    scanf("%d", &l);

    printf("Enter wigth: ");
    scanf("%d", &w);

    // print output
    printf("Area of Rectangle = %d x %d = %d", l, w, result);
    return 0;
}