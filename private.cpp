#include <iostream>
using namespace std;

class area
{
public:
    float x, y;
    double area;
    int input()
    {
        cout << "Welcome to area calculator" << endl;
        cout << "Enter Length : ";
        cin >> x;
        cout << "Enter breadth : ";
        cin >> y;
        return x, y;
    }
    int processing()
    {
        area = x * y;
        return area;
    }
    int checker()
    {
        if (x == y)
        {
            cout << "It's a square" << endl;
        }
        else
        {
            cout << "It's a rectangle" << endl;
        }
    }
    void output()
    {
        cout << "Area : " << area << " sq units" << endl;
    }
};
int main()
{
    int x;
    area a1;
    a1.input();
    a1.processing();
    a1.checker();
    a1.output();
    cout << "Press any key to exit.......";
    cin >> x;
    exit(1);
    return 0;
}