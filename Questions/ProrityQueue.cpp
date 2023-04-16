#include <bits/stdc++.h>
using namespace std;
int H[50];
int size = -1;
// parent node
int parent(int i)
{

    return (i - 1) / 2;
}
// left child
int leftChild(int i)
{

    return ((2 * i) + 1);
}
// right child
int rightChild(int i)
{

    return ((2 * i) + 2);
}

// shift up the node
void shiftUp(int i)
{
    while (i > 0 && H[parent(i)] < H[i])
    {
        swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

//shift down the node
void shiftDown(int i)
{
    int maxIndex = i;


    int l = leftChild(i);

    if (l <= size && H[l] > H[maxIndex])
    {
        maxIndex = l;
    }


    int r = rightChild(i);

    if (r <= size && H[r] > H[maxIndex])
    {
        maxIndex = r;
    }


    if (i != maxIndex)
    {
        swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

// insert a new element

void insert(int p)
{
    size = size + 1;
    H[size] = p;

    shiftUp(size);
}


// maximum priority
int extractMax()
{
    int result = H[0];


    H[0] = H[size];
    size = size - 1;

    shiftDown(0);
    return result;
}

// change the priority

void changePriority(int i, int p)
{
    int oldp = H[i];
    H[i] = p;

    if (p > oldp)
    {
        shiftUp(i);
    }
    else
    {
        shiftDown(i);
    }
}


// maximum element
int getMax()
{

    return H[0];
}

//remove the element

void remove(int i)
{
    H[i] = getMax() + 1;


    shiftUp(i);


    extractMax();
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
        insert();
        extractMax();
        changePriority();

        clock_t end_time = clock();

        cout << end_time - start_time << "secs" << endl;

        cout << "Press 0 TO EXIT else press 1 :";
        cin >> m;
    }

    return 0;
}
