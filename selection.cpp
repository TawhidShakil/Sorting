#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n){
    //indicate the min value
    for(int i=0; i<n-1; i++){
        int min = i;
        //compare the min value with array elements 
        // if min> array[elements] then min = array[elements]
        for(int j=i+1; j<n; j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        if(min!=i){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }



    // compare again if min> array[elements]
    // swapp the value;
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

selectionSort(arr,n);
printArray(arr,n);
    return 0;
}