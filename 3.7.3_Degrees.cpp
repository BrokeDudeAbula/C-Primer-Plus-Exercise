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
  //����60��Ϊһ��Int���͵�����  �����ֶ��ĳ�60.0��Ϊdouble���͵ĳ�������
  //��Ȼ�ͻ��������ʽ�ӱ��int���͵ļ���
  cout << degrees << " degrees " << minutes << " minutes "
       << seconds << " seconds = " << totall << " degrees ." <<endl;


  return 0 ;
}
