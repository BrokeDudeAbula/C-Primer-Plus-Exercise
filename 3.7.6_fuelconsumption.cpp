// fuelconsumption.cpp ----Book execercise 3.7.6
#include <iostream>
using namespace std ;
int main()
{
  cout << "Please enter the liters of the gas :";
  double liters ;
  cin >> liters ;

  cout <<"Please enter the kilometers : " ;
  double km ;
  cin >> km ;

  double fc = liters / km * 100.0 ;

  cout << "The fuel consumption is : "<< fc << " liters per 100 kilometers" <<endl;
  return 0;

}
