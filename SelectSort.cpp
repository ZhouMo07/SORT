#include<iostream>

using namespace std;
//basic

void SelectSort(int *a, int N)
{
     int tmp;
     for(int i = 0; i < N; i++)
     {
             int min = i;
             for(int j = i+1; j <N; j++)
             {
                     if(a[j] < a[min])
                             min = j;
             }
             if(i != min)
             {
                  tmp = a[i];
                  a[i] = a[min];
                  a[min] = tmp;
             }
     }
}


//improved
void SelectSortII(int *a, int N)
{
      for(int i = 0; i < N; i++)
     {
             int min = i;
             for(int j = i+1; j <N; j++)
             {
                     if(a[j] < a[min])
                             min = j;
             }
             if(i != min)
             {
                  a[i] = a[i] ^ a[min];
                  a[min] = a[i] ^ a[min];
                  a[i] = a[min] ^ a[i];
             }
     }
}

int main()
{
    int a[] ={5,4,9,2,5,4,1,6,3};
    int len = sizeof(a)/sizeof(a[0]);
    //SelectSort(a, len);
    SelectSortII(a, len);
    for(int i =0; i < len; i++)
            cout<< a[i] <<" ";
    cout<< endl;
    system("pause");
}
