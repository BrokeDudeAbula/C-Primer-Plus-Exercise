//inch2feet.cpp --Book execercise 3.7.1
#include <iostream>
int main ()
{
  using namespace std;
  int inch , feet , inct_t ;
  //变量声明必须摆在前面，后面的变量不能平白无故就这样出来
  const int p = 12;
  cout << "Please enter ur height by inch :_____\b\b\b\b\b" ;
  cin >> inch ;
  //使用变量之前必须要声明
  feet = inch / p ;
  inct_t = inch % p ;

  cout << "Ur height by feet is : "
       << feet << " feet "
       << inct_t << " inch " << endl;

  return 0;
}
