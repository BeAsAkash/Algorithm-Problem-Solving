#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void heapify(int arr[], int n, int i)
{
	int largest = i; 
	int l = 2 * i + 1; 
	int r = 2 * i + 2; 

	
	if (l < n && arr[l] > arr[largest])
		largest = l;

	if (r < n && arr[r] > arr[largest])
		largest = r;


	
	if (largest != i) {
		swap(arr[i], arr[largest]);

		
		heapify(arr, n, largest);
	}
}


void buildHeap(int arr[], int n)
{

	int startIdx = (n / 2) - 1;

	
	for (int i = startIdx; i >= 0; i--) {
		heapify(arr, n, i);
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

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            arr[i] = rand();
        }

        clock_t start_time = clock();

        buildHeap(arr, n);
		
        clock_t end_time = clock();

        cout << end_time - start_time << "secs" << endl;

        cout << "Press 0 TO EXIT else press 1 :";
        cin >> m;
    }
    return 0;
}
