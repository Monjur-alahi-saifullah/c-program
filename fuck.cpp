#include <stdio.h>
#include <math.h>
int main()
{
    double angle_1, angle_2, angle_3;

    printf("Enter First Angle (deg): ");//50
    scanf("%lf", &angle_1);
    printf("Enter Second Angle (deg): ");//60
    scanf("%lf", &angle_2);

    angle_3 =sqrt(pow(angle_1,2)+pow(angle_2,2));//3600+2500
        printf("thard angle\t %lf",angle_3);



    return 0;
}
