/*
Input:
Rows: 6
Col: 6

Output: 
* * * * * *
& & & & & &
& & & & & &
& & & & & &
& & & & & &
* * * * * *

*/

#include<iostream>

using namespace std;

class Pattern
{
    public:

        void Display(int iRow, int iCol)
        {
            int i=0, j=0;

            for(i=1; i<=iRow; i++)
            {
                for(j=1;j<=iCol; j++)
                {
                    if((i==1) || (i==iRow))
                    {
                        cout<<"*"<<"\t";
                    }

                    else
                    {
                        cout<<"&"<<"\t";

                    }
                }

                cout<<"\n";
            }

        }

};

int main()
{
    
    int iValue1=0, iValue2=0;

    cout<<"Enter row: "<<"\n";
    cin>>iValue1;

    cout<<"Enter column: "<<"\n";
    cin>>iValue2;

    Pattern obj;
    obj.Display(iValue1,iValue2);

    return 0;
}