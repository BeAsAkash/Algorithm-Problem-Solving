#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    int m=1;
    while(m==1)
    {

        int n;
        cout<<"Enter the no of INPUTS : ";
        cin>>n;

        int arr[n];

        for(int i=0; i<n; i++)
        {
            arr[i]=rand();
        }

        clock_t start_time=clock();

        for(int i=1; i<n-1; i++)
        {
            int x=arr[i];
            int j=i-1;
            while(j>=0 && arr[j]>x)
            {
                arr[j+1]=arr[j];
                j=j-1;
                arr[j+1]=x;
            }
        }
        clock_t end_time=clock();

        cout<<end_time-start_time<<"secs"<<endl;

        cout<<"Press 0 TO EXIT else press 1 :";
        cin>>m;

    }
    return 0;
}
