#include<iostream>
using namespace std;

int main() {
    int arr[100] = {1, 35, 53, 54, 60, 63, 82, 83, 101, 107, 114, 115, 121, 124, 133, 137, 139, 154, 169, 172, 177, 192, 202, 228, 232, 232, 258, 258, 260, 261, 266, 267, 267, 274, 292, 353, 364, 389, 395, 419, 435, 436, 475, 479, 497, 500, 503, 504, 517, 518, 537, 558, 561, 566, 572, 578, 580, 581, 602, 603, 604, 616, 639, 643, 650, 652, 656, 669, 673, 686, 698, 702, 703, 748, 749, 777, 784, 801, 814, 817, 820, 838, 861, 867, 871, 872, 892, 904, 913, 915, 919, 920, 925, 932, 947, 955, 957, 959, 990, 991};
    int start = 0, end = 99;
    int target;
    cout<<"Enter the number : ";
    cin>>target;
    while (start <= end){
        int mid = (start + end) / 2;
        if (arr[mid] == target){
            cout<<"Found at "<<mid<<endl;
            return 0;
        } else if (arr[mid] > target){
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    cout<<"not found"<<endl;
    return 1;
}