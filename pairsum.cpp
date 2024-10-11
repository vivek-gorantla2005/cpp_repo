#include<iostream>
#include<vector>
using namespace std;

vector <int> pairsum(vector <int > num , int targetsum){
    vector <int> result;
    int i = 0 ;
    int n = num.size();
    int j = n-1;
    int pairsum = 0;
    while (i<j){
        pairsum = num[i]+ num[j];
        if(pairsum > targetsum){
            j--;
        }
        else if(pairsum < targetsum){
            i++;
        }
        else{
            result.push_back(num[i]);
            result.push_back(num[j]);
            return result;
        }
    }
    return result;
}
int main(){
    vector <int> nums = {2,7,11,15};
    int targetsum = 9;
    vector <int> ans = pairsum(nums,targetsum);
    cout << "Pairs with given sum are: " << ans[0] << ", " << ans[1] << endl;
    return 0;
}