#include<iostream>
#include<ctime>
#include<cstdlib>
#define RANGE 255
using namespace std;
int getMax(int a[], int n)
{
    int max = a[0];
    for(int i = 1; i<n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    return max;
}
int main()
{

    int m=1;
    while(m==1)
    {

        int n;
        cout<<"Enter the no of INPUTS : ";
        cin>>n;

        int a[n];

        for(int i=0; i<n; i++)
        {
            a[i]=rand();
        }

        clock_t start_time=clock();

        int output[n+1];
        int max = getMax(a, n);
        int count[max+1];


        for (int i = 0; i <= max; ++i)
        {
            count[i] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            count[a[i]]++;
        }

        for(int i = 1; i<=max; i++){
            count[i] += count[i-1];
        }

        for (int i = n - 1; i >= 0; i--)
        {
            output[count[a[i]] - 1] = a[i];
            count[a[i]]--;
        }

        for(int i = 0; i<n; i++)
        {
            a[i] = output[i];
        }

        clock_t end_time=clock();

        cout<<end_time-start_time<<"secs"<<endl;

        cout<<"Press 0 TO EXIT else press 1 :";
        cin>>m;

    }
    return 0;
}
