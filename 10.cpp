#include <bits/stdc++.h>
using namespace std;
const float pi = 3.14579;
class circle
{
private:
    float radius, area;

public:
    void get_radius();
    void and_area();
    void display();
};
void circle ::get_radius()
{
    cout << "Enter your radius=" << endl;
    cin >> radius;
}
void circle ::and_area()
{
    area = pi * radius * radius;
}
void circle ::display()
{
    cout << "Area of circle is=" << area << endl;
}
int main()
{
    circle obj;
    obj.get_radius();
    obj.and_area();
    obj.display();
    return 0;
}