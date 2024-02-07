#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  //for j = 2 to A.length
  for(int j=1;j<n;j++)
  {
    int key=a[j];
    int i=j-1;
    // Insert A [i] into the sorted sequence A[1… i-1]
    // j = i - 1
    // while j>0 and A[j] > key
    //     A[j+1] = A[j]
    //     j = j - 1
    // A[j + 1]  =  key

    while(i>=0 && a[i]>key)
    {
        a[i+1]=a[i];
        i--;
        a[i+1]=key;
    }
  }
  for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
  cout<<endl;
}