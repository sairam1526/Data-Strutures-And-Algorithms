#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int begin, int end){

    while(begin < end){
        swap(arr[begin],arr[end]);
        begin++;
        end--;
    }

}

void reverseArrayByRecursion(int arr[],int begin, int end){
    if(begin >= end)
        return;
    swap(arr[begin],arr[end]);
    reverseArrayByRecursion(arr,begin+1,end-1);
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,0,n-1);
    reverseArrayByRecursion(arr,0,n-1);
    printArray(arr,n);
    return 0;
}