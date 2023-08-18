/*
Input:
Rows: 4
Col: 4

Output: 
* a a a a a 
b * b b b b   
c c * c c c 
d d d * d d 
e e e e * e 
f f f f f * 


*/

#include<iostream>

using namespace std;

class Pattern
{
    public:

        void Display(int iRow, int iCol)
        {
            int i=0, j=0;

            char ch = '\0';

            if(iRow!=iCol)
            {
                cout<<"Invalid input"<<"\n";
                return;
            }

            for(i=1,ch='A';i<=iRow;i++,ch++)
            {
                for(j=1;j<=iCol;j++)
                {
                    if(i==j)
                    {
                        cout<<"*"<<"\t";
                    }
                    else
                    {
                        cout<<ch<<"\t";
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