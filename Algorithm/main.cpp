//各类排序算法的实现

#include <iostream>
using namespace std;

void Swap(int A[], int i, int j)
{
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}
//最基础的冒泡排序
void BubbleSort(int A[], int n)
{
    for (int j = 0; j < n-1; j++)
    {
        for (int i = 0; i < n-1; i++)
        {
            if(A[i] > A[i+1])
            {
                Swap(A, i, i+1);
            }
        }
    }
}



int main() {
    int A[] = {6,5,3,1,8,7,2,4};
    int n = sizeof(A)/ sizeof(int);
    BubbleSort(A, n);
    printf("冒泡排序的结果为：");
    for (int i = 0; i < n; i++)
    {
        printf("%d", A[i]);
    }
    printf("\n");


    std::cout << "Hello, World!" << std::endl;
    return 0;
}