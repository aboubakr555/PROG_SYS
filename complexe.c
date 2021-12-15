#include "complexe.h"
#include <math.h>
Complexe nouveauComplexe(double r,double i){ Complexe z;
z.re=r;z.im=i;return z;}
Complexe plus (Complexe z1,Complexe z2){
return nouveauComplexe(z1.re+z2.re,z1.im+z2.im);
}
Complexe moins (Complexe z1,Complexe z2){
return nouveauComplexe(z1.re-z2.re,z1.im-z2.im);
}
double module (Complexe z1){
return sqrt(z1.re*z1.re+z1.im*z1.im);}
double argument (Complexe z){
return atan(z.im/z.re);}

