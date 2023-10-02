#include <iostream>
#include math.h
int main(){
  double x = std::cin>>x;
  double a = 3.7;
  double p=x*x - sqrt(fabs(x));
  double t = pow(x+a*a, 1/3);
  double y=p*p + t*t*t*t;
  std::cout<<y;
}
