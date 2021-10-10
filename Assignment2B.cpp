#include<iostream>
using namespace std;
int main()
{
        int i, j, count=0;
        cout<<"\n Prime Numbers Between 1 to 20 :\n";
        for(i=2; i<=20; i++)
        {
                count=0;
                for(j=2; j<i; j++)
                {
                        if(i%j==0)
                        {
                                count++;
                                break;
                        }
                }
                if(count==0)
                {
                        cout<<i<<"\n";
                }
        }
        return 0;
}