#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

void calculateVolumeAndSurfaceArea(struct Box *box) 
{
    double volume, surfaceArea;

    volume = box->length * box->width * box->height;
    surfaceArea = 2 * (box->length * box->width + box->length * box->height + box->width * box->height);

    printf("Volume: %.2f\n", volume);
    printf("Total Surface Area: %.2f\n", surfaceArea);
}

int main() 
{
    struct Box myBox = { 2.5, 3.0, 4.0 };
    struct Box *boxPtr = &myBox;

    calculateVolumeAndSurfaceArea(boxPtr);

    return 0;
}
