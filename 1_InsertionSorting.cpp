#include<iostream>
using namespace std;
int main(){
int a[]= {3,5,2,1,4};
int n= sizeof(a)/sizeof (int);
for(int i = 1;i<n; i++){
    int key = a[i];
    int pos= i-1;
    while(pos>=0 and a[pos]>key){
        a[pos+1] = a[pos];
        pos--;
}
a[pos+1]= key;
}
for(int i = 0; i<n; i++){
    cout << a[i]<< " ";
}
    return 0;
}