// FindInPartiallySortedMatrix.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
// ��ά����matrix�У�ÿһ�ж������ҵ�������
// ÿһ�ж����ϵ��µ�������
bool Find(int* matrix, int rows, int columns, int number)//����Ķ�ά����Ҫ����ά��
{
    //ÿ��ȡ�����Ͻ�Ԫ��
	int curr_row=0;//Ŀǰ���Ͻǵ�Ԫ��
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
	cout<<"��"<<curr_row+1<<"�� "<<"��"<<curr_col+1<<"��"<<endl;
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
// Ҫ���ҵ�����������
void Test1()
{
    int matrix[][4] = {{1, 2, 8, 9}, {2, 4, 9, 12}, {4, 7, 10, 13}, {6, 8, 11, 15}};//matrix��һ����ָ�� *matrix��һ����ָ��
     Find(*matrix,4,4,11);
}


int _tmain(int argc, _TCHAR* argv[])
{
    Test1();
    

    return 0;
}

