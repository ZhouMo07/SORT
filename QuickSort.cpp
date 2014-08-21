#include<iostream>

using namespace std;

int Partition(int *A, int left, int right)
{
    int  pivot = A[left];
    while(left < right)
    {
               while(left < right && A[right] >= pivot)
               {-- right;}
               A[left] = A[right];  //±ÈÊàÖáĞ¡µÄÒÆ×ó¶Ë 
               while(left < right && A[left] <= pivot)
               {++ left;}
               A[right] = A[left];
    }
    A[left] = pivot;
    return left;
}

void QuickSort(int *A, int left, int right)
{
     if(left < right)
     {
             int pivotpos = Partition(A,left, right);
             QuickSort(A, left, pivotpos-1);
             QuickSort(A, pivotpos+1, right);
     }
}

int main()
{
    int a[]={3,7,2,5,4,9,2,1};
    QuickSort(a, 0, 7);
    for(int i = 0; i < 8; i++)
            cout<< a[i]<< " ";
    cout<< endl;
    system("pause");
}
