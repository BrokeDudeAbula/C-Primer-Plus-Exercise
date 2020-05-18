//Degrees.cpp --Book execercise 3.7.3
#include <iostream>
using namespace std ;
int main()
{
  int degrees,minutes,seconds ;
  cout << "First , enter the degrees : " ;
  cin >> degrees ;

  cout << "\nNext , enter the minutes : " ;
  cin >> minutes ;

  cout << "\nFinally , enter the seconds : " ;
  cin >> seconds ;

  double totall ;
  totall = degrees + (minutes / 60.0) + double(seconds / (60.0*60.0));
  //这里60作为一个Int类型的数字  必须手动改成60.0作为double类型的常量输入
  //不然就会带着整个式子变成int类型的计算
  cout << degrees << " degrees " << minutes << " minutes "
       << seconds << " seconds = " << totall << " degrees ." <<endl;


  return 0 ;
}
