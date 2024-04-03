#include <iostream>
#include <bits/stdc++.h> 
using namespace std; 

void selectionSort(int arr[], int n){
    int i, j, min_idx;
    
    for(int i=0; i<n-1; i++){
        min_idx = i;
        
        for(int j = i+1; j<n-1; j++){
            if(arr[j]< arr[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx != i){
            swap(arr[i], arr[min_idx]);
        }
        
    }
}
