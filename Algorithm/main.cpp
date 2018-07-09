//主函数

#include <iostream>
#include "sort.cpp"                       //包含排序函数
#include "Search.cpp"                     //包含查找函数


using namespace std;








int main() {
    int A[] = {6,5,3,1,8,7,2,4};
    int n = sizeof(A)/ sizeof(int);


    for (int i = 0; i < n; i++)
    {
        printf("%d", A[i]);
    }
    printf("\n");


    std::cout << "Hello, World!" << std::endl;
    return 0;
}