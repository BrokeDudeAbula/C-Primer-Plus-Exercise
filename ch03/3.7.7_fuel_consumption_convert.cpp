// fuel_consumption_convert.cpp ----Book execercise 3.7.7
#include <iostream>

using namespace std ;
int main ()
{
  cout << "Pls enter the fuel consumption by liters per 100 kilometers :" ;
  double gas_l ;
  cin >> gas_l ;

  double gas_g = gas_l / 3.875 ;

  double mpg = 62.14 / gas_g ;

  cout << "Ur fuel consumption convert to mpg is : " << mpg << " Mpg . " <<endl;

  return 0 ;


}
