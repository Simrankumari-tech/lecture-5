#include<bits/stdc++.h>
using namespace std;
int main(){
    //using kadane algo
    int a[]={-1,2,3,-2,-5};
    int n= sizeof(a)/sizeof(int);
    int ans = INT_MIN;
    int sum=0;
    for(int i=0; i<n;i++){
        sum +=a[i];
        if(sum>ans){
            ans= sum;
        }
        if(sum<0){
            sum = 0;
        }
    }
cout << ans<< endl;
return 0;
}