#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

//判断是否为质数
//返回值
/*..1为质数.....*/

int checkPrimeNumber(int n)
{
	int k=1;
		for (int j = 2; j <= sqrt(n); j++)
		{

			if (n%j == 0) {
				k = 0;
				break;
			}
		}
		return k;
}
int main()
	{
		int totalNum = 100;

		for (int i = 2; i <= totalNum; i++)
		{
			int res = checkPrimeNumber(i);
				
			if (res == 1)
			cout << "the number is:" <<i << endl;
		}
		system("pause");
		return 0;
	}