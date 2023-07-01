#include <iostream>
#include <vector>
using namespace std;
vector<int> union1(vector<int> v1, vector<int> v2)
{
    vector<int> answer;
    int i = 0;
    int j = 0;
    int difference=v1.size()>=v2.size()?v1.size()-v2.size():v2.size()-v1.size();

    while (i < v1.size()&&j < v2.size())
    {
        if (v1[i] == v1[i + 1])
        {
            i++;
            continue;
        }
        if (v2[j] == v2[j + 1])
        {
            j++;
            continue;
        }
        if (v1[i] == v2[j])
        {
            answer.push_back(v1[i]);
        }
        else
        {
            answer.push_back(v1[i]);
            answer.push_back(v2[j]);
        }
        i++;
        j++;
    }
    while(difference){
        if(i+1!=v1.size()){
            answer.push_back(v1[i++]);
        }
        else{
            answer.push_back(v2[j++]);
        }
        difference--;
    }
    return answer;
}
// vector<int> intersection1(vector<int> v1, vector<int> v2)
// {
// }

int main() {
    vector<int>v1={1, 3, 4, 5, 7};
    vector<int> v2 = {2, 3, 5, 6};
    vector<int>answer=union1(v1,v2);
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
}