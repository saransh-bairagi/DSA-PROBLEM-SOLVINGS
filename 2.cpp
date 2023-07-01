#include<iostream>
#include <string>
#include <vector>

using namespace std;
void printArray(int arr1[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
}

int minimumArray(int arr[],int n){
    int max=INT_MAX;
    for(int i=0;i<n;i++){
        max = max>arr[i]?arr[i]:max;
    }
    return max;
}
int maximumArray(int arr[],int n){
    int min=INT_MIN;
    for (int i=0;i<n;i++){
        min=min<arr[i]?arr[i]:min;
    }
    return min;
}

int main()
{
    int arr1[] = {1212, 2212, 23, 4, 523, 324323, 3232};
    int arr2[] = {1};
    cout<<minimumArray(arr1,7)<<endl;
    cout<<minimumArray(arr2,1)<<endl;
    cout<<maximumArray(arr1,7)<<endl;
    cout<<maximumArray(arr2,1)<<endl;
}

