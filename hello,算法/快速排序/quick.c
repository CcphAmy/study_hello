#include <stdio.h>
/**
 * [quickSort 快速排序]
 * @param arrayValue [传入数组首地址]
 */
void quickSort(int arrayValue[],int left,int right){

if (left > right) return;


	int temp = arrayValue[left];//基准数
	int i = left;
	int j = right;
	int swapTemp;


	while(i!=j){
	//第一波 首先从右边开始
		while(arrayValue[j]>temp && i<j) j--;
		while(arrayValue[i]<=temp && i<j) i++;
	//交换
		if (i<j)
		{
			swapTemp = arrayValue[i];
			arrayValue[i] = arrayValue [j];
			arrayValue[j] = swapTemp;
		}
	//基准数置于分界线
	//

	arrayValue[left] = arrayValue[i];
	arrayValue[i] = temp;


	for (int i = left; i <= right; ++i)
	{
		printf("%d\t", arrayValue[i]);
	}
		printf("  基准数:%d,left:%d,right:%d,i:%d,j:%d\n",temp,left,right,i,j);


	quickSort(arrayValue,left,i - 1);//left
	quickSort(arrayValue,i + 1,right);//right
	return;
	}

}

int main(int argc, char const *argv[])
{
	 int num[]={3,1,2,5,1,5,3,5,1,2,1,3,4};
	// int num[]={2,8,6,2,8,
	// 			 6,5,0,2,6,
	// 			 7,9,8,7,5,
	// 			 4,2,1,4,5};//20 个数
	int arrayNum = sizeof(num)/sizeof(int);//数组成员数
	printf("Array%d\n",arrayNum );
	//int arrayNum = 20;
	quickSort(num,0,arrayNum - 1);
	for (int i = 0; i < arrayNum; ++i)
	{
		printf("%d\t",num[i]);
	}
	return 0;
}