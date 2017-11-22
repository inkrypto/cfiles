#include<stdio.h>

float product(float a, float b, float c)
{
    float p;
    p=a*b*c;
}

int main()
{
    float d, x, y, z;

    printf("Put in 3 numbers.\n");
    scanf("%f", "%f", "%f", &x, &y, &z);
    d = product(x, y, z);
    printf("The total is %f * %f *%f = %f\n",x, y, z, d);

    return 0;
}
