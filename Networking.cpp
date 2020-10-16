#include <iostream>
#include "Network.h"
using namespace std;

int main()
{
	Network a ("Networks1.txt");
	Network b ("Networks1.txt");
	cout<<a<<endl<<b<<endl;
	Network c = a;
	//cout<<c;
	/*cout<<a*b<<endl;
	cout<<a+b<<endl;*/
//	cout<<a-b;
//	a.addConnection (0,9);
	//a++;
	//cout<<a;
	//cout<<a [0][2];
	vector<int>b;
	//cout<<a;
	system ("pause");
	return 0;
}