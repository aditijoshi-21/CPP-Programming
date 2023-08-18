/*
Input:
Rows: 4
Col: 4

Output: 
   
* 
* *
* * *
* * * *
* * *
* *
*

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
                for(j=1;j<=iCol;j++)
                {
                    if(i>=j)
                    {
                        cout<<"*"<<"\t";
                    } 
                    else
                    {
                        cout<<""<<"\t";
                    }
                
                }

                cout<<"\n";

            }

        for(i=1;i<=iRow;i++)
        {
            for(j=iCol;j>=1;j--)
            {
                if(i<=j)
                {
                        cout<<"*"<<"\t";
                } 
                else
                {
                        cout<<""<<"\t";
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