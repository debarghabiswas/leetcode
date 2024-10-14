#include <stdio.h>
void getRow(int rowIndex){
    int arr[rowIndex + 1];
    for (int i = 0; i <= rowIndex; i++){
        arr[i] = 1;
        for (int j = i - 1; j > 0; j--)
            arr[j] += arr[j - 1];
    }
    for (int i = 0; i <= rowIndex; i++)
        printf("%d ", arr[i]);
}
int main(){
    int n = 5;
    getRow(n);
    return 0;
}