#include <iomanip>
#include <iostream>
using namespace std;
int main()
{

    int k, d;
    int vid=0;
    int m=0;
    cout << "Iveskite savaites diena, kuria prasideda menuo" << endl;
    cin>>k;
    cout<<"Iveskite, kiek dienu sudaro menesi"<<endl;
    cin>>d;
    cout<<"Pr A  T  K  Pt St S "<<endl;
    for (int i=0; i<6; i++)
    {
        cout<<endl;
        for(int j=1
            ; j<=7; j++)
        {
            m++;
            if(j<=k && i==0)
            {
                cout<<setw(3)<<"*";

            }
            if(j>k && i==0){
                cout<<setw(2.5)<<m;
            }
            if(m<=d && i!=0)
            {

                cout<<setw(2)<<m<<" ";
            }

        }

    }
    return 0;
}

