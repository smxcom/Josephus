#include<iostream>
using namespace std;

int main()
{
	const int numOfBoy = 7;
	int boy[numOfBoy];  //����С������
	int m;
	cout << "please input the interval" << endl;    //��������
	cin >> m;
	int num = 0;
	for (;num< numOfBoy;num++)
	{
		boy[num] = num+1;          //��λС��
	}
	for (num=0;num < numOfBoy; num++)
	{
		cout << boy[num];          //�����ǰС������
	}
	cout << endl;


	int j = m;        //���
	num = numOfBoy;      //��num����Ϊʣ��С������

	int p = 0;
	for (; num>1; num--)
	{
		
		for (int j=m;j>0;p++)      //������î
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
		int j = m;          //����jֵ
	}

	for (num = 0; num < numOfBoy; num++)        //���ʤ��
	{
		
		if (boy[num] != 0)
		{
			cout << boy[num] << endl;

		}
	}


	system("pause");
}



