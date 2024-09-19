#include <bits/stdc++.h>
#define ll long long
using namespace std;
//Allen’s Code
int main(){
    cin.tie(0)->sync_with_stdio(0);
           
    vector<int> nums(7);

    for(int i = 0; i < 7; i++){
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int a = nums[0];
    int b = nums[1];
    int c = nums[2];

    if(c == a+b) c = nums[3];

    cout << a << " " << b << " " << c << "\n";
}
