
#if 0
//�Ǽ�����4.13
#include <iostream>
#include <vector>
using namespace std;
vector<int> a = { 1, 1 };
void data_init()
{
	int i;
	for (i = 2; i<10005; i++)
	{
		a.push_back((a[i - 1] + a[i - 2]) % 10000);
	}
}

int main()
{
	int n, t;
	data_init();
	while (cin >> n)
	{
		while (n--)
		{
			cin >> t;
			printf("%04d", a[t]);
		}
		printf("\n");
	}
	return 0;
}

#endif

#if 0
//����  --��
#include <iostream>
using namespace std;
int Fun(int num)
{
	int res=0;
	while(num)
	{
		res+=num%10;
		num/=10;
	}
	while(res>9)
		res=Fun(res);

	return res;

}
int main()
{
	int num;
	while(cin>>num)
	{
		cout<<Fun(num);
	}
	return 0;
}
#endif

#if 0
//��������ȷ�ⷨ
#include <iostream>
using namespace std;
#include <string>
int Fun(int num)
{
	int res = 0;
	while (num>0)
	{
		res += num % 10;
		num /= 10;
	}
	while (res>9)
		res = Fun(res);

	return res;

}
int main()
{
	string str;
	while (cin >> str)
	{
		//cout<<Fun(num);
		//cout<<(num-1)%9+1;
		int sum = 0;
		for (int i = 0; i<str.size(); i++)
		{
			sum += str[i] - '0';
		}
		cout << Fun(sum) << endl;
	}
	return 0;
}
#endif

#if 0
//��̬��̨��4.14
class Solution {
public:
	int jumpFloorII(int number) {
		if (number<0)
			return 0;
		if (number == 1)
			return 1;
		return 2 << (number - 2);
		// int res=pow(2,(number-1));

	}
};
#endif

#if 0
#include <iostream>
using namespace std;

int main()
{
	double n, r;
	while (cin >> n >> r)
	{
		double sum = 2 * r*3.14;
		if (sum >= n)
		{
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
	return 0;
}
#endif

#if 0
class Solution {
public:
	int Add(int num1, int num2)
	{
		//return num1+num2;
		while(num1!=0)
		{
			int same=(num1&num2)<<1;
			int diff=num1^num2;
			num2=diff;
			num1=same;
		}
		return num2;
	}
};

//�������
//#include <iostream>
//using namespace std;
//int Add(int num1, int num2)
//{
//	//return num1+num2;
//	int same = num1&num2;
//	int diff = num1 ^ num2;
//
//	while (same)
//	{
//		same <<= 1;
//		same = same&diff;
//		diff = same^diff;
//	}
//	return  diff;
//}
//int main()
//{
//	cout<<Add(9,4);
//	return 0;
//}

#endif


#if 0
//ע�������ȡֵ��Χ
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	double a, b, c;
	while (cin >> a >> b >> c)
	{
		if ((a + b)>c && (a + c)>b && (b + c)>a&&abs(a - b)<c&&abs(a - c)<b&&abs(c - b)<a)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
#endif

#if 0
4_16 day 28 1
#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>

/**
*  ����λ�϶�����������ż��λ�϶���ż��
*  ���룺����arr�����ȴ���2
*  len��arr�ĳ���
*  ��arr����������λ�϶�����������ż��λ�϶���ż��
*/
void oddInOddEvenInEven(vector<int>& arr, int len) {
	int start = -1;
	int end = -1;
	for (int i = 0; i<len; i++)
	{
		if (i % 2 == 0 && arr[i] % 2 != 0)//�±���ż������������
		{
			start = i;
		}
		else if (i % 2 != 0 && arr[i] % 2 == 0)//�±�������������ż��
		{
			//�±�������
			end = i;
		}

		if (start >= 0 && end >= 0)
		{
			int tmp = arr[start];
			arr[start] = arr[end];
			arr[end] = tmp;
			
		}
	}

}
int main()
{
	vector<int> v{ 2, 2, 3, 4 };
	oddInOddEvenInEven(v, 4);
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	return 0;
}
#endif

#if 0
//4_16 day 28 2
//���ӷ���
#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>

int main()
{
	int n;
	int total = 0;
	int min = 0, move = 0;
	int flag = 0;//�ж��Ƿ�����Ϊ1��
	int count = 0;
	while (cin >> n)
	{
		if (n>0)
		{
			for (total = 1; total % 5 == 1; total++)
			{
				flag = total;
				count = n;
				while (count&&total % 5 == 1)
				{
					move = total / 5;
					total--;
					total -= move;
					count--;
				}
				if (count == 0)
				{
					min = total + n;
					break;
				}
			}

			cout << flag << " " << min << endl;
		}
	}
	return 0;
}
#endif

#if 0
class Solution {
public:
	/**
	*	���������е���С������ɺ�
	*	���룺��������arr
	*	���أ����������е���С������ɺ�
	*/
	int getFirstUnFormedNum(vector<int> arr, int len) {
		sort(arr.begin(), arr.end());
		int min = arr[0];
		int max = min;
		for (int i = 0; i<len; i++)
			max += len;

		for (int num = min; num<max; num++)
		{
		}
	}
};
#endif

#if 0
//�мٱ�
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	int count = 0;
	while (cin >> n)
	{
		if (n == 0)
			break;
		count = 0;
		while (n >= 2)
		{
			if (n % 3)
				n = n / 3 + 1;
			else
				n /= 3;
			count++;
		}
		cout << count << endl;
	}
	return 0;
}
#endif

#if 0
//4_18  day30 1
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	while (getline(cin, str))
	{
		string res;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] >= 'F'&&str[i] <= 'Z')
			{
				res += (str[i] - 5);
			}
			else if (str[i] == ' ')
			{
				res += ' ';
			}
			else
			{
				int n =str[i]-'A';
				res += ('Z' - 4+ n);
			}
		}
		cout << res << endl;
	}
	return 0;
}
#endif

#if 0
//���Ӹ���
//4_18  day30 2
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int num;
	while (cin >> num)
	{
		int count = 0;
		for (int i = 2; i<sqrt(num); i++)
		{
			if (num%i == 0)
			{
				num /= i;
				count++;
			}
			while (num%i == 0)
			{
				num /= i;
			}
		}

		if (num != 1)//numΪ����
		{
			count++;
		}
		cout << count << endl;
	}
	return 0;
}
#endif


////day31 4.20/1��������
//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int year;
//	vector<int> v{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//	while (cin >> year)
//	{
//		if ((year / 4 == 0 && year / 100 != 0) || year % 400 == 0)
//		{
//			v[2] == 29;
//		}
//		else
//		{
//			v[2] = 28;
//		}
//
//		cout << year << "-" << "01-01" << endl;
//
//	}
//	return 0;
//}

#if 0
//day31 4.20  2.�ֽ�����
#include <iostream>
#include <vector>
using namespace std;

void Print(int NUM, vector<int> v)
{
	cout << NUM << " " << "=";
	for (int i = 0; i < v.size(); i++)
	{
		if (i == v.size() - 1)
		{
			cout << " " << v[i] << endl;
			break;
		}
		cout << " " << v[i] << " " << "*";
	}
}
int main()
{
	int num;
	while (cin >> num)
	{
		int NUM = num;
		vector<int> v;
		int ret = 2;

		while (num > 1)
		{
			if (num%ret == 0)
			{
				num /= ret;
				v.push_back(ret);
				continue;
			}
			ret++;
		}

		Print(NUM, v);
	}
	return 0;
}
#endif

#if 0
//day32 4.21  1.�Ա�����
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool IsPrime(int num)
{
	if (num == 1)
		return false;
	if (num == 2)
		return true;
	for(int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}

bool IsLeap(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return true;
	}
	return false;
}

int main()
{
	int year1, month1, day1, year2, month2, day2;
	vector<int> v{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	vector<int> a{ 0, 62, 28, 31, 60, 31, 60, 31, 62, 60, 62, 30, 62};

	while (cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2)
	{
		int res = 0;
		if (year1 == year2)//���һ��
		{
			if (IsLeap(year1))//������
			{
				v[2] = 29;
			}

			if (month1 == month2)//�·�һ��
			{
				if (IsPrime(month1))
				{
					res = day2 - day1 + 1;
				}
				else
				{
					res = (day2 - day1 + 1) * 2;
				}
			}
			else//�·ݲ�һ��
			{
				if (IsPrime(month1))
				{
					res += v[month1] - day1 + 1;
				}
				else
				{
					res += (v[month1] - day1 + 1) * 2;
				}
				//�м��·�
				for (int i = month1+1; i < month2; i++)
				{
					if (IsPrime(i))
					{
						res += v[i] ;
					}
					else
					{
						res += v[i] * 2;
					}
				}

				if (IsPrime(month2))
				{
					res += day2;
				}
				else
				{
					res += day2 * 2;
				}

			}
		}
		else//��ݲ�һ��
		{
			if (IsLeap(year1))
			{
				v[2] = 29;
			}

			if (IsPrime(month1))
			{
				res += v[month1] - day1+1;
			}
			else
			{
				res += (v[month1] - day1+1) * 2;
			}
			for (int i = month1+1; i <= 12; i++)
			{
				if (IsPrime(i))
				{
					res += v[i];
				}
				else
				{
					res += v[i] * 2;
				}
			}


			for (int i = year1+1; i < year2; i++)
			{
				if (IsLeap(i))
				{
					a[2] = 29;
				}
				else
				{
					a[2] = 28;
				}

				for (int j = 1; j < a.size(); j++)
				{
					res += a[j];
				}
			}

			if (IsLeap(year2))
			{
				v[2] = 29;
			}
			else
			{
				v[2] = 28;
			}

			for (int i = 1; i < month2; i++)
			{
				if (IsPrime(i))
				{
					res += v[i];
				}
				else
				{
					res += v[i] * 2;
				}
			}

			if (IsPrime(month2))
			{
				res += day2;
			}
			else
			{
				res += day2 * 2;
			}
		}

		cout << res<<endl;
	}
	return 0;
}
#endif

//day32 4.21  2.쳲�������β
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//int main()
//{
//	long n;
//	while (cin >> n)
//	{
//		if (n == 1)
//		{
//			cout << "1"<<endl;
//			continue;
//		}
//		if (n == 2)
//		{
//			cout << "2"<<endl;
//			continue;
//		}
//
//		long a = 1;
//		long b = 2;
//		long c;
//		for (int i = 3; i <= n;i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			//cout << c << " ";
//
//		}
//	 cout << c % 1000000<<endl;
//	}
//	return 0;
//}

#if 0
#include <iostream>
using namespace std;
int main()
{
	int fib[100001];
	fib[0] = 1;
	fib[1] = 1;

	for (int i = 2; i <= 100000; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		fib[i] = fib[i] % 1000000;
	}

	int n;
	while (cin >> n)
	{
		if (n <= 25)
		{
			cout << fib[n] << endl;
		}
		else
		{
			printf("%06d\n", fib[n]);
		}
	}
	return 0;
}
#endif

#if 0
//day33 4.22  1.��������
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		int count = 0;
		size_t found = 0;
		
		while (1)
		{
			size_t found = s1.find(s2);
			if (found != string::npos)
			{
				count++;
			}
			else
			{
				break;
			}
			s1.erase(found, s2.size());
		}
		
		cout << count << endl;
	}
	return 0;
}
#endif

#if 0
//day33 4.22  2.��������
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int a, b;
	vector<long long> v;
	v.resize(81);
	v[0] = 0;
	v[1] = 1;
	v[2] = 1;
	for (int i = 3; i < v.size(); i++)
	{
		v[i] = v[i - 1] + v[i - 2];
	}

	while (cin >> a >> b)
	{
		long long res = 0;
		for (int i = a; i <= b; i++)
		{
			res += v[i];
		}
		cout << res << endl;
	}
	return 0;
}
#endif

#if 0
//day34 4.23  1.�ռ����б�
#include <iostream>
using namespace std;
#include <string>
#include <vector>

bool Fun(string str)
{
	size_t found = str.find(',');
	size_t tmp = str.find(' ');
	if (found != string::npos || tmp != string::npos)
		return true;

	return false;
}
int main()
{
	int n;
	while (cin >> n)
	{
		getchar();
		vector<string> v;
		v.resize(n);
		for (int i = 0; i<n; i++)
		{
			string str;
			//v[i] = getline(cin, str);//�������
			getline(cin, str);
			v[i] = str;
		}
		for (int i = 0; i<n; i++)
		{
			string str = v[i];
			if (Fun(str))//�пո�򶺺�
			{
				cout << "\"" << str << "\"";
			}
			else
			{
				cout << str;
			}
			if (i != n - 1)
			{
				cout << "," << " ";
			}
			else{
				cout << endl;
			}

		}
	}
	return 0;
}
#endif

#if 0
//day34 4.23  2.������
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main()
{
	long long num[91] = { 1, 2 };
	for (int i = 2; i<91; i++)
		{
			num[i] = num[i - 1] + num[i - 2];
		}

	int d;
		while (cin >> d)
		{
			cout << num[d - 1] << endl:
		}
	return 0;
}

#endif

#if 0
//day35 4.24  1.���齱
#include <iostream>
using namespace std;

int main()
{
	int n;
	long long a[21] = { 0, 0, 1 }, b[21] = { 1, 1, 2 };

	while (cin >> n)
	{
		for (int i = 3; i<=n; i++)
		{
			b[i] = i*b[i - 1];
			a[i] = (i - 1)*(a[i - 1] + a[i - 2]);
		}
		printf("%.2f%c\n", 1.0*a[n]/b[n]*100,'%');
	
	}

	return 0;
}
#endif

#if 0
//day35 4.24  1.���齱
#include <iostream>
using namespace std;
#include <string>
#include <vector>

int main()
{
	string str1, str2;
	while (getline(cin, str1))
	{
		getline(cin, str2);
		size_t found=str1.find(str2);
		if (found != string::npos)
		{
			if (found == 0 )
			{
				if (str1[str2.size()] == ',')
				{
					cout << "Ignore" << endl;
				}
			}
			else//���ǵ�һ��
			{
				if ((str1[found-1]==','&&str1[found+str2.size()]==',')||
					(str1[found - 1] == '"'&&str1[found + str2.size()] == '"'))
					cout << "Ignore" << endl;
				else 
					cout << "Important!" << endl;
			}
			
		}
		else
		{
			cout << "Important!" << endl;
		}
	}
	return 0;
}
#endif

#if 0
#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

bool IsZi(string s1, string s2)
{
	if (s1[1] == s2[1])
	{
		s2 = s2.substr(0, s1.size());
		if (s1 == s2)
			return true;
	}
	return false;
}
void Mkdir(vector<string> v)
{
	string mk = "mkdir -p ";
	int i = 0;
	while (i < v.size() - 1)
	{
		//ǰһ���ַ����Ǻ�һ�����ִ����Һ�һ���ִ�����һ��λ����/
		if (IsZi(v[i], v[i + 1]) && v[i + 1][v[i].size()] == '/')
		{
			v.erase(v.begin() + i);
		}
		else
			i++;
	}

	for (auto &e : v)
		cout << mk << e << endl;
}
int main()
{
	int n;
	while (cin >> n)
	{
		vector<string> v;
		for (int i = 0; i < n; i++)
		{
			string s1;
			cin >> s1;
			v.push_back(s1);
		}

		sort(v.begin(), v.end());
		Mkdir(v);
		cout << endl;
	}
	return 0;
}
#endif

#if 0
#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int con = 0;
		queue<char> q;
		for (int i = 0; i<n; i++)
		{
			char ID;
			cin >> ID;
			string OP;
			cin >> OP;
			if (OP == "connect")
				q.push(ID);
			else
			{
				con = q.size()>con ? q.size() : con;
				q.pop();
			}
		}
		cout << con << endl;
	}
	return 0;
}
#endif

#if 0
//day38 4.28  1.�����
#include<iostream>
#include<vector>
#include<queue>
#include<string>
using namespace std;
int dest[4][2] = { 1, 0, 0, 1, 0, -1, -1, 0 };
struct node{
	int x;
	int y;
};
int main()
{
	int m, n;
	while (cin >> m >> n)
	{
		vector<vector<char>> room(m, vector<char>(n));
		int a, b;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> room[i][j];
				if (room[i][j] == '@')
				{
					a = i;
					b = j;
				}

			}
		}
		queue<node> p;
		int result = 1;
		node cur;
		cur.x = a;
		cur.y = b;
		p.push(cur);
		while (!p.empty())
		{
			node tmp = p.front();
			p.pop();
			for (int i = 0; i < 4; i++)
			{
				node next;
				next.x = tmp.x + dest[i][0];
				next.y = tmp.y + dest[i][1];
				if (next.x < m && next.x >= 0 && next.y < n && next.y >= 0 && room[next.x][next.y] == '.')
				{
					result++;
					p.push(next);
					room[next.x][next.y] = '@';
				}
			}

		}
		cout << result << endl;
	}
	return 0;
}
#endif

#if 0
//day38 4.29  1.�ַ�������
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string s1, s2;
	int len1, len2;
	while (cin >> s1 >> s2 >> len1 >> len2) {
		// ֻ����Сд��ĸ���ַ������Կ���26���Ƶ�����
		// ��s1��s2������len2����
		s1.append(len2 - s1.size(), 'a');
		s2.append(len2 - s2.size(), (char)('z' + 1));

		// ȷ��s1��s2�������ַ���ÿ��λ���ϵĲ�ֵ
		vector<int> arr;
		for (int i = 0; i < len2; ++i)
			arr.push_back(s2[i] - s1[i]);
		// ȷ��len1��len2֮�����ɵĲ�ͬ�ַ����ĸ���
		int result = 0;
		for (int i = len1; i <= len2; ++i)
			for (int k = 0; k < i; ++k)
				result += arr[k] * pow(26, i - 1 - k);
		// �����ַ�����󶼲�������s2�������������Ҫ��1
		cout << result - 1 << endl;
	}
	return 0;
}
#endif

#if 0
//day38 4.29  2.�ַ�������������ִ�
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string s1, s2;
	while (cin >> s1 >> s2) {
		int s1Length = s1.length();
		int s2Length = s2.length();
		// ��������״̬ת�Ʒ����м����ľ���
		vector<vector<int>> dp(s1Length, vector<int>(s2Length, 0));
		// ��ʼ��dp����߽磺�߽�Ҫô�ڣ�Ҫô����
		dp[0][0] = (s1[0] == s2[0]) ? 1 : 0;
		for (int i = 1; i < s1Length; ++i) {
			dp[i][0] = (s1[i] == s2[0]) ? 1 : 0;
			dp[i][0] = max(dp[i - 1][0], dp[i][0]);
		}
		for (int j = 1; j < s2Length; ++j) {
			dp[0][j] = (s1[0] == s2[j]) ? 1 : 0;
			dp[0][j] = max(dp[0][j - 1], dp[0][j]);
		}

		// ����״̬ת�Ʒ��̽��м���
		for (int i = 1; i < s1Length; ++i) {
			for (int j = 1; j < s2Length; ++j) {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
				if (s1[i] == s2[j])
					dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
			}
		}
		cout << dp[s1Length - 1][s2Length - 1] << endl;
	}
	return 0;
}
#endif

#if 0
//day40 4.30  1.���ʼ�
#include <iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		long long arr[21] = { 0, 0, 1 };
		for (int i = 3; i <= n; i++)
			arr[i] = (i - 1)*(arr[i - 1] + arr[i - 2]);
		cout << arr[n] << endl;
	}
	return 0;
}
#endif

////�����������
//#include <iostream>
//using namespace std;
//
//void solve()
//{
//	int i, j, n, top, temp;
//	int arr[1010];//���������ջ
//	cin >> n;
//	top = 0;
//	arr[0] = -1;
//	for (i = 0; i < n; i++)
//	{
//		cin >> temp;
//		if (temp > arr[top])
//		{
//			arr[++top] = temp;
//		}
//		else//���ֲ���
//		{
//			int low = 1, high = top;
//			int mid;
//			while (low <= high)
//			{
//				mid = (low + high) / 2;
//				if (temp > arr[mid])
//				{
//					low = mid + 1;
//				}
//				else
//				{
//					high = mid - 1;
//				}
//			}
//			arr[low] = temp;
//		}
//	}
//	cout << top << endl;
//}

#if 0
//day41 _5.8 1.������
#include <iostream>
using namespace std;
#include <vector>

bool Fun(vector<vector<char>> v,int i, int j)
{
	//��
	if (j+4<20 && v[i][j + 1] == v[i][j] && v[i][j + 2] == v[i][j]
		&& v[i][j + 3] == v[i][j]&& v[i][j + 4] == v[i][j] )
	{
		return true;
	}
	//��
	if (i + 4 < 20 && v[i + 1][j] == v[i][j] && v[i + 2][j] == v[i][j]
		&& v[i + 3][j] == v[i][j] && v[i + 4][j] == v[i][j])
	{
		return true;
	}
	//��б
	if (i+4<20&&j-4>=0&&v[i + 1][j - 1] == v[i][j] && v[i + 2][j - 2] == v[i][j]
		&& v[i + 3][j - 3] == v[i][j] && v[i + 4][j - 4] == v[i][j])
	{
		return true;
	}
	//��б
	if (i+4<20&&j+4<20&&v[i + 1][j + 1] == v[i][j] && v[i + 2][j + 2] == v[i][j]
		&& v[i + 3][j + 3] == v[i][j] && v[i + 4][j + 4] == v[i][j])
	{
		return true;
	}
	return false;
}
int main()
{

	vector<vector<char>> v;
	v. resize(20);
	for (int i = 0; i < 20; ++i)
	{
		v[i].resize(20);
		for (int j = 0; j < 20; ++j)
		{
			char a;
			cin >> a;
			v[i][j] = a;
		}
	}

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (v[i][j] == '*' || v[i][j] == '+')
			{
				if (Fun(v, i, j))
				{
					cout << "Yes" << endl;
					return 0;
				}
			}
		}
	}

	cout << "No" << endl;
	return 0;
}
#endif

#if 0
//day41 _5.8 2.������
#include <iostream>
using namespace std;
#include <stack>
#include <string>
#include <sstream>
int f(string x)
{
	stringstream ss;
	ss << x;
	int num;
	ss >> num;
	return num;
}
int main()
{
	int n;
	while (cin >> n)
	{
		stack<int> s;
		for (int i = 0; i < n; i++)
		{
			string x;
			cin >> x;
			if (x == "+")
			{
				int a, b;
				a = s.top();
				s.pop();
				b = s.top();
				s.pop();
				a += b;
				s.push(a);
			}
			else if (x == "-")
			{
				int a, b;
				a = s.top();
				s.pop();
				b = s.top();
				s.pop();
				a = b-a;
				s.push(a);
			}
			else if (x == "*")
			{
				int a, b;
				a = s.top();
				s.pop();
				b = s.top();
				s.pop();
				a *= b;
				s.push(a);
			}
			else if (x == "/")
			{
				int a, b;
				a = s.top();
				s.pop();
				b = s.top();
				s.pop();
				a = b / a;
				s.push(a);
			}
			else
			{
				int a = f(x);
				s.push(a);
			}
		}
		cout << s.top()<<endl;
	}
	return 0;
}
#endif

#if 0
//day42 5.9 �������
#include <iostream>
using namespace std;
#include <string>

int main()
{
	string s;
	while (getline(cin, s))
	{
		string res;
		for (size_t i = 0; i<s.size(); i++)
		{
			if (s[i] >= '0'&&s[i] <= '9')
				res += s[i];
		}
		cout << res << endl;
	}
	return 0;
}
#endif
