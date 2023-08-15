/*
Input:
Rows: 4
Col: 5

Output: 
# # # # #
* * * * *
# # # # #
* * * * * 

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
        for(i=1; i<iRow;i++)
        {
            for(int j=1; j<iCol;j++)
            {
                if((i%2)==0)
                {
                    cout<<"*"<<"\t";
                }
                else
                {
                    cout<<"#"<<"\t";

                }
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