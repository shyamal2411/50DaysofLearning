#include<bits/stdc++.h> 
using namespace std;


int findsingleXOR(vector<int> &nums){
        int n = nums.size();
        int xor_of_all = 0;
        for(int i=0;i<n;i++){
            xor_of_all ^= nums[i];
        }
        return xor_of_all;
}

int findsingleeleBS(vector<int> &nums){
    int low=0;
    int high=nums.size()-1;
    /*
    As we want to search single element, and array is already sorted
    So BS only works.
    */
    while(low<=high){
        int mid = (low+high)/2;

    /*
     if our mid is even, check if its i+1 is same or not. Then perform BS
    */
        if(mid%2==0){
            if(nums[mid]!=nums[mid+1])
            high=mid-1;
            else
            low=mid+1;
        }
        /*
        if mid and i+1 are same, then perform BS and finally find the element
        */
        else{
            if(nums[mid] == nums[mid+1])
            high=mid-1;
            else
            low=mid+1;
        }
    }
    return nums[low];
}

int main(){
    vector<int> v = {1,1,2,3,3,4,4,4,6,6};
    int el = findsingleele(v);
    cout<<el<<endl;
}

/*
Learnings today:
Solved Java questions
Walked 2.9 km
*/