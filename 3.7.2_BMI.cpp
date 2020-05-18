//BMI.cpp --Book execercise 3.7.2
#include <iostream>
int main ()
{
  using namespace std ;
  const double inch_2_m = 0.0254 ;
  const double kg_2_lbs = 2.2 ;
  const int ft_2_inch = 12 ;

  int ht_feet,ht_inch,wt_lbs ;

  cout << "Please enter ur height by ***feets ***inches: " << endl ;
  cin >> ht_feet ;
  cout << " feets " ;
  cin >> ht_inch ;
  cout << " inches."<< endl ;

  cout << "Please enter ur weight by lbs: " ;
  cin >> wt_lbs;

  int ht_by_inch = ht_feet * ft_2_inch + ht_inch ;
  double ht_by_m = ht_by_inch * inch_2_m ;
  double wt_by_kg = wt_lbs / kg_2_lbs ;

  cout << "Ur height by inches is : " << ht_by_inch << endl ;
  cout << "Ur height by meters is : " << ht_by_m << endl ;
  cout << "Ur weight by kilograms is : " << wt_by_kg << endl ;

  double bmi = wt_by_kg / ( ht_by_m * ht_by_m ) ;
  cout << "Ur BMI is :" << bmi << endl ;

  return 0 ;
}
