#include<iostream>
using namespace std;
int main(){
int a[] ={6,0,3,2};
int n= sizeof(a)/ sizeof(int);
for(int i= 0; i<n-1;i++){
    for(int j=0; j<n-2-i ;j++){
        if(a[j] > a[j+1]){
            swap (a[j], a[j+1]);
        }
    }
}
for(int i= 0; i<n; i++){
    cout << a[i] << " ";
}


    return 0;
}