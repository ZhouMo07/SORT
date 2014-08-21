
#include<iostream>  
  
  
using namespace std; 

void BinaryInsertSort(int *a, int left, int right)
{
     int tmp;
     int i,low,high,middle,k;
     for(i = left +1; i <= right; i++)
     {     
           tmp = a[i];
           low = left;
           high = i-1;
           while(low <= high)
           {
                     middle = (low + high)/2;
                     if(tmp < a[middle])
                            high = middle - 1;
                     else
                            low = middle + 1;
           }
           for(k = i -1; k >= low; k--)
           {
                 a[k+1] = a[k];
           }
           a[k+1] = tmp;
     }
}

int main()
{
    int a[]={5,4,8,2,7,6,1};
    //int *a = A;
    BinaryInsertSort(a,0,6);
   for(int i=0;i<7 ;i++)  
        cout<<a[i]<<" ";  
    cout<<endl; 
    system("pause");
}
