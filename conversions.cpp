#include <iostream>
using namespace std;

void binary(int number);                            //function declarations
void octal(int number);
void decimal(int number);
void hexadecimal(int number);
int anytodecimal();

main()
{
    int number=anytodecimal();                      //converts number from any base to decimal base
    cout<<"Its equivalent in binary is: ";
    binary(number);
    cout<<endl; 
    cout<<"Its equivalent in octal is: ";
    octal(number);
    cout<<endl;
    cout<<"Its equivalent in decimal is: "<<number;
    cout<<endl;
    cout<<"Its equivalent in hexadecimal is: ";
    hexadecimal(number);
}

void binary(int number)                             //convert decimal to binary
{
    int q=number;
    int k=0;
    int b=2;
    int a;
    while(number!=0)
    {
        number= number/b;
        k++;
    }
    char ans[k];
    for(int c=k-1; c>=0; c--)
    {
        a= q%b;
        a=a+48;
        ans[c]=a;
        q= q/b;
    }
    for(int idx=0; idx<k ; idx++)
    {
        cout<<ans[idx];
    }   
}
void octal(int number)                              //converts decimal to octal
{
    int q=number;
    int k=0;
    int b=8;
    int a;
    while(number!=0)
    {
        number= number/b;
        k++;
    }
    char ans[k];
    for(int c=k-1; c>=0; c--)
    {
        a= q%b;
        a=a+48;
        ans[c]=a;
        q= q/b;
    }
    for(int idx=0; idx<k ; idx++)
    {
        cout<<ans[idx];
    }
}
void hexadecimal(int number)                        //converts decimal to hexadecimal
{
    int q=number;
    int k=0;
    int b=16;
    int a;
    while(number!=0)
    {
        number= number/b;
        k++;
    }
    char ans[k];
    for(int c=k-1; c>=0; c--)
    {
        a= q%b;
        if(a>9)
        {
            a=a+55;
        }
        else{
            a=a+48;
        }
        
        ans[c]=a;
        q= q/b;
    }
    for(int idx=0; idx<k ; idx++)
    {
        cout<<ans[idx];
    }
}

int anytodecimal()                                  //converts any to decimal
{
    char num[36]; 
    int base, k;
    cout<<"enter num: ";
    cin>>num;
    cout<<"enter base: ";
    cin>>base;
    k=0;
    for(int x=0; num[x]!=0; x++)
    {
        k++;
    }
    int ans=0;
    int exp=1;
    for(int t=k-1; t>=0; t--)
    {
        int minus=48;
        if(num[t]>65)
        {
            minus=55;
        }
        ans= (exp* (num[t]-minus))+ans;
        exp=exp*base;
        
    }
    return ans;
}