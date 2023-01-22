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
