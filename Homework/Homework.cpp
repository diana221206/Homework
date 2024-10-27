

#include <iostream>
#include <vector>

    void bubbleSort(std::vector<int>&arr, bool ascending)
{
    int n = arr.size();
    bool swapped;

    do {
        swapped = false;
        for (int i = 0; i < n - 1; ++i) {
            if ((ascending && arr[i] > arr[i + 1]) || (!ascending && arr[i] < arr[i + 1])) {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
        n--; 
    } while (swapped);
}

int main() {
    std::vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };

    
    bubbleSort(arr, true);
    std::cout << 
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    bubbleSort(arr, false);
    std::cout << 
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

