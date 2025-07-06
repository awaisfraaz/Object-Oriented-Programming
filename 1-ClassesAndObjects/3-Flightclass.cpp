#include <iostream>
using namespace std;

class Flight
{
private:
    int Flightnumber;
    string Destination;
    float Distance, Fuel;
    void CALFUEL()
    {
        if (Distance <= 1000)
            Fuel = 500.0f;
        else if (Distance > 1000 && Distance <= 2000)
            Fuel = 1100.0f;
        else
            Fuel = 2000.0f;
    }

public:
    // Removed invalid show() method

    // constructer
    Flight() : Flightnumber(0), Destination("None"), Distance(0.0f), Fuel(0.0f)
    {
        cout << this << "  i am no argument constructor" << endl;
    }
    // destructer
    ~Flight()
    {
        cout << this << " I am  destructer " << endl;
    }
    void FEEDINFO()
    {
        cout << "Enter Flight number ";
        cin >> Flightnumber;
        cout << "Enter Flight Destination ";
        cin >> Destination;
        cout << "Enter Flight Distance ";
        cin >> Distance;
        CALFUEL();
    }
    void SHOWINFO()
    {
        cout << "\nFlight number " << Flightnumber << endl;
        cout << "Flight Destination " << Destination << endl;
        cout << "Flight Distance " << Distance << endl;
        cout << "Flight Required Fuel " << Fuel << endl;
    }
};
int main()
{
    Flight f1, f2;
    cout << &f1 << endl;
    cout << &f2 << endl;
    cout<<endl;
    // show(); // Removed undefined function call
    //show()
  //  {
    cout<<endl;
    // Removed invalid show() call
    //show()
  //  {
  //    flight f3,f4;
  //  }
    // lefo
    return 0;
}