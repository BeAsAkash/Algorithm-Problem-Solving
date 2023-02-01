#include<iostream>
#include<algorithm>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;
int getMax(int a[], int n) 
{  
  int max = a[0];  
  for (int i = 1; i < n; i++)  
    if (a[i] > max)  
      max = a[i];  
  return max;  
}  
void bucket(int a[], int n)  
{  
  int max = getMax(a, n); 
  int bucket[max], i;  
  for (int i = 0; i <= max; i++)  
  {  
    bucket[i] = 0;  
  }  
  for (int i = 0; i < n; i++)  
  {  
    bucket[a[i]]++;  
  }  
  for (int i = 0, j = 0; i <= max; i++)  
  {  
    while (bucket[i] > 0)  
    {  
      a[j++] = i;  
      bucket[i]--;  
    }  
  }  
}  

int main()
{

    int m = 1;
    while (m == 1)
    {

        int n;
        cout << "Enter the no of INPUTS : ";
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            a[i] = rand();
        }

        clock_t start_time = clock();
        bucket(a,n);

        clock_t end_time = clock();

        cout << end_time - start_time << "secs" << endl;

        cout << "Press 0 TO EXIT else press 1 :";
        cin >> m;
    }

    return 0;
}


