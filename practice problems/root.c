#include <stdio.h>
#include <math.h>

int main() {
 float d, r1,r2,a,b,c,rp,ip;
  // r1=root1 r2=root2 rp=real part ip=imaginary part d=discriminant
  printf("enter the value of a,b,c.[hint  ax^2+bx+c=0]\n");
  scanf("%f%f%f",&a,&b,&c);
  d= (b*b-4*a*c);

  if(d==0)
    // here only one root
  printf("it has only one root\nand root is %.2f",(-b/(2*a)));
  else if(d>0)
    //here two real root present
  {
    r1=(-b+sqrt(d)/(2*a));
    r2=(-b-sqrt(d)/(2*a));
    printf("it has two roots \nroots are %.2f and%.2f",r1,r2);
  }
else if(d<0)
  // here imaginary root present
{ rp=(-b/(2*a));
  printf("it has imaginary roots\nroots are %.2f+i%.2f and %.2f-i%.2f",rp,ip,rp,ip);
  }   return 0;
}