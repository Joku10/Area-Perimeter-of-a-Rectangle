//To find area and perimeter of a rectangle


#include <stdio.h>
void main()
{
    int width;
    printf("Enter Width: ");
    scanf("%d",&width);

    int height;
    printf("Enter Height: ");
    scanf("%d",&height);

    int area= width*height;
    printf("Area of a rectangle= %d\n",area);

    int perimeter= 2*width+height;
    printf("Perimeter of a rectangle= %d\n",perimeter);
}
