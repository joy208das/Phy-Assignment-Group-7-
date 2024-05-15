/*Problem-01*/
#include<stdio.h>
#include<math.h>
int main(){

double m,theta,d;

printf("Enter m:");
scanf("%lf",&m);
printf("Enter theta:");
scanf("%lf",&theta);
printf("Enter d(in micrometer):");
scanf("%lf",&d);
d=d*1000; // convert d µm to nm
double pi=3.1416;
double radian= theta*(pi/180.0);

double sin_value= sin(radian);

double wavelength= (d*sin_value)/m;
printf("wavelength is:%lf nm\n",wavelength);

printf("The color of light:");

if(wavelength>=380.0 && wavelength<=450.0) printf("Violet");
else if(wavelength>=451.0 && wavelength<=485.0) printf("Blue");
else if(wavelength>=486.0 && wavelength<=500.0) printf("Cyan");
else if(wavelength>=501.0 && wavelength<=565.0) printf("Green");
else if(wavelength>=566.0 && wavelength<=590.0) printf("Yellow");
else if(wavelength>=591.0 && wavelength<=625.0) printf("Orange");
else if(wavelength>=626.0 && wavelength<=750.0) printf("Red");
else printf("invalid result");

return 0;
}

/*Group-07
ID:232-115-208
ID:232-115-221
ID:232-115-221
ID:232-115-237
*/

