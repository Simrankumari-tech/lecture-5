#include<bits/stdc++.h>
using namespace std;
int main(){
int a[]={-1,2,3,-2,-5};
int n= sizeof(a)/sizeof(int);
int ans = INT_MIN;
//1st method O(N^3)
for(int i= 0 ;i<n; i++){
    for(int j=i ;j<n ;j++){
        int sum=0;
        for(int k=i ; k<j;k++){
            sum += a[k];
        }
        ans = max(sum,ans);
    }
}
cout << ans << endl;
return 0;
}

// //2nd method o(n^2)
// for(int i=0; i<n;i++){
//      int sum=0;
//     for(int j=i; j<n;j++){
//        sum += a[j];
        
//         ans = max(ans,sum);
//     }
// }
// cout << ans << endl;
//  return 0;
// }