#include <iostream>
using namespace std;
class BOOK
{
private:
    int BOOKNO;
    char BOOKTITLE[20];
    float BOOKPRICE;
    int TOTAL_COST(int N)
    {
        int totalprice = BOOKPRICE * N;
        return totalprice;
    }

public:
    void INPUT()
    {
        cout << "Enter the book no";
        cin >> BOOKNO;
        cout << "Enter the book title";
        cin >> BOOKTITLE;
        cout << "Enter the book price";
        cin >> BOOKPRICE;
    }
    void PURCHASE()
    {
        int N;
        cout << "Enter the no of copies to be purchased";
        cin >> N;
        cout << "The total cost paid by user is " << TOTAL_COST(N);
    }
};
int main()
{
    BOOK obj1;
    obj1.INPUT();
    obj1.PURCHASE();
    return 0;
}