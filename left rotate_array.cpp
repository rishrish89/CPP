#include <iostream>
using namespace std;
void leftRotate(int arr[], int temp[], int N, int R) {
    for (int i = 0; i < N; i++)
 	   temp[i] = arr[(i+R)%N];
}
int main() {
    int arr[] = {2, 1, 3, 5, 6, 4, 7};
   int N = sizeof(arr) / sizeof(arr[0]);
   int R = 3;
   int temp[N];
   
    leftRotate(arr, temp, N, R);
    
    for (int i = 0; i < N; i++)
        cout << temp[i] << " ";
    return 0;
}
