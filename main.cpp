#include <iostream>

void BubbleSort(int* arr, size_t N);
void SelectionSort(int* arr, size_t N);
void InsertSort(int* arr, size_t N);
void QuickSort(int* arr, int left, int right);


int main(){

    int arr[] = {123, 122, 120, 120, 0};
    int N = 5;
    SelectionSort(arr, N);
    for(int i = 0; i < N; ++i){
        std::cout << arr[i] << " ";
    }
return 0;
}


void QuickSort(int* arr, int left, int right)
{
    if(left > right) return;
    int pivot = arr[(left+right)/2]; // средний элемент
    int i = left;
    int j = right;
    while(i <= j)
        {
            while(a[i] < pivot) i++;
            while(a[j] > pivot) j--;
            if(i <= j )
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
        }
    QuickSort(arr,left, j);
    QuickSort(arr, i, right);
}


// --------------------------------------------------------
// O(n*n) - difficult; 

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


void InsertSort(int* arr, size_t N)
{
    for(int i = 1; i < N; ++i)
        {
            int buffer = arr[i];
            int j = i - 1;
            while(j >= 0 && arr[j] > buffer)
                {
                    arr[j+1] = arr[j];
                    j--;
                }
                arr[j+1] = buffer;
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
// -------------------------------------------------------------------------
}

