/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int start, int end, int target){
    
    // int mid = (start+end)/2;
    int mid = start+(end-start)/2;
    cout << "target value " << target << "\n";
    while(start<=end){
        
    
        // mid compare
        
        cout << "start value " << start << "\n";
        cout << "end value " << end << "\n";
        cout << "mid value " << mid << "\n";
        
        cout << "arr sds sss [mid  ] " << arr[mid] << "\n";
        
        if(arr[mid]==target){
            return mid;
        }
        
        // left compare
        if(target < arr[mid]){
            end = mid -1;
        }
        
        
        // right compare
        if(target > arr[mid]){
            start = mid + 1;
        }    
        mid = start+(end-start)/2;
    }
    
    return -1;
}

int main()
{
    // single dimesion array
    int arr[] = {1,3,4,6,7,9};
    int target = 1;
    int ans;
    ans = binarySearch(arr, 0, 5, target);
    cout << "ans is " << ans << " value is " << arr[ans];

    return 0;
}


