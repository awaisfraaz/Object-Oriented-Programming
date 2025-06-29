#include <iostream>
using namespace std;
class Distance
{
private:
  int feet;
  float inches;

public:
  void Getdist(int ft, int in)
  {
    inches = in;
    feet = ft;
  }
  void Showdist()
  {
    cout << "The input distance is " << feet << "feets" << inches << "inches" << endl;
  }
};
int main()
{
  Distance obj1, obj2;
  int ft1;
  float in1;
  cout << "Enter the distance in feet and inches for obj1 " << endl;
  cin >> ft1 >> in1;
  obj1.Getdist(ft1, in1);

  int ft2;
  float in2;
  cout << "Enter the distance in feet and inches for obj2 " << endl;
  cin >> ft2 >> in2;
  obj2.Getdist(ft2, in2);

  obj1.Showdist();
  obj2.Showdist();
  return 0;
}