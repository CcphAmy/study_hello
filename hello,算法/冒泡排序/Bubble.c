#include <stdio.h>

/**
 * 冒泡排序,复杂度 O(n^2)
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
	int temp;

	for (int i = 0; i < 19; ++i)
	{
		for (int b = 0; b < 20; ++b)
		{
			if (num[b]>num[b+1])
			{
				temp = num[b];
				num[b]=num[b+1];
				num[b+1]=temp;
			}
		}
	}

	//print
	for (int i = 0; i < 20; ++i)
	{
		printf("%d\t", num[i]);
	}
	return 0;
}