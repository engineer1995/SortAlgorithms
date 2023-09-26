#include <iostream>

void BubbleSort(int* arr, size_t N);
void SelectionSort(int* arr, size_t N);
void InsertSort(int* arr, size_t N);



int main(){

    int arr[] = {123, 122, 120, 120, 0};
    int N = 5;
    SelectionSort(arr, N);
    for(int i = 0; i < N; ++i){
        std::cout << arr[i] << " ";
    }
return 0;
}



void SelectionSort(int* arr, size_t N){
    for (int i = 0; i < N-1; ++i){
        int buffer = i;
        for(int j = i+1; j < N; ++j){
            if(arr[buffer] > arr[j]){
                buffer = j;
            }
        }
        if(buffer!=i){
            int temp = arr[i];
            arr[i] = arr[buffer];
            arr[buffer] = temp;
            
        }
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

