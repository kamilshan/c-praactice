#include <stdlib.h>
typedef struct{
    int value;
    int index;

}Entry;
#define SIZE 20011
int hash(int x)
{
    if(x<0)
    x=-x;
    return x%SIZE;
    }
    int*twoSum(int* nums,int numsSize,int target, int* returnSize )
{
    Entry* table= malloc(sizeof(Entry)*SIZE);

    for(int i=0;i<SIZE;i++)
    table[i].index=-1;

    for(int i =0;i< numsSize;i++)
{
    int need = target-nums[i];
    int h= hash(need);

    while(table[h].index!=-1)
    {
        if(table[h].value==need)
        {
            int* ans= malloc(2*sizeof(int));
            ans[0] = table[h].index;
            ans[1] = i;
            *returnSize = 2;
            free(table);
            return ans;

        }
        h=(h+1)%SIZE;

    }
    int h2 = hash(nums[i]);
    while(table[h2].index!=-1)
{
    h2 = (h2+1)%SIZE;

}
table[h2].value =nums[i];
table[h2].index=i;

}
*returnSize=0;
free(table);
return NULL;
}