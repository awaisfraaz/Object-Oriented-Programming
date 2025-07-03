#include <iostream>
#include <cstring>
using namespace std;
class REPORT
{
private:
    int adno;
    char name[20];
    float marks[5];
    float average;
    float GETAVG();
public:
    // constructers and destructers
    REPORT(int adn, const char *n, float m[5])
    {
        adno = adn;
        strcpy(name, n);
        for (int i = 0; i < 5; i++)
        {

            marks[i] = m[i];
        }
        cout << "i am  your Constructer " << endl;
    }
    ~REPORT()
    {
        cout << "i am  your Destructer \n object is destroyed" << endl;
    }
    void READINFO()
    {
        cout << "Enter the admission number ";
        cin >> adno;
        cout << "Enter the name ";
        cin >> name;
        cout << "Enter the marks of 5 subjects " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter marks of subject no " << i + 1 << endl;
            cin >> marks[i];
        }
        GETAVG();
    }
    void DISPLAYINFO()
    {
        cout << "The admission number is = " << adno << endl;

        cout << "The name is = " << name << endl;

        cout << " The marks of 5 subjects are" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << " marks of subject no " << i + 1 << " = " << marks[i] << endl;
        }
        cout << "The average of marks are = " << GETAVG() << endl;
    }
};
int main()
{
    float destructer_marks_arr[5] = {23.0f, 45.0f, 98.0f, 34.0f, 56.0f};
    REPORT obj1(1234, "MMMM", destructer_marks_arr);
    cout << "for object 1" << endl;
    // obj1.READINFO();
    obj1.DISPLAYINFO();
    return 0;
}
float REPORT::GETAVG()
{
    float sum = 0;
        int size = 5;
        float average;
        for (int i = 0; i < size; i++)
        {

            sum = sum + marks[i];
        }
        average = sum / size;
        return average;
}