#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    puts("Enter the height (in cm):");

    float height;
    scanf("%f", &height);

    float height_inches = height / 2.54;
    int height_feet = height_inches / 12;
    double delta_inches = height_inches - (height_feet * 12);

    printf(
        "Your height is %d feet and %.1f inches.",
        height_feet,
        delta_inches
    );

    return EXIT_SUCCESS;
};
