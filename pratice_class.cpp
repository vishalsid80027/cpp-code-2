#include <bits/stdc++.h>
using namespace std;
const int MAX= 100;
class students_info
{
private:
    long int roll_no;
    int age;
    char sex;
    float height, weight;

public:
    void getinfo();
    void getdis();
};
void students_info ::getinfo()
{
    cout << "Enter roll no=" << endl;
    cin >> roll_no;
    cout << "Enter age=" << endl;
    cin >> age;
    cout << "Enter gender=" << endl;
    cin >> sex;
    cout << "Enter height and weight=" << endl;
    cin >> height >> weight;
}
void students_info ::getdis()
{
    cout << endl;
    cout << "roll no=" << roll_no << endl;
    cout << "age=" << age << endl;
    cout << "gender=" << sex << endl;
    cout << "Height=" << height << endl;
    cout << "Weight=" << weight << endl;
}
int main()
{
    students_info object[MAX];
    int i, n;
    cout << "How many students=" << endl;
    cin >> n;
    cout << "Enter following information:" << endl;
    for (i = 0; i < n ; i++)
    {
        int j = i;
        cout << endl;
        cout << "Records=" << j + 1 << endl;
        object[i].getinfo();
    }
    cout << "Contents of class:" << endl;
    for (i = 0; i < n ; i++)
    {
        object[i].getdis();
    }

    return 0;
}