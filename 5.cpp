#include <iostream>
#include <vector>
using namespace std;
int step=0;
void printarray(vector<int>arr){
    for(int value:arr){
        cout<<value<<" ";
    }
    cout<<"\n";
}

void movenegativerecurs(vector<int>&arr,int left,int right){
    cout<<"step "<<step<<"\n";
    printarray(arr);
    step++;
    // Base Case
    if(left>right){
        return;
    }
    if(arr[left]<0) left++;
    if(arr[right]>0) right--;
    if(arr[left]>0 &&arr[right]<0&&left<right) swap(arr[left],arr[right]);
    movenegativerecurs(arr,left,right);
}
void movenegativeleft(vector<int>&arr){
    movenegativerecurs(arr,0,arr.size()-1);
}
int main(){
    vector <int>arr={1,21,2,2,2,2,2,24343,34,3432,-2122,-233,-4123,-42343,23432,-423323};
    movenegativeleft(arr);
    for(int value:arr){
        cout<<value<<" ";
    }
}