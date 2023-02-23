#include <iostream>
using namespace std;
class item
{
private:
    static int count;

public:
    item()
    {
        count++;
    }
    int getcount()
    {
        return count;
    }
    int getcountaddress()
    {
        return count ;
    }
};
int item ::count = 0;
int main()
{
    item objitem1;
    item objitem2;
    cout << objitem1.getcount() << endl;
    cout << objitem2.getcount() << endl;

    cout << objitem1.getcountaddress() << endl;
    cout << objitem2.getcountaddress() << endl;

    return 0;
}