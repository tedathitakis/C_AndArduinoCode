#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a = 10;
    double b = 10.5;
    printf("%lu\n",sizeof(b));
    float c = 10.5;
    printf("%lu\n", sizeof(c));
    char d = 'a';
    char e[] = "char array"; // aka a string
    bool f = false;
    int zero = .9999999999;
    printf("zero is %d\n",zero);
    int slices = 17;
    int people = 2;

    double slicesPerPerson =  (double) slices / people; //8
    printf("%lf\n",slicesPerPerson);
    return 0;
}