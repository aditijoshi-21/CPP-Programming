/*
Input:
Rows: 3
Col: 5

Output: 

a a a a a
b b b b b
c c c c c

*/

#include<iostream>
using namespace std;

class Pattern
{
    public:
        int iRow=0, iCol=0;

    Pattern(int X, int Y)
    {
        iRow = X;
        iCol = Y;
    }

    void Display()
    {
        int i;
        char ch = '\0';
        for(i=1,ch='a'; i<iRow;i++,ch++)
        {
            for(int j=1; j<iCol;j++)
            {
                cout<<ch<<"\t";
            }
            cout<<"\n";

        }

    }

};

int main()
{
    int iNo1=0, iNo2=0;

    cout<<"Enter the number of rows: "<<"\n";
    cin>>iNo1;

    cout<<"Enter the number of columns: "<<"\n";
    cin>>iNo2;

    Pattern obj(iNo1,iNo2);

    obj.Display();



    return 0;
}