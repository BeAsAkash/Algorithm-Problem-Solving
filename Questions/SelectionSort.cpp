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
        cout<<"Enter the number of INPUTS:";
        cin>>n;
        int arr[n];

        for(int i=0; i<n; i++)
        {
            arr[i]=rand();
        }

        clock_t start_time=clock();
        for(int i=0;i<n-2;i++){
            int mini=i,temp;
            for(int j=i+1;j<n-1;j++){
                if(arr[mini]>arr[j]){
                    mini=j;
                }
                else if(mini!=i){
                    temp=arr[mini];
                    arr[mini]=arr[i];
                    arr[i]=temp;
                }
            }
        }
        clock_t end_time=clock();

        cout<<end_time-start_time<<"secs"<<endl;

        cout<<"Press 0 TO EXIT else press 1 :";
        cin>>m;

    }
    return 0;
}




