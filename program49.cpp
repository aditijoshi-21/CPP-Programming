/*
Input:
Rows: 4
Col: 4

Output: 
A
A B 
A B C
A B C D E
A B C D E F 

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

            for(i=1;i<=iRow;i++)
            {
                for(j=1,ch='A';j<=iCol;j++,ch++)
                {
                    if(i>=j)
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