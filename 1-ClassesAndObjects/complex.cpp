#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    // default constructer
    complex() : real(0), img(0)
    {
    }
    complex(int r, int i) : real(r), img(i)
    {
    }
    void input()
    {
        cout << "Enter the real part of number = ";
        cin >> real;
        cout << "Enter the imaginary part of number = ";
        cin >> img;
    }
    void showcomplex()
    {
        cout << "The complex number is = " << real << "+" << img << "i" << endl;
    }
    complex addcomplex(complex t1)
    {
        complex t2;
        t2.real = real + t1.real;
        t2.img = img + t1.img;
        return t2;
    }
};
int main()
{
    complex obj1, obj2(3, 6);
    cout << "for object no 1" << endl;
    obj1.input();
    complex obj3 = obj1.addcomplex(obj2);
    cout << "The addition of complex number of two classes is " << endl;
    obj3.showcomplex();
    return 0;
}