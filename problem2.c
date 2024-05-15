//Problem-02
#include <stdio.h>
#include <math.h>

int main() {
    //for Green light
    double m=3.0,wavelength_green=530.0,theta=65.0;
    double pi=3.1416;
    double radian= theta*(pi/180.0);

   double sin_value= sin(radian);

  double d = (m*wavelength_green)/sin_value;

  //for Red light

  double m2=2,wavelength_red=700.0;

  double theta_red= asin(m2*wavelength_red/d);

  theta_red=theta_red*180.0/pi;

  printf("%lf in degrees",theta_red);

    return 0;
}
/*Group-07
ID:232-115-208
ID:232-115-221
ID:232-115-239
ID:232-115-237
*/
