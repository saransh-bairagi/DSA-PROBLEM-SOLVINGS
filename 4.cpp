#include <iostream>
#include <string>
// <--------Dutch Flag Algo With Recurssion-------->//
using namespace std;
void sortarrayrecurs(int arr[],int low,int high,int mid){
    // base cases
    if(mid>high){
        return;
    }
    if(arr[mid]==0){
        swap(arr[low],arr[mid]);
        low++;
        mid++;
    }
    else if(arr[mid]==1){
        mid++;
    }
    else{
        swap(arr[mid],arr[high]);
        high--;
    }
    sortarrayrecurs(arr,low,high,mid);
}
void sortarray(int arr[],int length){
     sortarrayrecurs(arr,0,length-1,0);
}


int main(){
     int arr[] = {2,0,2,1,1,0};
     int length = 6;
     sortarray(arr, length);
     for (int i = 0; i < length; i++)
     {
        cout << arr[i] << " ";
}
}