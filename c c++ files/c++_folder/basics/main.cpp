/*#include <iostream>
using namespace std;
string fname = "Muhire";
namespace groupd{
  string fname = "Mahoro";
}
int main()
{
  // int fname=5;
  string fname;
  std::cout<<"Enter your name"<<endl;
  //std::cin >> fname;
  getline(cin, fname);
  std::cout<<"Hello "<<::fname<<endl;
  std::cout << "Hello "<< fname << endl;
  std::cout << "Hello " << groupd::fname << endl;

  return 0;
}
*/


#include <iostream>
using namespace std;
int main()
{
 int a,b,sum;
 cout<<"Enter the first number: \n";
 cin>>a;
 cout<<"Enter the second number: \n";
 cin>>b;
 sum= a+b;
 cout<<"The sum of a and b is: " <<sum <<endl;
  return 0;
}
