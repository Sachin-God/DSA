#include <iostream>

using namespace std;

class Array{
private:
    int *A;
    int size;
    int length;

public:
    Array(int sz){
        this->size = sz;
        this->A = new int[sz];
        this->length = 0;
    }

    ~Array(){
        delete[] A;
    }

    void display(){
        cout << "[";
        for (int i = 0; i < length; i++){
            cout << " " << A[i];
        }
        cout << " " << "]" << endl;
    }

    void Append(int data){
        if (length == size){
            cout<<"Array Is Filled"<<endl;
            return;
        }
        A[length] = data;
        length += 1;
    }

    void insert(int idx, int data){
        if (idx < 0 || idx > length || length == size){
            cout<<"Invalid Index"<<endl;
            return;
        }

        for (int i = length; i > idx; i--){
            A[i] = A[i - 1];
        }

        A[idx] = data;
        length++;
    }

    int pop(){
        if (length > 0){
            length--;
            int temp = A[length];
            A[length] = 0;
            return temp;
        }
        return -1;
    }

    void remove(int idx){
        if (idx < 0 || idx >= length){
            cout<<"Invalid Index"<<endl;
            return;
        }
        if (idx == length - 1){
            pop();
            return;
        }
        for (int i = idx; i < length - 1; i++){
            A[i] = A[i+1];
        }
        length--;
        A[length] = 0;
    }

    int linearSearch(int n){
        for (int i = 0; i < length; i++){
            if (A[i] == n){
                cout<<"Element "<<n<<" is at index "<<i<<endl;
                return i;
            }
        }
        return -1;
    }

    int BinarySearch(int n){
        int start = 0, end = length - 1, mid;
        while (start <= end){
            mid = (start + end) / 2;
            if (A[mid] > n){
                end = mid - 1;
            } else if (A[mid] < n){
                start = mid + 1;
            } else {
                return mid;
            }
        }
        return -1;
    }

    int get(int idx){
        if (idx >= 0 && idx < length){
            return A[idx];
        } 
        return -1;
    }

    void set(int data, int idx){
        if (idx >= 0 && idx < length){
            A[idx] = data;
        }
    }

    int max(){
        int m = INT32_MIN;
        for (int i = 0; i < length; i++){
            if (A[i] > m){
                m = A[i];
            }
        }
        return m;
    }

    int min(){
        int m = INT32_MAX;
        for (int i = 0; i < length; i++){
            if (A[i] < m){
                m = A[i];
            }
        }
        return m;
    }

    int sum(){
        int total = 0;
        if (length == 0) return 0;

        for (int i = 0; i < length; i++){
            total += A[i];
        }
        return total;
    }

    float avg(){
        float total = 0;
        if (length == 0) return 0;

        for (int i = 0; i < length; i++){
            total += A[i];
        }
        return total / length;
    }

    void reverse(int idx = 0){
        if (idx >= length / 2) return;
        int temp = A[idx];
        A[idx] = A[length - idx - 1];
        A[length - idx - 1] = temp;
        reverse(idx + 1);
    }

    void merge(Array arr1, Array arr2){
        if (length != 0) {
            cout<<"Cannot merge: Array is not empty"<<endl;
            return;
        }

        if (size < arr1.length + arr2.length) {
            delete []A;
            this->size = arr1.length + arr2.length;
            A = new int[size];
        }

        int i = 0, j = 0, k = 0;

        while (i < arr1.length && j < arr2.length){
            if (arr1.get(i) < arr2.get(j)){
                A[k++] = arr1.get(i++);
            } else {
                A[k++] = arr2.get(j++);
            }
        }

        while (i < arr1.length) { A[k++] = arr1.get(i++); }
        while (j < arr2.length) { A[k++] = arr2.get(j++); }
        length = size;
    }
};

int main(){
    int size;
    cout << "Enter the Size of the Array : ";
    cin >> size;
    Array arr(size);

    int n;
    for (int i = 0; i < 5; i++){
        cout << "Enter Number " << i + 1 << " : ";
        cin >> n;
        arr.Append(n);
    }

    arr.display();
    arr.linearSearch(5);
    return 0;
}