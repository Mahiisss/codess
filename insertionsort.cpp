#include<iostream>
#include<stdbool.h>
#include<vector>
using namespace std;

void bubblesort(int arr[], int n)
{   
    for(int i = 1; i<n; i++) {
        //for round 1 to n-1
        bool swapped = false;
        
        for(int j =0; j<n-i; j++) {
            
            //process element till n-i th index
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
            
        }
        
        if(swapped == false) {
            //already sorted
            break;
        }
           
    }
}
void printArray(int arr[], int n) 
{ 

    int i; 

    for (i = 0; i < n; i++) 

        cout << arr[i] << " "; 

    cout << endl;
} 
 
// Driver code

int main() 
{ 

    int arr[] = { 12, 11, 13, 5, 6 }; 

    int N = sizeof(arr) / sizeof(arr[0]); 
     printArray(arr,N);

    bubblesort(arr, N); 

    printArray(arr, N); 
 

    return 0; 
}
