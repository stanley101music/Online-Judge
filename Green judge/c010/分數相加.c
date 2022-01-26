#include<stdio.h>

int gcd(int a, int b) {
    while(b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main(void)
{
    float a1,a2,b1,b2;
    scanf("%f %f %f %f",&a1,&a2,&b1,&b2);
    int c,d,e,LCM,GCD;
    c=a1/a2+b1/b2;
    printf("%d+",c);

    LCM=lcm(a2,b2);
    d=(a1*LCM/a2+b1*LCM/b2)-c*LCM;
    e=LCM;
    GCD=gcd(d,e);
    d=d/GCD;
    e=e/GCD;
    printf("%d/%d",d,e);

    return 0;
}
