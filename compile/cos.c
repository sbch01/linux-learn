#include <stdio.h>
#include <math.h>
#include "val.h"

#define PI 3.141592654

double cos_result;
double rad_ang, deg_ang; //?

int main(){

    deg_ang = get_float_value("Enter angle in degrees",0 , 360);
    rad_ang = (deg_ang * PI) / 180;
    cos_result = cos(rad_ang);

    printf("%.3lf Degrees are %.3lf Radians\n", deg_ang, rad_ang);
    printf("The cos of that angle is %.3lf\n", cos_result);
    return 0;
    
}