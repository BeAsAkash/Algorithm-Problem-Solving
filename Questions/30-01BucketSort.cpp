#include<iostream>
#include<algorithm>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;

void bucketSort(float arr[], int n)
{
	

	vector<float> b[n];

	
	for (int i = 0; i < n; i++) {
		int bi = n * arr[i]; 
		b[bi].push_back(arr[i]);
	}

	
	for (int i = 0; i < n; i++)
		sort(b[i].begin(), b[i].end());


	int index = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < b[i].size(); j++)
			arr[index++] = b[i][j];
}

int main()
{

    int m = 1;
    while (m == 1)
    {

        int n;
        cout << "Enter the no of INPUTS : ";
        cin >> n;

        float arr[n];

        for (int i = 0; i < n; i++)
        {
            arr[i] = rand();
        }

        clock_t start_time = clock();

        bucketSort(arr, (sizeof(arr) / 4));

        clock_t end_time = clock();

        cout << end_time - start_time << "secs" << endl;

        cout << "Press 0 TO EXIT else press 1 :";
        cin >> m;
    }

    return 0;
}


