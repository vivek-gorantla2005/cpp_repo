#include <iostream>
using namespace std;

class Heap {
public:
    int arr[100];
    int size;

    Heap() {
        size = 0; // Initialize size to 0
        arr[0] = -1; // Dummy value for 1-based indexing
    }

    void insert(int val) {
        size++;
        int index = size;
        arr[index] = val;

        while (index > 1) {
            int parent = index / 2;
            if (arr[index] > arr[parent]) {
                swap(arr[index], arr[parent]);
                index = parent;
            } else {
                return;
            }
        }
    }

    void deleteNode() {
        if (size == 0) {
            cout << "Heap is empty!" << endl;
            return;
        }

        // Step 1: Replace root with last element
        arr[1] = arr[size];
        size--;

        // Step 2: Heapify downward
        int i = 1;
        while (i <= size) {
            int left = 2 * i;
            int right = 2 * i + 1;
            int largest = i;

            // Compare left child
            if (left <= size && arr[left] > arr[largest]) {
                largest = left;
            }
            // Compare right child
            if (right <= size && arr[right] > arr[largest]) {
                largest = right;
            }

            // If largest is not the current node, swap
            if (largest != i) {
                swap(arr[i], arr[largest]);
                i = largest; // Move to the largest child
            } else {
                break; // No further swaps needed
            }
        }
    }

    void disp() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


void heapify(int arr[], int n, int index) {
    int largest = index;
    int left = 2 * index;
    int right = 2 * index + 1;

    // Check if left child exists and is greater than the current largest
    if (left <= n && arr[left] > arr[largest]) {
        largest = left;
    }

    // Check if right child exists and is greater than the current largest
    if (right <= n && arr[right] > arr[largest]) {
        largest = right;
    }

    // If the largest is not the current node, swap and recurse
    if (largest != index) {
        swap(arr[index], arr[largest]);
        heapify(arr, n, largest);
    }
}


void buildHeap(int arr[], int n) {
    // Start from the last non-leaf node and heapify each node
    for (int i = n / 2; i >= 1; i--) {
        heapify(arr, n, i);
    }
}

void heapsort(int arr[], int n) {
    // Step 1: Build the max heap
    buildHeap(arr, n);

    // Step 2: Extract elements from the heap one by one
    for (int i = n; i >= 2; i--) {
        swap(arr[1], arr[i]);
        n--;
        heapify(arr, n, 1);
    }
}


int main() {
    Heap h;
    h.insert(10);
    h.insert(20);
    h.insert(21);
    h.disp();

    h.deleteNode();
    h.disp();

    h.deleteNode();
    h.disp();

    h.deleteNode();
    h.disp();

    // Demonstrate heapify usage
    int arr[] = {-1, 10, 20, 15, 30, 40}; // 1-based indexing
    int n = 5;
    buildHeap(arr, n);
    heapsort(arr,n);

    cout << "Heap after heapsort";
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

