#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    int eid;
    string ename;
    double esalary;

public:
    void getdata()
    {
        cout << "Enter the person id ";
        cin >> eid;
        cout << "Enter the name person ";
        cin>>ename;
        cout << "Enter the salary of a person";
        cin >> esalary;
    }
    void setdata(int id, string name, double salary)
    {
        eid = id;
        ename = name;
        esalary = salary;
    }
    void showdata()
    {
        cout << "The id = " <<eid<< endl;
        cout << "The name =" <<ename<< endl;
        cout <<"The salary ="<< esalary << endl;
    }
    double getsalary()
    {
        return esalary;
    }
};
int main()
{
    Employee obj1, obj2;
    cout << "FOR OBJ1" << endl;
    obj1.getdata();
    obj2.setdata(3, "ali", 20000);
    
    obj1.showdata();
    obj2.showdata();
     Employee highestsalary;
    if(obj1.getsalary()>obj2.getsalary())
    {
      highestsalary=obj1;
    }
    else
    {
        highestsalary=obj2;
    }
    cout<<"The details of highest salary person are"<<endl;
     highestsalary.showdata();
    return 0;
}