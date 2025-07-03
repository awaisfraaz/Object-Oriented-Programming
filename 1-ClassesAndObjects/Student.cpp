#include <iostream>
using namespace std;
class student
{
private:
    int marks[5];

public:
    student()
    {
        cout<<"I am constructer"<<endl;
        marks[5]={0};
    }
    void getmarks()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter the marks of subject no" << i + 1 << endl;
            cin >> marks[i];
        }
    }
    int sum()
    {
        int calculatesum = 0;
        for (int i = 0; i < 5; i++)
        {
            calculatesum = calculatesum + marks[i];
        }

        return calculatesum;
    }
    int average()
    {
        int calcuateaverage = sum() / 5;
        return calcuateaverage;
    }
};
int main()
{

    student S1, S2;
    cout << "For S1:" << endl;
   // S1.getmarks();
    cout << "The sum of marks are =" << S1.sum() << endl;
    //cout << "The average of marks are =" << S1.average() << endl;

    cout << "For S2:" << endl;
   // S2.getmarks();
   //// cout << "The sum of marks are =" << S2.sum() << endl;
  //  cout << "The average of marks are =" << S2.average() << endl;
    return 0;
}