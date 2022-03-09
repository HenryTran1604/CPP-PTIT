#include<bits/stdc++.h>
using namespace std;
int m, n, A[101][101];
int row[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int col[] = {-1, 0, 1, -1, 1, -1, 0, 1};
bool chuaxet[101][101];

void Init(void)
{
	cin >> m >> n;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> A[i][j];
			chuaxet[i][j] = true;
		}
	}
}
// kiem tra o (x, y) co di chuyen hop le?
int Test(int x, int y)
{
	if(x >= 0 && x < m && y >= 0 && y < n && A[x][y] && chuaxet[x][y])
		return true;
	return false;
}
// giai phap
void DFS(int x, int y)
{
	chuaxet[x][y] = false; // danh dau la da su dung
	//de auy den o tiep theo
	for(int k = 0; k < 8; k++)
	{
		if(Test(x + row[k], y + col[k]))
			DFS(x + row[k], y + col[k]);
	}
}
void solution()
{
	int cnt = 0;
	for(int x = 0; x < m; x++)
	{
		for(int y = 0; y < n; y++)
		{
			if(A[x][y] && chuaxet[x][y])
			{
				DFS(x, y);
				cnt++;
			}
		}
	}
	cout << cnt << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--)
	{
		Init();
		solution();
	}
    return 0;
}



