//各类排序算法的实现

#include <iostream>
using namespace std;

void Swap(int A[], int i, int j)
{
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}
//-------------------------------------【冒泡排序】-----------------------------------------
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

//冒泡排序改进版1
void CocktailSort(int A[], int n)
{
    int left = 0;   //初始化边界
    int right = n - 1;
    while(left < right)
    {
        for (int i = left; i < right; i++)
        {
            if(A[i]>A[i+1])
            {
                Swap(A,i,i+1);
            }
        }
        right--;
        for (int j = right; j > left; j--)
        {
            if(A[j-1] > A[j])
            {
                Swap(A,j-1,j);
            }
        }
        left++;
    }
}


//-------------------------------------【选择排序】-----------------------------------------
// 选择排序也是一种简单直观的排序算法。它的工作原理很容易理解：初始时在序列中找到最小（大）元素，放到序列的起始位置作为已排序序列；
// 然后，再从剩余未排序元素中继续寻找最小（大）元素，放到已排序序列的末尾。以此类推，直到所有元素均排序完毕。
// 注意选择排序与冒泡排序的区别：冒泡排序通过依次交换相邻两个顺序不合法的元素位置，从而将当前最小（大）元素放到合适的位置；
// 而选择排序每遍历一次都记住了当前最小（大）元素的位置，最后仅需一次交换操作即可将其放到合适的位置。

// 选择排序是不稳定的排序算法，不稳定发生在最小元素与A[i]交换的时刻。
// 比如序列：{ 5, 8, 5, 2, 9 }，一次选择的最小元素是2，然后把2和第一个5进行交换，从而改变了两个元素5的相对次序。
void SelectionSort(int A[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if(A[j]<A[min])
            {
                min = j;
            }
        }
        if(min != i)
        {
            Swap(A, min, i);      // 放到已排序序列的末尾，该操作很有可能把稳定性打乱，所以选择排序是不稳定的排序算法
        }
    }
}



















int main() {
    int A[] = {6,5,3,1,8,7,2,4};
    int n = sizeof(A)/ sizeof(int);
    //BubbleSort(A, n);
    CocktailSort(A, n);
    printf("冒泡排序的结果为：");
    for (int i = 0; i < n; i++)
    {
        printf("%d", A[i]);
    }
    printf("\n");


    std::cout << "Hello, World!" << std::endl;
    return 0;
}