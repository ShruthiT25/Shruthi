#include<iostream>
using namespace std;

/* function prints union of arr1[],arr2[]
m is the number of elements in arr1[]
n is the number of elements in arr2[] */

void printunion(int arr1[],int arr2[],int m,int n)
{int i=0,j=0;
while(i<m && j<n)
{
    if(arr1[i]<arr2[j])
    cout<<arr1[i++]<<"";
    else if(arr2[j]<arr1[i])
    cout<<arr2[j++]<<"";
    else
{
    cout<<arr2[j++]<<"";
    i++;
   }    
  }
/*print remaining elements of the larger array*/
while(i<m)
cout<<arr1[i++]<<"";
while(j<n)
cout<<arr2[j++]<<"";
}
/*Driver program to test above function*/
int main()
{
    int arr1[]={1,2,4,6};
    int arr2[]={2,3,4};
    
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    
    //function calling
    printunion(arr1,arr2,m,n);
    return 0;
}

output:
12346

...Program finished with exit code 0
Press ENTER to exit console.

