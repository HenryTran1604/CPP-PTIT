#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;
class bigInt
{ // khai báo lớp chứa số nguyên lớn
private:
	char sign;
	string num;

public:
	string getNum()
	{ // lấy giá trị private num
		return num;
	}
	char getSign()
	{ // lấy giá trị private sign
		return sign;
	}
	void setSign(char x)
	{ //đặt giá trị cho biến private sign
		sign = x;
	}
	void setNum(string s){
		num = s;
	}
	void trim();					   // xóa các chữ số không có nghĩa
	static string add(string, string); // phương thức cộng
	static string sub(string, string); // phương thức trừ
	void convertToStandardZero();	   // chuyển về số 0 chuẩn
	bigInt()
	{
	}
	bigInt(string s){
		if (s[0] == '-')
		{
			this->sign = '-';
			this->num = s.substr(1);
		}
		else
		{
			this->sign = '+';
			this->num = s;
		}
	}
	bigInt(char x, string s)
	{
		this->sign = x;
		this->num = s;
	}
	friend istream &operator>>(istream &, bigInt &); // nạp chồng toán tử
	friend ostream &operator<<(ostream &, bigInt &);
	friend bigInt operator+(bigInt, bigInt);
	bigInt operator+=(bigInt);
	friend bigInt operator-(bigInt, bigInt);
	bigInt operator-=(bigInt);
	friend bigInt operator*(bigInt, bigInt);
	bigInt operator*=(bigInt);
	friend bigInt operator/(bigInt, bigInt);
	bigInt operator/=(bigInt);
	friend bigInt operator%(bigInt, bigInt);
	bigInt operator%=(bigInt);
};
string bigInt::add(string a, string b)
{ // khai báo phương thức cộng
	int len = a.length();
	string res = "";
	int carry = 0;
	for (int i = len - 1; i >= 0; i--)
	{
		int n1 = a[i] - '0', n2 = b[i] - '0';
		int sum = n1 + n2 + carry;
		res.push_back('0' + sum % 10);
		carry = sum / 10;
	}
	if (carry)
		res.push_back('1');
	reverse(res.begin(), res.end());
	return res;
}
string bigInt::sub(string a, string b)
{ // khai báo phương thức trừ
	if (a < b)
	{
		swap(a, b);
	}
	int len = a.length();
	string res = "";
	int carry = 0;
	for (int i = len - 1; i >= 0; i--)
	{
		int n1 = a[i] - '0', n2 = b[i] - '0';
		int sub = n1 - n2 - carry;
		if (sub < 0)
		{
			sub += 10;
			carry = 1;
		}
		else
			carry = 0;
		res.push_back('0' + sub);
	}
	reverse(res.begin(), res.end());
	return res;
}
void bigInt::trim()
{ // xóa các chữ số không có nghĩa
	string s = this->num;
	int i = 0;
	while (s[i] == '0')
	{
		i++;
	}
	if (i >= this->num.length())
		this->num = "0";
	else
		this->num = s.substr(i);
}
void bigInt::convertToStandardZero()
{ // chuyển về số 0 chuẩn
	if (this->num == "0")
	{
		this->sign = '+';
	}
}
istream &operator>>(istream &is, bigInt &a)
{ // nạp chồng toán tử nhập
	string tmp;
	is >> tmp;
	if (tmp[0] == '-')
	{
		a.sign = '-';
		a.num = tmp.substr(1);
	}
	else
	{
		a.sign = '+';
		a.num = tmp;
	}
	return is;
}
ostream &operator<<(ostream &out, bigInt &a)
{ // nạp chồng toán tử xuất
	if (a.sign == '-')
	{
		out << "(-" << a.num << ")";
	}
	else
	{
		out << a.num;
	}
	return out;
}
bigInt operator+(bigInt s1, bigInt s2)
{ // nạp chồng toán tử cộng
	string a = s1.num, b = s2.num;
	while (a.length() < b.length())
		a = "0" + a;
	while (a.length() > b.length())
		b = "0" + b;
	string res;
	char sign = '+';
	if (s1.sign == '-' && s2.sign == '-')
	{
		res = bigInt::add(a, b);
		sign = '-';
	}
	else if (s1.sign == '-' && s2.sign == '+')
	{
		res = bigInt::sub(b, a);
		if (b < a)
			sign = '-';
	}
	else if (s1.sign == '+' && s2.sign == '-')
	{
		res = bigInt::sub(a, b);
		if (a < b)
			sign = '-';
	}
	else
		res = bigInt::add(a, b);
	bigInt ans(sign, res);
	ans.convertToStandardZero();
	return ans;
}
// bigInt bigInt::operator+=(bigInt other)
// { // nạp chồng toán tử +=
// 	*this = *this + other;
// 	return *this;
// }
bigInt operator-(bigInt s1, bigInt s2)
{ // nạp chồng toán tử -
	string a = s1.num, b = s2.num;
	while (a.length() < b.length())
		a = "0" + a;
	while (a.length() > b.length())
		b = "0" + b;
	string res;
	char sign = '+';
	if (s1.sign == '-' && s2.sign == '-')
	{ // -a - -b = b - a
		res = bigInt::sub(b, a);
		if (a > b)
			sign = '-';
	}
	else if (s1.sign == '-' && s2.sign == '+')
	{
		res = bigInt::add(a, b);
		sign = '-';
	}
	else if (s1.sign == '+' && s2.sign == '-')
	{
		res = bigInt::add(a, b);
	}
	else
	{
		res = bigInt::sub(a, b);
		if (a < b)
			sign = '-';
	}
	bigInt ans(sign, res);
	ans.trim();
	ans.convertToStandardZero();
	return ans;
}
// bigInt bigInt::operator-=(bigInt other)
// { // nạp chồng toán tử -=
// 	*this = *this - other;
// 	return *this;
// }
bigInt operator*(bigInt s1, bigInt s2)
{ // nạp chồng toán tử *
	string a = s1.num, b = s2.num;
	int len1 = a.length(), len2 = b.length();
	vector<int> v(len1 + len2, 0);
	int i_n1 = 0, i_n2;
	for (int i = len1 - 1; i >= 0; i--)
	{
		int carry = 0, n1 = a[i] - '0';
		i_n2 = 0;
		for (int j = len2 - 1; j >= 0; j--)
		{
			int n2 = b[j] - '0';
			int mult = n1 * n2 + v[i_n1 + i_n2] + carry;
			v[i_n1 + i_n2] = mult % 10;
			carry = mult / 10;
			i_n2++;
		}
		v[i_n1 + i_n2] += carry;
		i_n1++;
	}
	int i = len1 + len2 - 1;
	while (i > 0 && v[i] == 0)
	{
		i--;
	}
	if (i == -1)
		return bigInt('+', "0");
	string res = "";
	for (int j = i; j >= 0; j--)
	{
		res.push_back('0' + v[j]);
	}
	char si = (s1.sign == '+' && s2.sign == '+' || s1.sign == '-' && s2.sign == '-') ? '+' : '-';
	bigInt ans(si, res);
	ans.convertToStandardZero();
	return ans;
}
// bigInt bigInt::operator*=(bigInt other)
// { // nạp chồng toán tử *=
// 	*this = *this * other;
// 	return *this;
// }
bigInt operator/(bigInt s1, bigInt s2)
{ // nạp chồng toán tử /
	if (s2.num == "0")
	{
		return bigInt(' ', "[ERROR]: Cannot divide by 0");
	}
	string a = s1.num, b = s2.num;
	char signS2 = s2.sign;
	if (s2.sign == '-')
		s2.sign = '+';
	int i = 0;
	string tmp;
	tmp += a[0];
	while (tmp.length() < b.length() || tmp.length() == b.length() && tmp < b)
	{
		tmp.push_back(a[++i]);
	}
	string res = "";
	while (i < a.length())
	{
		int div = 0;
		bigInt N('+', tmp);
		while (tmp.length() > b.length() || tmp.length() == b.length() && tmp >= b)
		{
			div++;
			N = N - s2;
			tmp = N.getNum();
		}
		if (tmp == "0")
			tmp = "";
		tmp.push_back(a[++i]);
		res.push_back('0' + div);
	}
	if (res.length() == 0)
		res = "0";
	char si = (s1.sign == '+' && signS2 == '+' || s1.sign == '-' && signS2 == '-') ? '+' : '-';
	if (s1.sign == '-' && s2.sign == '+')
		res = to_string(stoi(res) + 1);
	bigInt ans(si, res);
	ans.convertToStandardZero();
	return ans;
}
// bigInt bigInt::operator/=(bigInt other)
// { // nạp chồng toán tử /=
// 	*this = *this / other;
// 	return *this;
// }
bigInt operator%(bigInt s1, bigInt s2)
{ // nạp chồng toán tử %
	if (s2.num == "0")
		return bigInt(' ', "[ERROR]: Cannot divide by 0");
	bigInt div = s1 / s2;
	bigInt res = s1 - (s2 * div);
	res.sign = '+';
	res.convertToStandardZero();
	return res;
}
// bigInt bigInt::operator%=(bigInt other)
// {
// 	*this = *this % other;
// 	return *this;
// }

string noSpace(string s)
{ // xóa dấu cách
	string res;
	for (char x : s)
	{
		if (x != ' ')
			res.push_back(x);
	}
	return res;
}
int pri(char x)
{ // mức độ ưu tiên của toán tử
	if (x == '*' || x == '/' || x == '%')
		return 2;
	if (x == '+' || x == '-')
		return 1;
	return 0;
}
bigInt calc(bigInt a, bigInt b, char x)
{ // tính toán
	if (x == '*')
		return a * b;
	if (x == '/')
		return a / b;
	if (x == '+')
		return a + b;
	if (x == '%')
		return a % b;
	return a - b;
}
string infixToPostfix(string s)
{ // chuyển biểu thức trung tố thành hậu tố
	s = "(" + s + ")";
	stack<char> st;
	int n = s.length();
	string ans = "", tmp;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '(')
			st.push(s[i]);
		else if (isdigit(s[i]))
		{
			ans.push_back(s[i]);
		}
		else
		{
			if (isdigit(ans.back()))
				ans.push_back('@'); // danh dau sau moi so deu co ki tu @
			if (s[i] == ')')
			{
				while (!st.empty() && st.top() != '(')
				{
					ans.push_back(st.top());
					st.pop();
				}
				st.pop();
			}
			else
			{
				while (!st.empty() && pri(st.top()) >= pri(s[i]))
				{
					ans.push_back(st.top());
					st.pop();
				}
				st.push(s[i]);
			}
		}
	}
	if (!st.empty())
		return "syntax";
	return ans;
}
bigInt calcPostfix(string a)
{ // tính toán biểu thức hậu tố
	stack<bigInt> st;
	bigInt tmp('+', "0");
	bigInt zero('+', "0");
	bigInt ten('+', "10");
	for (int i = 0; i < a.length(); i++)
	{
		if (isdigit(a[i]))
		{
			tmp = tmp * ten + bigInt('+', string(1, a[i]));
		}
		else
		{
			if (a[i] == '@')
			{
				st.push(tmp);
				tmp = zero;
			}
			else
			{
				bigInt top1 = st.top();
				st.pop();
				bigInt top2 = st.top();
				st.pop();
				bigInt res = calc(top2, top1, a[i]);
				if (res.getSign() == ' ')
					return res;
				st.push(res);
			}
		}
	}
	return st.top();
}
bool lowSign(char c)
{ // kiểm tra dấu c là cộng hoặc trừ hay không
	if (c == '+' || c == '-')
		return true;
	return false;
}

bool highSign(char c)
{ // kiểm tra dấu c là chia hoặc nhân hoặc chia dư hay không
	if (c == '*' || c == '/' || c == '%')
		return true;
	return false;
};

string toInfix(string s)
{
	int len = s.length();
	int i;
	int count;
	for (i = 0; i < len; i++)
	{
		if (lowSign(s[i]))
		{
			if (i == 0)
			{
				s = '0' + s;
				len++;
				i++;
			}
			int j = i;
			count = 0;
			while (lowSign(s[i]))
			{
				if (highSign(s[i + 1]))
				{
					return "syntax";
				}
				if (s[i] == '-')
					count++;
				i++;
			}
			if ((count % 2) == 0)
			{
				s = s.substr(0, j) + '+' + s.substr(i, len - i);
			}
			else
			{
				s = s.substr(0, j) + '-' + s.substr(i, len - i);
			}
			len -= (i - j - 1);
			i = j + 1;
		}
		if (highSign(s[i]))
		{
			if (i == 0)
			{
				return "syntax";
			}
			if (lowSign(s[i + 1]))
			{
				int j = i + 1, k = i;
				int count = 0;
				k++;
				while (lowSign(s[k]))
				{
					k++;
					count++;
				}
				if (s[k] == '(')
				{
					int openParen = 1;

					while (1)
					{
						k++;
						if (s[k] == '(')
							openParen++;
						else if (s[k] == ')')
							openParen--;
						if (openParen == 0)
						{
							s = s.substr(0, j) + "(0" + s.substr(j, k - i) + ")" + s.substr(k + 1, len - k - 1);
							len = len + 3;
							k = k + 3;
							break;
						}
					}
				}
				if (!isdigit(s[k]) && s[k] != ')')
				{
					return "syntax";
				}
				while (isdigit(s[k]))
				{
					k++;
					count++;
				}
				if (s[k] != ')')
				{
					s = s.substr(0, j) + "(0" + s.substr(j, count) + ")" + s.substr(k, len - k);
					len += 3;
				}
			}
			if (highSign(s[i + 1]))
				return "syntax";
		}
		else if (isdigit(s[i]))
			continue;
		else if (s[i] == '(')
		{
			if (highSign(s[i + 1]))
				return "syntax";
			else if (lowSign(s[i + 1]))
			{
				s = s.substr(0, i + 1) + "0" + s.substr(i + 1, len - i + 1);
				len++;
			}
		}
		else if (s[i] == ')')
			continue;
		else
			return "syntax";
	}
	return s;
}
