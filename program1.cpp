//Accept number from user and display the factors of that number

#include<iostream>
using namespace std;

class Number
{
    public: 

    void Factors(int iNo)
    {
        int i;
        for(i=1; i<=(iNo/2); i++)
        {
            if((iNo % i)==0)
            {
                cout<<i<<"\n";
            }
        } 
    }
};

int main()
{
    int iValue = 0;
    cout<<"Enter the number: "<<"\n";
    cin>>iValue;
    
    Number obj;

    obj.Factors(iValue);

    return 0;
}
