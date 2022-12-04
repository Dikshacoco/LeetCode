// https://leetcode.com/problems/merge-sorted-array/

#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = 0, j = 0;
    vector<int> v;
    while(i < m && j < n){
        if(nums1[i] < nums2[j]){
            v.push_back(nums1[i]);
            i++;
        }
        else{
            v.push_back(nums2[j]);
            j++;
        }    
    }
    while(i != m){
        v.push_back(nums1[i]);
        i++;
    }
    while(j != n){
        v.push_back(nums2[j]);
        j++;
    }
    nums1 =v;
}

int main() {
    vector<int> nums1;
    vector<int> nums2;
    int m;
    int n;
    cin>>m;
    cin>>n;
    for(int i = 0; i < m+n; i++){
        int x;
        cin>>x;
        nums1.push_back(x);
    }
    
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        nums2.push_back(x);
    }
    
   merge(nums1, m, nums2, n);
    for(int i = 0; i < nums1.size(); i++){
        cout<<nums1[i]<<" ";
    }
}