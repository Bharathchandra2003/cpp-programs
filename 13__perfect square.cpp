#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int range1,range2;
    cout<<"Enter a range:";
    cin>>range1>>range2;
    int count=0;
    cout<<"Perfect numbers between "<<range1<<" and "<<range2<<" are: ";
    for(int i=range1;i<=range2;i++)
    {
    double sqr=sqrt(i);

   if(sqr-floor(sqr)==0)
     cout<<i<<" ";
    }
}
