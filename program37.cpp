/*
Input:
Rows: 4
Col: 5

Output: 
1 2 3 4 5
* * * * * 
1 2 3 4 5
* * * * *


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
                    if(i%2==0)
                    {
                        cout<<"*"<<"\t";
                    }
                    else
                    {
                        cout<<j<<"\t";
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