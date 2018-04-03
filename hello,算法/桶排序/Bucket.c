#include <stdio.h>

/**
 * 简单的桶排序 
 * 简单思维 假设有 20 个数,数字范围0-9.现有简洁版桶排序
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, char const *argv[])
{
	int num[20]={2,8,6,2,8,
				 6,5,0,2,6,
				 7,9,8,7,5,
				 4,2,1,4,5};//20 个数
	int bucket[10]={0,0,0,0,0,0,0,0,0,0};//赋初值
	for (int i = 0; i < 20; ++i)
	{
		bucket[num[i]]++;	
	}
	//print
	for (int i = 0; i < 10; ++i)
	{
		for (int b = 0; b < bucket[i]; ++b)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}