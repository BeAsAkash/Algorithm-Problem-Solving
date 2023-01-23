#include <iostream>
using namespace std;

//Merge
void Merge(int A[],int l,int mid,int h){
int i,j,k;
int B[h+1];
i=l;
j=mid+1;
k=l;
while(i<=mid && j<=h){
    if(A[i]<A[j])
        B[k++]=A[i++];
    else
        B[k++]=A[j++];
}

for(;i<=mid;i++){
    B[k++]=A[i];
    }
for(;j<=h;j++){
    B[k++]=A[j];
    }
for(i=l;i<h+1;i++){
    A[i]=B[i];
}
}

//Sort Application
void mergeSort(int A[],int n){
    int p,i,l,mid,h;
    for(p=2;p<=n;p=p*2){
        for(i=0;i+p-1<n;i++){
            l=i;
            h=i+p-1;
            mid=((l+h)/2);
            Merge(A,l,mid,h);
        }
    }
    if(p/2<n){
        Merge(A,0,p/2,n-1);
    }
}



int main(){
  /*  int arr[]={2,5,8,12,3,6,7};
    int mid=sizeof(arr);
    mid=((mid/4)-1)/2;
    //cout<<mid;
   // Merge(arr,0,mid,(sizeof(arr)/4)-1);
   mergeSort(arr,8);

    for(int i=0;i<sizeof(arr)/4;i++){
        cout<<arr[i]<<endl;
    }*/



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
    mergeSort(arr,(sizeof(arr)/4));

     clock_t end_time=clock();

    cout<<end_time-start_time<<"secs"<<endl;

    cout<<"Press 0 TO EXIT else press 1 :";
    cin>>m;

    }



return 0;
}
