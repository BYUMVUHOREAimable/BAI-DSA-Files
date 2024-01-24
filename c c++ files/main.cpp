#include <iostream>
using namespace std;
string fname = "Muhire";
namespace groupd{
  string fname = "Mahoro";
}
int main()
{
  // int fname=5;
  string fname;
  cout<<"Enter your name" <<endl;
  //cin >> fname; //To receive input from key board
  getline(cin, fname);
  cout<<"Hello "<<::fname<<endl;
  cout << "Hello "<< fname << endl;
  cout << "Hello " << groupd::fname << endl;

  return 0;
}