#include <iostream>
#include <map>
#include <string>
using namespace std;

void reversearray(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
void printArray(int arr1[],int n){
    for(int i=0;i<n;i++){
        cout<<arr1[i] <<" ";
    }
    cout<<endl;
}
int main(){
    int arr1[]={1,2,3,4,523,324323,3232};
    int arr2[]={1};
    reversearray(arr1,7);
    reversearray(arr2,1);
    printArray(arr1,7);
    printArray(arr2,1);




}

