// CodeChef
//Long Challenge Ques 2
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string S;
    
    long long T;
    cin>>T;
    while(T!=0)
    {
        long int N;
        cin>>N;
        string S;
        char X;
        cin>>S>>X;
         long int total=N*(N+1)/2;
         long int c=0,s=0;
        for(int i=0;i<N;i++)
        {
         if(S[i]!=X)
         {
             c++;
             s=s+c;
         }
         else if (S[i]==X)
         {
             c=0;
         }
        }
         cout<<total-s<<endl;
        T--;
    }
    return 0;
}
