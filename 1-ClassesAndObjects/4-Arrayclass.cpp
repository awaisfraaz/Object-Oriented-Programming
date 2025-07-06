 /// Separate put() and get() functions
#include <iostream>
    using namespace std;

    const int SIZE = 10;
    class Array
    {
    private:
        int arr[SIZE];

    public:
        Array()
        {
            for (int i = 0; i < SIZE; i++)
            {
                arr[i] = 0;
            }
        }

        void getarray(int ind, int val)
        {
            if (ind < 0 || ind >= SIZE)
            {
                cout << "\nIndex out of bounds" << endl;
                exit(1);
            }
            arr[ind] = val;
        }
        int showarray(int ind)
        {
            if (ind < 0 || ind >= SIZE)
            {
                cout << "\nIndex out of bounds" << endl;
                exit(1);
            }
            return arr[ind];
        }
    };
    int main()
    {
        Array obj;
        for (int i = 0; i < SIZE; i++)
        {
            obj.getarray(i, i * 10);
        }

        for (int i = 0; i < SIZE; i++)
        {
            cout << "value at " << i << " index is " << obj.showarray(i) << endl;
        }

        return 0;
    }