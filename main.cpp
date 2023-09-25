#include <iostream>

void BubbleSort(int* arr, size_t N);
void SelectionSort();
void InsertSort();



int main(){

    int arr [] = {23,43,1, 4, 5};
    int N = 5;
    BubbleSort(arr, N);
    for(int i = 0; i < N; ++i){
        std::cout << arr[i] << " ";
    }
}



void BubbleSort(int* arr, size_t N){
    bool is_updated = true;
    while (is_updated)
    {
        is_updated = false;
        for(int i = 0; i+1< N; ++i){
            if(arr[i+1] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                is_updated= true;
            }
        }
    }
    
}

