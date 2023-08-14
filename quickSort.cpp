#include<bits/stdc++.h>
using namespace std;

int partition_array(int arr[], int start, int end){
    int partisionIndex = start;
    int pivot = arr[end];

    for(int i=start; i<end; i++){
        if(arr[i]<= pivot){
            swap(arr[i], arr[partisionIndex]);
            partisionIndex++;
        }
    }

        swap(arr[partisionIndex], arr[end]);
        return partisionIndex;
}

void quickSort(int arr[], int start, int end){
    if(start<end){
        int partision = partition_array(arr, start, end);

         quickSort(arr, start, partision-1);
         quickSort(arr, partision+1, end);
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}

quickSort(arr, 0, n-1);
printArray(arr, n);

    return 0;
}