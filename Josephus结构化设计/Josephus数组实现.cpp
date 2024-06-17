#include<iostream>
using namespace std;

int main()
{
	const int numOfBoy = 7;
	int boy[numOfBoy];  //定义小孩数组
	int m;
	cout << "please input the interval" << endl;    //输入间隔数
	cin >> m;
	int num = 0;
	for (;num< numOfBoy;num++)
	{
		boy[num] = num+1;          //排位小孩
	}
	for (num=0;num < numOfBoy; num++)
	{
		cout << boy[num];          //输出当前小孩排数
	}
	cout << endl;


	int j = m;        //间隔
	num = numOfBoy;      //将num定义为剩余小孩数量

	int p = 0;
	for (; num>1; num--)
	{
		
		for (int j=m;j>0;p++)      //阎王点卯
		{
			p = p % 7;
			if (boy[p] != 0)
				j--;
			if (j == 0)
			{
				boy[p] = 0;
				j = -1;
			}
		}
		int j = m;          //重置j值
	}

	for (num = 0; num < numOfBoy; num++)        //输出胜者
	{
		
		if (boy[num] != 0)
		{
			cout << boy[num] << endl;

		}
	}


	system("pause");
}



