#include <iostream>
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
//Bubble sort use kr skte best case me on hoga!!
int kthmax(int arr[],int n,int k){
    for(int i=0;i<k;i++){
        bool isswaped=false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswaped=true;
            }
        }
        if(!isswaped){
            return arr[n-k];
        }
    }
    return arr[n-k];
}
int kthmin(int arr[],int n,int k){
    for(int i=0;i<k;i++){
        bool isswaped=false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswaped=true;
            }
        }
        if(!isswaped){
            return arr[n-k];
        }
    }
    return arr[n-k];
}

int main()
{
    int arr1[] = {1212, 2212, 23, 4, 523, 32324323, 32};
    int arr2[] = {1};
    int arr3[] = {1,2,3,4,5,6,7,8,9,10,11,23,2342,4544,5555,44545};
    cout << "3rd max element" << kthmax(arr1, 7, 3) << endl;
    cout<<"first max element"<<kthmax(arr2,1,1)<<endl;
    cout<<"5th max element"<<kthmax(arr3,16,5)<<endl;
    cout<<"3rd min element"<<kthmin(arr1,7,3)<<endl;
    cout<<"first min element"<<kthmin(arr2,1,1)<<endl;
    cout<<"5th min element"<<kthmin(arr3,16,5)<<endl;
}
