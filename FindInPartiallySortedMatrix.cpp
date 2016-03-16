// FindInPartiallySortedMatrix.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
// 二维数组matrix中，每一行都从左到右递增排序，
// 每一列都从上到下递增排序
bool Find(int* matrix, int rows, int columns, int number)//输入的二维数组要给出维数
{
    //每次取第右上角元素
	int curr_row=0;//目前右上角的元素
	int curr_col=0;
	curr_row=0;
	curr_col=columns-1;
	while (curr_col>=0&&curr_row<rows)
	{
	if (number<matrix[curr_row*rows+curr_col])//number is less than cornor num delete one col
	{
		curr_col--;
	}
	else if (number>matrix[curr_row*rows+curr_col]) //delete one row
	{
		curr_row++;
	}
	else
	{
	cout<<"第"<<curr_row+1<<"行 "<<"第"<<curr_col+1<<"列"<<endl;
	return 1;
	}
	}
	cout <<"not found"<<endl;
	return 0;
}

//  1   2   8   9
//  2   4   9   12
//  4   7   10  13
//  6   8   11  15
// 要查找的数在数组中
void Test1()
{
    int matrix[][4] = {{1, 2, 8, 9}, {2, 4, 9, 12}, {4, 7, 10, 13}, {6, 8, 11, 15}};//matrix是一个行指针 *matrix是一个列指针
     Find(*matrix,4,4,11);
}


int _tmain(int argc, _TCHAR* argv[])
{
    Test1();
    

    return 0;
}

