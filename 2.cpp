#include <iostream>
using namespace std;
class room
{

    int width, height;

public:
    void setvalue(int w, int h)
    {
        width = w;
        height = h;
    }
};
int main()
{
    room objroom;
    objroom.setvalue(12,8);//this correction of question objroom.width=12;
    return 0;
}