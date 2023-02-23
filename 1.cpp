#include<iostream>
using namespace std;
struct room{
    int widhth;
    int lenght;
    public:
    void setvalue(int w,int l){
        widhth=w;
        lenght=l;
    }
};
int main(){
   // int widhth;
   // int lenght;
room objroom;
objroom.setvalue(12,6);
//cout<<widhth<<lenght;

return 0;
}