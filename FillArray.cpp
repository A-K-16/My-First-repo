#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void fillarray(int *arr, int n, int i){
    if(i==n){
        printarray(arr,n);
        return;
    }
    arr[i]=i;
    fillarray(arr,n,i+1);
    
    arr[i]=-1*arr[i]; //backtracking case when the callstack get's emptied  
    //Done after function call
}

int main(){
    int arr[10]={0};
    int n = sizeof(arr)/sizeof(int);
    fillarray(arr,n,0);
    printarray(arr,n);

}