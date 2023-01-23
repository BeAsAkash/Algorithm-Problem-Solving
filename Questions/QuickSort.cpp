#include <iostream>
using namespace std;

int Partition(int A[], int low, int high){
    int pivot = A[low];
    int i = low + 1;
    int j = high;

    while (true){
        while (i <= j && A[i] <= pivot){
            i++;
        }
        while (A[j] >= pivot && j >= i){
            j--;
        }
        if (j < i){
            break;
        } else {
            swap(A[i], A[j]);
        }
    }
    swap(A[low], A[j]);
    return j;
}

void Quick_sort(int A[], int low, int high){
    if (low < high){
        int p = Partition(A, low, high);
        Quick_sort(A, low, p-1);
        Quick_sort(A, p+1, high);
    }
}

int main(){

int m=1;
    while(m==1){

    int n;
    cout<<"Enter the no of INPUTS : ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        arr[i]=rand();
    }

    clock_t start_time=clock();
    Quick_sort(arr,0,(sizeof(arr)/4));

     clock_t end_time=clock();

    cout<<end_time-start_time<<"secs"<<endl;

    cout<<"Press 0 TO EXIT else press 1 :";
    cin>>m;

    }

    return 0;
}
