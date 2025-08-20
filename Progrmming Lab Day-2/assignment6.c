#include <stdio.h>
int main() {
    float p,r,t,si;
    printf("Enter Principal amount: ");
    scanf("%f", &p);
    printf("Enter Rate of interest (per annum): ");
    scanf("%f", &r);
    printf("Enter Time (in years): ");
    scanf("%f", &t);
    si = (p*r*t) / 100;
    printf("Si = %f \n", si);
    return 0;
}
