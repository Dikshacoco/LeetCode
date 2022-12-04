// https://leetcode.com/problems/plus-one/

#include<bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    if(digits[n-1] <= 8){
        digits[n-1] += 1;
        return digits;
    }
    int j = n-1;
    while(digits[j] == 9 && j > 0){
        j--;
    }
    if(j == 0 && digits[j] == 9){
        vector<int>v;
        v.push_back(1);
        int k = n;
        while(k){
            v.push_back(0);
            k--;
        }
        return v;
    }
    digits[j] += 1;
    j++;
    while(j < n){
        digits[j] = 0;
        j++;
    }
    return digits;
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

    vector<int> addedOne = plusOne(v);
    for(int i = 0; i < addedOne.size(); i++){
        cout<<addedOne[i];
    }
}