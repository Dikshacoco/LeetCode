//https://leetcode.com/problems/remove-element/
#include<bits/stdc++.h>
using namespace std;

 int removeElement(vector<int>& nums, int val) {
    int n = nums.size();
         int c = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == val){
                c++;
            }
        }
        int j = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] != val){
                nums[j] = nums[i];
                j++;
            }
            
        }
        return (n-c);
    
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

    int val;
    cin>>val;

    int countUnique = removeElement(v, val);
    cout<<countUnique;
}