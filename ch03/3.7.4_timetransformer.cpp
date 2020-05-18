// timetransformer.cpp ----Book execercise 3.7.4
#include <iostream>
using namespace std ;
int main ()
{
  long long int seconds ;
  cout << "Enter the number of seconds : " ;
  cin >> seconds ;
  cout << "\n" << endl ;

  long long int time_min = seconds / 60 ;
  int time_sec_left = seconds % 60 ;

  long long int time_h = time_min / 60  ;
  int time_min_left = time_min % 60 ;

  long int time_day = time_h / 24 ;
  int time_h_left = time_h % 24 ;

  cout << seconds << " seconds = " << time_day << " days "
       << time_h_left << " hours " << time_min_left << " minutes "
       << time_sec_left << " seconds ." << endl ;

  return 0;
}
