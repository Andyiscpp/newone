#include<iostream>
#include <iomanip>
#include<string>
using namespace std;
int main() 
{
	//float cost = 0.8;
	int num[50];
	int i;
	int sum[50];

	for(num[0] = 2,i=0;sum[i]<=100;i++)
	{
		num[i + 1] = num[i] * 2;
		sum[0]=num[0];

		sum[i + 1] = sum[i] + num[i + 1];
		
	}
	cout << "���ƹ���" << sum[i - 1]<<"��" << endl;
	//cout <<(0.8* sum[i + 1])/i << endl;
	cout << "�ۼ�"<<i<<"��" << endl;
	cout << "ƽ������"<<0.8*sum[i-1]/i<<"Ԫ" << endl;
	return 0;
}