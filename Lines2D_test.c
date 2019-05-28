/* File  Lines2D_test.c
Realization of tests for Lines2D structure functions
Done by Platonov Denis and Oleksenko Vladisval  (group Statistic)
Email: ... & vlad.oleksenko99@gmail.com
*/
#include "Lines2D.c"

int main()
{
    struct Point2D Points[4] = {{0,0},{0,2},{2,2},{2,0}};
    int N = 4;
    struct Polygone2D pol = {N, Points};
    double res = polygon_square(pol);
    int res_2 = check_convex(pol);
    printf("Polygon square is %f \n", res);
    if (res_2)
        printf("The polygon is convex \n");

    else
        printf("The polygon is not convex \n");

    return 0;
}
