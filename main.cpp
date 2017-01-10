#include <iostream>
#include<windows.h>
#include "Data_base.h"
#include<cstring>
using namespace std;
int main()
{
    Data_base db;
    while(1)
    {
        int n;
        cout<<"\t*********************Donate Blood Save Life***********************"<<endl;
        cout<<"\n\t \t \t :-:Enter Choice:-:"<<endl;
        cout<<"To Add New Data (1).\nTo View List Of Donar (2)\nTo Search Donar (3)\nTo Exit (4)"<<endl;
        cout<<":";
        cin>>n;
        switch (n)
        {

        case 1:
        {
            system("cls");
            db.Data("Add New");
        }
        break;

        case 2:
        {
            system("cls");
            db.Data("View");
        }
        break;
        case 3:
        {
            system("cls");
            db.Data("Search");
        }
        break;
        case 4:
        {
            return 0;
        }
        break;

        default:
        {
            system("cls");
            cout<<"\a\aPlease Enter your choice Correctly:\a\a"<<endl;
        }
        break;
        }

    }
    return 0;
}
