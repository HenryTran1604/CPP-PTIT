#include "bigNum.h"

bool test(bigInt a, bigInt b) // kiem tra dau vao 2 so a, b c
{ 
	bool flag = 1;
	for (char x : a.getNum())
		if (!isdigit(x))
			flag = 0;
	for (char x : b.getNum())
		if (!isdigit(x))
			flag = 0;
	if (a.getSign() != '+' && a.getSign() != '-')
		flag = 0;
	if (b.getSign() != '+' && b.getSign() != '-')
		flag = 0;
	return flag;
}
int calcInfixFromKeyBoard()
{
	cout << "Nhap bieu thuc: ";
	string e;
	fflush(stdin);
	getline(cin, e);
	if (e == "")
		return 0;
	e = noSpace(e);
	string e1 = toInfix(e);
	if (e1 == "syntax")
	{
		cout << "[ERROR]: Syntax Error!!\n";
		return 1;
	};
	if (lowSign(e1[0]))
		e1 = "0" + e1;
	if (highSign(e1[0]))
	{
		cout << "[ERROR]: Syntax Error!!\n";
		return 1;
	}
	string convert = infixToPostfix(e1);
	if (convert == "syntax")
	{
		cout << "[ERROR]: Syntax Error!!\n";
		return 1;
	}
	bigInt ans = calcPostfix(convert);
	if (ans.getSign() == ' ')
	{
		cout << "[ERROR]: Cannot divide by 0\n";
		return 1;
	}
	ans.trim();
	string res;
	for (int i = 0; i < e.length(); i++)
	{
		res.push_back(e[i]);
	}
	res.push_back(' ');
	ofstream fo;
	fo.open("output.txt", std::ofstream::app);
	fo << res << "= " << ans << endl;
	cout << res << "= " << ans << endl;
	fo.close();
	return 1;
}
int fiboFromKeyBoard(){
	string s; cout << "Nhap n = ";
	getline(cin, s);
	if(s == "") return 0;
	int n = stoi(s);
	ofstream fo;
	fo.open("output.txt", std::ofstream::app);
	if(n <= 0){
		cout << "Khong ton tai so fibonacci thu " << n << endl;
		fo << "Khong ton tai so fibonacci thu " << n << endl;
		return 1;
	}
	cout << "So Fibonacci thu " << n << " la : " ;
	fo << "So Fibonacci thu " << n << " la : ";
	if(n == 1){
		cout << 0 << endl;
		fo << 0 << endl;
	}
	else if(n == 2){
		cout << 1 << endl;
		fo << 1 << endl;
	}
	else{
		bigInt f1('+', "0"), f2('+', "1"), f;
		int i = 2;
		while(i < n) {
			f = f1 + f2;
			f1 = f2;
			f2 = f;
			i++;
		}
		cout << f << endl;
		fo << f << endl;
	}
	return 1;
}
string extraInfo(int x){
	if(x == 1) return "(Phep cong) : ";
	if(x == 2) return "(Phep tru) : ";
	if(x == 3) return "(Phep nhan) : ";
	if(x == 4) return "(Phep chia) : ";
	return "(Phep chia du): ";
}
int solveCaculation(int x){
	cout << "Nhap so thu nhat a, b " << extraInfo(x);

	string s, tmp;
	getline(cin, s);
	if(s == "") return 0;
	stringstream ss(s);
	ss >> tmp;
	bigInt a(tmp);
	ss >> tmp;
	bigInt b(tmp);
	
	if(test(a, b) == 0){
		cout << "Du lieu ban nhap bi sai!\n";
	}
	else{
		ofstream fo;
		fo.open("output.txt", std::ofstream::app);
		bigInt res;
		if(x == 1){
			res = a + b;
			cout << a << " + " << b << " = " << res << endl;
			fo << a << " + " << b << " = " << res << endl;
		}
		else if(x == 2){
			res = a - b;
			cout << a << " - " << b << " = " << res << endl;
			fo << a << " - " << b << " = " << res << endl;
		}
		else if(x == 3){
			res = a * b;
			cout << a << " * " << b << " = " << res << endl;
			fo << a << " * " << b << " = " << res << endl;
		}
		else if(x == 4){
			res = a / b;
			cout << a << " / " << b << " = " << res << endl;
			fo << a << " / " << b << " = " << res << endl;
		}
		else if(x == 5){
			res = a % b;
			cout << a << " % " << b << " = " << res << endl;
			fo << a << " % " << b << " = " << res << endl;
		}
	}
	return 1;
}
void printMenu(){
	cout << "---------------------------------CHUONG TRINH TINH SO NGUYEN LON---------------------------------\n";
	cout << "|\t                                          MENU:                                         |\n";
	cout << "|\tTinh toan:                                                                              |\n";
	cout << "|\t\t1: a + b                                                                        |\n";
	cout << "|\t\t2: a - b                                                                        |\n";
	cout << "|\t\t3: a * b                                                                        |\n";
	cout << "|\t\t4: a / b                                                                        |\n";
	cout << "|\t\t5: a % b                                                                        |\n";
	cout << "|\t\t   (Nhap a, b cach nhau boi dau cach)                                           |\n";
	cout << "|\t\t6: Tinh so Fibonacci thu n                                                      |\n";
	cout << "|\t\t7: Tinh toan theo bieu thuc: vi du: 100 + 2 * 3                                 |\n";
	cout << "|\t8: Ket thuc chuong trinh                                                                |\n";
	cout << "|\t(Sau moi lua chon, an enter de quay ve menu)                                            |\n";
	cout << "-------------------------------------------------------------------------------------------------\n";

}
void printChoices(){
	cout << "--------------------------------------CHON PHUONG THUC NHAP--------------------------------------\n";
	cout << "|                     Moi chon cach nhap INPUT                                                  |\n";
	cout << "|                  1. Tu ban phim                                                               |\n";
	cout << "|                  2. Tu file (dong dau la chon menu, dong 2 la du lieu can tinh toan)          |\n";
	cout << "-------------------------------------------------------------------------------------------------\n";
}
int main()
{
	printChoices();
	
	int choice;
	do{
		cout << "Lua chon: ";
		cin >> choice;
		if(choice == 1){
			ofstream fo("output.txt", ofstream::app);
			while(1){
				printMenu();
				int x; cout << "Chon menu: "; cin >> x;
				cin.ignore();
				if(x == 8) break;
				else if(x == 7){
					while(calcInfixFromKeyBoard());
				}
				else if(x == 6){
					while(fiboFromKeyBoard());
				}
				else if(x >= 1 && x <= 5){
					while(solveCaculation(x));
				}
				else{
					cout << "Ban da nhap sai!\n";
				}
			}
			fo.close();
		}
		else if(choice == 2){
			printMenu();
			ifstream fi("input.txt");
			if(fi.is_open()){
				cout << "Mo file thanh cong\n";
				ofstream fo("output.txt", ofstream::app);
				int x;
				while(fi >> x){
					if(x == 7){
						fi.ignore();
						string e;
						while (getline(fi, e))
						{
							if (e == "")
								return 0;
							e = noSpace(e);
							string e1 = toInfix(e);
							if (e1 == "syntax")
							{
								cout << "[ERROR]: Syntax Error!!\n";
								continue;
							};
							if (lowSign(e1[0]))
								e1 = "0" + e1;
							if (highSign(e1[0]))
							{
								cout << "[ERROR]: Syntax Error!!\n";
								continue;
							}
							string convert = infixToPostfix(e1);
							if (convert == "syntax")
							{
								cout << "[ERROR]: Syntax Error!!\n";
								continue;
							}
							bigInt ans = calcPostfix(convert);
							ans.trim();
							if (ans.getSign() == ' ')
							{
								cout << "[ERROR]: Cannot divide by 0\n";
								continue;
							}
							string res;
							for (int i = 0; i < e.length(); i++)
							{
								res.push_back(e[i]);
							}
							res.push_back(' ');
							fo << res << "= " << ans << endl;
							cout << res << "= " << ans << endl;
							fo.close();
						}
					}
					else if(x == 6){
						int n; fi >> n; // nhap n
						fo << "So Fibonacci thu " << n << " la : ";
						if(n == 1) fo << 0 << endl;
						else if(n == 2) fo << 1 << endl;
						else{
							bigInt f1('+', "0"), f2('+', "1"), f;
							int i = 2;
							while(i < n) {
								f = f1 + f2;
								f1 = f2;
								f2 = f;
								i++;
							}
							fo << f << endl;
						}
					}
					else if(x >= 1 && x <= 5){
						bigInt a, b;
						fi >> a; // nhap so thu nhat a = 
						fi >> b; // nhap so thu hai b = 
						if(test(a, b) == 0){
							fo << "Du lieu ban nhap bi sai!\n";
						}
						else{
							bigInt res;
							if(x == 1){
								res = a + b;
								fo << a << " + " << b << " = " << res << endl;
							}
							else if(x == 2){
								res = a - b;
								fo << a << " - " << b << " = " << res << endl;
							}
							else if(x == 3){
								res = a * b;
								fo << a << " * " << b << " = " << res << endl;
							}
							else if(x == 4){
								res = a / b;
								fo << a << " / " << b << " = " << res << endl;
							}
							else if(x == 5){
								res = a % b;
								fo << a << " % " << b << " = " << res << endl;
							}
						}
					}
					else{
						fo << "Ban da nhap sai!\n";
					}
				}
			}
			else{
				cout << "Khong mo duoc file!";
			}
	
		}
		else {
			cout << "Ban da nhap sai! Hay nhap lai\n";
		}
	}
	while(choice != 1 && choice != 2);
	return 0;
}
