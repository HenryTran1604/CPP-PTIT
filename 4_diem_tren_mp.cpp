#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef struct Point_vector{
	int x, y, z;
};

void nhap(Point_vector &x)
{
	cin >> x.x >> x.y >> x.z;
}
void vec(Point_vector A, Point_vector B, Point_vector &vt)
{
	vt.x = B.x - A.x;
	vt.y = B.y - A.y;
	vt.z = B.z - A.z;
}
Point_vector TCH(Point_vector vt1, Point_vector vt2) // tich co huong
{
	Point_vector vt;
	vt.x = (vt1.y*vt2.z-vt1.z*vt2.y);
	vt.y = vt1.z*vt2.x - vt1.x*vt2.z;
	vt.z = vt1.x*vt2.y - vt1.y*vt2.x;
	return vt;
}
bool check(Point_vector A, Point_vector B)
{
	int a = A.x*B.x + A.y*B.y + A.z*B.z;
	if(a ==0 ) return 1;
	return 0;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    	Point_vector A, B, C, D;
    	nhap(A); nhap(B); nhap(C); nhap(D);
    	Point_vector vt1, vt2, vt3, vt4;
    	vec(A, B, vt1); vec(A, C,vt2); vec(A, D, vt3);
    	vt4 = TCH(vt1, vt2);
    	if(check(vt4, vt3)==1) cout << "YES";
    	else cout << "NO";
    	cout << endl;
	}
    return 0;
}


