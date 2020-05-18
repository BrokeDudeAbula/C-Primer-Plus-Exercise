// worldpopulation.cpp ----Book execercise 3.7.5
#include <iostream>
using namespace std;
int main ()
{
  cout << "Enter the world population : " ;
  long long int pplt_wrd ;
  cin >> pplt_wrd ;

  cout << "\nEnter tne population of the US: " ;
  long long int pplt_us ;
  cin >> pplt_us ;

  double percent ;
  percent = double(pplt_us) / double(pplt_wrd) * 100.0 ;
  //这里前面设置的两个llint参数必须要转换成double类型，并且单独转换，才能相除不被归零

  cout << "\nThe population of the US is " << percent
       << "% of the world population."<<endl;

  return 0;

}
