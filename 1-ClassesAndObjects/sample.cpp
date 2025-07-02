#include <iostream>
using namespace std;
class Gradebook
{
  public:
  void print(string coursename)
  {
    cout << "Welcome to C++ how to program \n"<< coursename;
  }
};
int main()
{
  Gradebook awais;
  string coursename;
  cout << "Enter the course name:" << endl;
  getline(cin, coursename);
  cout << endl;
  awais.print(coursename);
  return 0;
}
