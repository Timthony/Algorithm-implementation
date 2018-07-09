//
// Created by arcstone_mems on 2018/7/6.        查找算法
//

// 顺序查找







int Sequential_Search(int *a,int n,int key)
{
    int i;

    for(i = 1; i<=n; i++)
    {
        if(a[i] == key)
        {
            return i;
        }
    }
    return 0;

}


