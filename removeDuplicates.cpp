// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
#include<bits/stdc++.h>
using namespace std;

 int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    int p = nums[0];
    int k = 1;
    for(int i = 0; i < n; i++){
        if(nums[i] != p){
            nums[k] = nums[i];
            p = nums[i];
            k++;
        }
    }
    return k;
}

int main() {
    vector<int> v;
    while(true){
        int x;
        cin>>x;
        v.push_back(x);
        if (cin.peek() == '\n') {
            break;
        }   
    }
    int countUnique = removeDuplicates(v);
    cout<<countUnique;
}