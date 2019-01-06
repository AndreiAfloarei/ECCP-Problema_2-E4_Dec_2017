#include <iostream>
#include <fstream>
using namespace std;
ifstream in ("data.in");
ofstream out("data.out");

int t=-1;
unsigned short int i,n,pmax,ok=0;
float a[100],b[100],poz[100],sum[100],smax=-1;
int main()
{
    in>>n;
    for(i=0;i<n;i++)
        in>>a[i];
    int j=0;
    for(i=0;i<n;i++)
        if(a[i]>0)
        {ok=1;
            poz[j]=i;
          while(a[i]>0)
           {
               b[j]++;
               sum[j]=sum[j]+a[i];
               i++;

           }
           j++;
        }

    for(i=0;i<j;i++)
    {
     if(pmax<b[i])
     {
         pmax=b[i];
     }
    }

    for(i=0;i<j;i++)
    {
     if(pmax==b[i])
     {
         if(sum[i]>smax)
         {
             smax=sum[i];
             t=i;
         }
     }
    }

    if(ok)
    {


    out<<poz[t]<<endl;
    out<<b[t];
    }else out<<-1<<endl<<0;

    return 0;
}
