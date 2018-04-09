#include <stdio.h>
/**
 *  * [quickSort 快速排序]
 * @param arrayValue [传入数组首地址]
 * @param left       [description]
 * @param right      [description]
 * Rem 被 连泽全 修改过的版本
 */
void quickSort(int arrayValue[],int left,int right){

	if (left >= right) return;


	int temp = arrayValue[left];//基准数
	int i = left;
	int j = right;
	int swapTemp;
	int pos = arrayValue[left];

	while(i!=j){
		//先右边 再左边 
		while(i!=j){
			//右边
			if(pos){
				if(arrayValue[j] < temp)
					break;
				else
					j--;
			}
			//左边
			else{
				if(arrayValue[i] > temp)
					break;
				else
					i++;
			}
		}
	//交换
		if (i!=j)
		{
			swapTemp = arrayValue[i];
			arrayValue[i] = arrayValue [j];
			arrayValue[j] = swapTemp;
		}

		pos = !pos;
	}
	quickSort(arrayValue,left,i - 1);//left
	quickSort(arrayValue,i + 1,right);//right
	return;

}

int main(int argc, char const *argv[])
{
	int num[]={2,8,6,2,8,
				 6,5,0,2,6,
				 7,9,8,7,5,
				 4,2,1,4,5};//20 个数
	int arrayNum = sizeof(num)/sizeof(int);//数组成员数
	printf("Array%d\n",arrayNum);
	for (int i = 0; i < arrayNum; ++i)
	{
		printf("%d\t",num[i]);
	}
	printf("\n");
	//int arrayNum = 20;
	quickSort(num,0,arrayNum - 1);
	for (int i = 0; i < arrayNum; ++i)
	{
		printf("%d\t",num[i]);
	}

	return 0;
}