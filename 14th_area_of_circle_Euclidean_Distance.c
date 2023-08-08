#include <stdio.h>
#include <stdlib.h>
#include <math.h> //new library
#define PI 3.14
// this example is completly solved by me just unable to give funtion pointer
float Edistance(int x1, int y1, int x2, int y2) // funtion to calculte distance betwen two pints of Euclidean Distance
{
    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distance;
    // a = x2 - x1; //above formula simplified
    // b = y2 - y1;
    // c = pow(a,2);
    // d = pow(b,2);
    // z = c + d;
    // distance = sqrt(z);
}
float areaOfCircle(int x1, int y1, int x2, int y2, float (*length)(int x1, int y1, int x2, int y2)) // funtion pointer to give area of circle with given distance as radius
{
    float r, area;
    r = length(x1, y1, x2, y2);
    area = PI * pow(r, 2);
    return area;
}
int main()
{
    int x1, x2, y1, y2;
    float dist;
    // euclidean distance
    // take x1 and y1 and x2 and y2from the user and scanf
    printf("****This is are colulator of circle****\n");
    printf("To find the are of circle Enter the following data \n");
    printf("x1:\n");
    scanf("%d", &x1);
    printf("y1:\n");
    scanf("%d", &y1);
    printf("x2:\n");
    scanf("%d", &x2);
    printf("y2:\n");
    scanf("%d", &y2);
    // printf("%f\n",Edistance(x1, y1, x2, y2));
    dist = areaOfCircle(x1, y1, x2, y2, Edistance);             // diclaring the funtion and assing the value
    printf("the distace between these points is %.3f\n", dist); // printing the value of circle
    return 0;
}