#include <iostream>
using namespace std;

int main()
{
	cout << "입력할 정수의 개수는?";
	int n;
	cin >> n;	//정수의 개수 입력
	
	if(n <= 0)
	{
		cout << "뭐하자는거야";
	return 0;
	}

	int *p = new int[n];	//n 개의 정수 배열 동적 할당
	if(!p)
	{
		cout << "메모리 할당 실패";
		return 0;		 
	}
	
	for(int i = 0; i < n; i++)
	{
		cout << i+1 << "번째 정수 : ";	//프롬프트 출력
		cin >> p[i];					//키보드로부터 정수 입력
	}
	
	int sum = 0;
	for(int i = 0; i < n; i++)
		sum += p[i];
	cout << "배열 내의 평균 = " << sum/n << endl;
	
	delete [] p;				//배열 메모리 반환 
 } 
