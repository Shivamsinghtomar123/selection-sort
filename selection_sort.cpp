#include<iostream>
using namespace std;
int main()
{
  int n,i;
  cout<<"Enter size "<<endl;
  cin>>n;
  int arr[n],mini;
  mini = i;
  for(int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  for(int i = 0; i < n-1; i++)
  {
    mini = i;
    for(int j = i+1; j<n; j++)
    {
        if(arr[mini]>arr[j])
        {
          mini = j;
          cout<<mini<<endl;
        }
    }
    swap(arr[mini],arr[i]);
  }
  cout<<"after swapping"<<endl;
  for(int i = 0; i < n; i++)
  {
    
    cout<<arr[i]<<" ";
  }
}