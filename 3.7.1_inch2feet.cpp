//inch2feet.cpp --Book execercise 3.7.1
#include <iostream>
int main ()
{
  using namespace std;
  int inch , feet , inct_t ;
  //���������������ǰ�棬����ı�������ƽ���޹ʾ���������
  const int p = 12;
  cout << "Please enter ur height by inch :_____\b\b\b\b\b" ;
  cin >> inch ;
  //ʹ�ñ���֮ǰ����Ҫ����
  feet = inch / p ;
  inct_t = inch % p ;

  cout << "Ur height by feet is : "
       << feet << " feet "
       << inct_t << " inch " << endl;

  return 0;
}
