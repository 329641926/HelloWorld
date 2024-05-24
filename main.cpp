#include <iostream>

void swap(int&a, int&b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void sort(int arr[], int sz) {
    for(int i=0;i<sz-1;i++) {
        for(int j=0;j<sz-1-i;j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);    
            }
        }
    }    
}

void printArr(int arr[], int sz) {
    for(int i=0; i<=sz; i++) {
        std::cout<< arr[i] << " ";
    }
    std::cout<<std::endl;
}

int main() {
    int arr[] = {12, 65, 32, 90, 85, 9, 54};
    int sz = sizeof(arr) / sizeof(arr[0]);

    sort(arr, sz);

    return 0;
}
