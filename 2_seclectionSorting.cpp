#include<iostream>
using namespace std;
int main (){
int a[]={3,5,1,2,4};
int n= sizeof(a)/sizeof(int);
for(int i = 0; i<n ; i++){
    int min_index= i;
    for(int j=i; j<n; j++){
        if(a[j]< a[min_index]){
            min_index= j;
        }
    }
    swap(a[min_index], a[i]);
}
for(int i= 0; i<n ; i++){
    cout << a[i] << " ";
}

    return 0;
}