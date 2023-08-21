//Accept string from user and edit string replace space with _

#include<iostream>
using namespace std;

class StringX
{
    public:

        void EditStr(char *str)
        {
            while(*str != 0)
            {
                if(*str ==' ')
                {
                    *str = '_';
                }
                
                str++;
            }
        }

};

int main()
{
    char Arr[40];
    int iRet = 0;
    char ch;

    cout<<"Enter the string: "<<"\n";
    cin>>Arr;

    StringX obj;

   obj.EditStr(Arr);

    cout<<"Edited string is: "<<Arr<<"\n";

    return 0;
}