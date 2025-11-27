int removeElement(int* nums, int numsSize, int val) {
    //双指针
    int *p = nums;
    int *q = nums + numsSize - 1;

    //p == q时没有判断该位置数据不确定
    //如果不等于那么p-nums+1错误，所以需要判断，结束条件是p>q
    //(c primer plus上说过，C保证在给数组分配空间时，指向数组
    //后面第一个位置的指针仍是有效的指针)
    while(p <= q)
    {
        if(*q == val)
        {
            q--;
            continue;
        }

        if(*p == val)
        {
            *p = *q;
            q--;
        }
        p++;
    }

    return p - nums;
}
