#include<iostream>
using namespace std;

void printrec(int n)
{
   if(n==0){
    return ;
   }
   printrec(n-1);
   cout << "I love recursion" <<endl;
}

int main()
{
   int n;
   cout << "Enter n numbers : " <<endl;
   cin>>n;
   printrec(n);
    return 0;
}