#include<iostream>

using namespace std;

void BubbleSort(int *a, int n)
{
     int i ,j,tmp;
     for(i = 0; i < n-1; i++)
     {
           for(j = 0; j < n-i-1; j ++)
           {
                 if(a[j] > a[j+1])
                 {
                         tmp = a[j];
                         a[j] = a[j+1];
                         a[j+1] = tmp;
                 }
           }
     }
}

int main()
{
    int a[]={5,4,6,2,5,1,9};
    BubbleSort(a,7);
    for(int i = 0; i < 7; i++)
            cout<<a[i]<<" ";
    cout<< endl;
    system("pause");
    
}
