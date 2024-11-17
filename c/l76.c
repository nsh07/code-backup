#include <stdio.h>
#include <math.h>
#define pie 3.14

double distance(int x1, int y1, int x2, int y2)
{    double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("the distance between both point is %lf\n", d);
    return d;
}
void area(int x1, int y1, int x2, int y2, double (*fptr)(int, int, int, int))
{
    double r = fptr(x1, y1, x2, y2);
    printf("the radius is equal the distance i.e %lf\n", r);
    double area = pie * pow(r, 2);
    printf("the area is %lf", area);
}

int main()
{    int x1, y1, x2, y2;
    printf("enter the first point cordinates x1,y1\n");
    scanf("%d%d", &x1, &y1);
    printf("enter the second point cordinates x2,y2\n");
    scanf("%d%d", &x2, &y2);

    double (*ptr)(int, int, int, int);
    ptr = distance;

    area(x1, y1, x2, y2, ptr);

    return 0;
}
