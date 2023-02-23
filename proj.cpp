#include <iostream>
using namespace std;

int main()
{
    int r = 0, c = 0, b = 0, amount = 0, total_veh = 0, choice;
    while (true)
    {
        cout << "welcome to parking system" << endl;
        cout << " press 1 : for reksheaw" << endl;
        cout << "press 2 : for cars " << endl;
        cout << "press 3 : for buses" << endl;
        cout << "press 4 : for show record" << endl;
        cout << "press 5 : for Delete Record" << endl;
        cout << "\n Enter choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
            r++;
            amount += 100;
            total_veh++;
            cout << "\n Add 1 rekshaw in record\n"
                 << endl;
            system("pause");
            system("cls");
            break;
        case 2:
            c++;
            amount += 200;
            total_veh++;
            cout << "\n 1 car in record\n"
                 << endl;
            system("pause");
            system("cls");
            break;
        case 3:
            b++;
            amount += 300;
            total_veh++;
            cout << "\n Add 1 bus in record\n"
                 << endl;
            system("pause");
            system("cls");
            break;
        case 4:
            cout << "Total amount=" << amount << endl;
            cout << "Total vahicels="
                 << "total_veh" << endl;
            cout << "rekshaw=" << r << endl;
            cout << "cars=" << c << endl;
            cout << "Buses=" << b << endl;
            system("pause");
            system("cls");
            break;
        case 5:
            c = 0;
            r = 0;
            b = 0;
            amount = 0;
            total_veh = 0;
            cout << "\n\n Delete record" << endl;
            break;
        default:
            cout << "\n\n Invalid Input" << endl;
            system("pause");
            system("cls");
        }
    }
    return 0;
}