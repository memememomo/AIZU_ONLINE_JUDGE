#include <stdio.h>

int main()
{
    char buf[80];
    double a, b, c, d, e, f;

    while (1) {
        fgets( buf, 80, stdin );
        if (feof(stdin)) {
            break;
        }

        sscanf( buf, "%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f );

        double div_a = a;
        a /= div_a;
        b /= div_a;
        c /= div_a;

        double times_d = d;
        d -= a * times_d;
        e -= b * times_d;
        f -= c * times_d;

        double div_e = e;
        e /= div_e;
        f /= div_e;

        double times_b = b;
        b -= e * times_b;
        c -= f * times_b;

        printf("%0.3f %0.3f\n", c, f);
    }

    return 0;
}
