#include<iostream>

using namespace std;

int main() {
    int *A, n, choice;
    printf("Enter the dimensions : ");
    scanf("%d",&n);
    A = (int *)malloc(sizeof(int) * n);

    bool valid = true;
    do {
        cout<<"1. Create"<<endl<<"2. Get"<<endl<<"3. Set"<<endl<<"4. Display"<<endl<<"Type \"5\" to EXIT"<<endl;
        printf(" Choose Your pick : ");
        scanf("%d", &choice);
        if (choice == 5){
            valid = false;
            continue;
        }
        int i, j;
        switch (choice){
        case 1:
            for (int i = 1; i <= n; i++){
                cout<<"A["<<i<<"]"<<"["<<i<<"] = ";
                scanf("%d", &A[i-1]);
            }
            break;
        
        case 2:
            cout<<"Enter Indices : ";
            scanf("%d %d", &i, &j);
            if (i == j) {
                cout<<A[i-1]<<endl;
            } else {
                cout<<0<<endl;
            }
            break;
        
        case 3:
            cout<<"Enter Indices : ";
            scanf("%d %d", &i, &j);
            if (i == j) {
                scanf("%d", &A[i-1]);
            } else {
                cout<<"This is a Diagonal Matrix";
            }
            break;
        
        case 4:
            for (int i = 0; i < n; i++ ){
                for (int j = 0; j <n; j++ ){
                    if (i == j){
                        cout<<A[i]<<" ";
                    } else {
                        cout<<0<<" ";
                    }
                }
                cout<<endl;
            }

        default:
            break;
        }
    } while (valid);
    return 0;
}