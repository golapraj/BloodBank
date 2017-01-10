#ifndef DATA_BASE_H_INCLUDED
#define DATA_BASE_H_INCLUDED
#include<string>
#include "Donar.h"
#include<vector>
#include<windows.h>
#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
class Data_base
{
protected:
    Donor don[1000];

public:

    Data_base() {}
    void Data(string s)
    {
        static int i=0;
        if(s=="Add New")
        {
            string n;
            long int r;
            int t;
            cout<<"Enter Name:"<<endl;
            getchar();
            getline(cin>>n,n);
            don[i].set_name(n);
            cout<<"Enter Roll:"<<endl;
            cin>>r;
            don[i].set_roll(r);
            cout<<"Enter Department:"<<endl;
            cin>>n;
            don[i].set_department(n);
            cout<<"Enter Blood Group:"<<endl;
            cin>>n;
            don[i].set_Blood_group(n);
            cout<<"No.of Blood Donate:"<<endl;
            cin>>t;
            don[i].set_no_of_blood_donate(t);

            cout<<"Last Date of Blood Donation:"<<endl;
            cin>>n;
            don[i].set_last_date_of_blood_donation(n);

            cout<<"Enter Phone No.:"<<endl;
            cin>>n;
            don[i].set_phone_no(n);
            cout<<"Enter E-mail:"<<endl;
            cin>>n;
            don[i].set_email(n);
            system("cls");
            cout<<"Your data successfully added to the Dream database."<<endl;
            i++;
        }
        if(s=="View")
        {
            int j;
            system("cls");
            for( j=0; j<i; j++)
            {
                cout<<"\t\t\tDonar No: "<<j+1<<endl;
                cout<<"Name: "<<don[j].get_name()<<endl;
                cout<<"Roll: "<<don[j].get_roll()<<endl;
                cout<<"Department.: "<<don[j].get_department()<<endl;
                cout<<"Blood Group: "<<don[j].get_Blood_group()<<endl;
                cout<<"No. of Blood Donation: "<<don[j].get_no_of_blood_donate()<<endl;
                cout<<"Last Date of Blood Donation: "<<don[j].get_last_date_of_blood_donation()<<endl;
                cout<<":-:Contact Info:-:"<<endl;
                cout<<"Phone No.: "<<don[j].get_phone_no()<<endl;
                cout<<"E-mail: "<<don[j].get_email()<<endl;
                cout<<"\n\n";
            }
            if(j<1)
                cout<<"\aPlease Insert some data first.\n\n";
        }
        if(s=="Search")
        {
            string s;
            system("cls");
            cout<<"Enter Name/Blood Group/Department : "<<endl;
            cin>>s;
            for(int j=0; j<i; j++)
            {
                if(s==don[j].get_Blood_group()||s==don[j].get_name()||s==don[j].get_department())
                {
                    cout<<"\t\t\tDonar No: "<<j+1<<endl;
                    cout<<"Name: "<<don[j].get_name()<<endl;
                    cout<<"Roll: "<<don[j].get_roll()<<endl;
                    cout<<"Department.: "<<don[j].get_department()<<endl;
                    cout<<"Blood Group: "<<don[j].get_Blood_group()<<endl;
                    cout<<"No. of Blood Donation: "<<don[j].get_no_of_blood_donate()<<endl;
                    cout<<"Last Date of Blood Donation: "<<don[j].get_last_date_of_blood_donation()<<endl;
                    cout<<":-:Contact Info:-:"<<endl;
                    cout<<"Phone No.: "<<don[j].get_phone_no()<<endl;
                    cout<<"E-mail: "<<don[j].get_email()<<endl;
                    cout<<"\n\n";
                }
            }

        }
    }
};

#endif // DATA_BASE_H_INCLUDED
