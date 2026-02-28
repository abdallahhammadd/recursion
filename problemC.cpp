#include<iostream>
using namespace std;

void printrev(int n)
{
    if(n==0){
        return ;
    }
    cout << n;
    if (n > 1){
        cout << " ";
    }
    printrev(n-1);
}

int main()
{
    int n;
    cout << "Enter n numbers : " <<endl;
    cin>>n;
    printrev(n);
    return 0;
}