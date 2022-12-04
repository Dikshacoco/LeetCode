#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<int> v;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(nums[i] + nums[j] == target){
                v.push_back(i);
                v.push_back(j);
            }
        }
    }
    return v;
}

int main() {
    vector<int> v;
    int target;
    while(true){
        int x;
        cin>>x;
        v.push_back(x);
        if (cin.peek() == '\n') {
            break;
        }   
    }
    cin>>target;
    vector<int> sumIndex = twoSum(v, target);
    cout<<sumIndex[0]<<endl;
    cout<<sumIndex[1]<<endl;
}

