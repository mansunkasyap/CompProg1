#include<iostream>
using namespace std;
int Palindrome(int n)
{

    int rev = 0, m = n;
    while(m != 0)
    {
        rev = rev*10 + m%10;
         m = m/10;
    }
    cout<<rev<<endl;
    if (rev == n)
        return 1;
       return 0;
}
int main ()
{
    int n, r;
    cout<<"Enter a number: ";
    cin>> n;
    r = Palindrome (n);
    if(r == 1)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
    return 0;
}
