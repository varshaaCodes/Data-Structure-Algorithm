#include<iostream>
using namespace std;

int printn(int n)
{
    // Base Condition 
    if(n==1)
    return 1;
    // Hypothesis : The Function You're Designing
    printn(n-1);
    //Induction
    cout<<n<<",";
    return n;
}
int main()
{
    int n;
    cin>>n;
    printn(n);
    return 0;
}