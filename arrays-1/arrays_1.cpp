#include <iostream>
using namespace std; 

int search(int n, int arr[], int key){
    for (int i = 0; i<n; i++){
        if (arr[i]==key){
            return i; 
        }
    }
    return -1;
}

int main(){
    int n, key;
    cin>>n>>key;

    int arr[n]; 
    
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<search(n, arr, key);

    return 0;
}