//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//bool isValidSudoku(vector<vector<char> > &board);
//bool check(char ch, bool used[9])
//{
//	if (ch == '.') return true;
//	if (used[ch - '1']) return false;
//	return used[ch - '1'] = true;
//}
//
//bool solveSudo(vector<vector<char> > &board);
//void solveSudoku(vector<vector<char> > &board);
//bool isValid(vector<vector<char> > &board,int x,int y);
//
//int main()
//{
//	int len=9;
//	vector<vector<char> > bord(len,vector<char>(len));
//	for(int i=0;i<len;i++)
//		for(int j=0;j<len;j++)
//			bord[i][j]='.';
//	for(int i=1;i<len;i++)
//		bord[0][i]=char(i+'0');
//	for(int i=1;i<len;i++)
//		bord[i][0]=char(i+'0');
//
//	bool re=isValidSudoku(bord);
//	return 0;
//}
//
//bool isValidSudoku(vector<vector<char> > &board)
//{
//	bool used[9];
//	for (int i = 0; i < 9; ++i) {
//		fill(used, used + 9, false);
//		for (int j = 0; j < 9; ++j) // 检查行
//			if (!check(board[i][j], used))
//				return false;
//		fill(used, used + 9, false);
//		for (int j = 0; j < 9; ++j) // 检查列
//			if (!check(board[j][i], used))
//				return false;
//	}
//	for (int r = 0; r < 3; ++r) // 检查9 个子格子
//		for (int c = 0; c < 3; ++c)
//		{
//			fill(used, used + 9, false);
//	    for (int i = r * 3; i < r * 3 + 3; ++i)
//		   for (int j = c * 3; j < c * 3 + 3; ++j)
//			if (!check(board[i][j], used))
//            return false;
//		}
//		return true;
//
//}
//
//void solveSudoku(vector<vector<char> > &board)
//{
//	bool tr=solveSudo(board);
//}
//
//bool solveSudo(vector<vector<char> > &board)
//{
//	for(int i=0;i<9;i++)
//		for(int j=0;j<9;j++)
//		{
//			if(board[i][j]=='.')
//			{
//				for(int k=1;k<=9;k++)
//				{
//					board[i][j]=k+'1';
//					if(isValid(board,i,j)&&solveSudo(board))
//						return true;
//					board[i][j]='.';
//				}
//				return false;
//			}
//		}
//}
//
//bool isValid(vector<vector<char> > &board,int x,int y)
//{
//	bool A[9];
//	fill(A,A+9,false);
//	for(int i=0;i<9;i++)
//	{
//		if(board[x][i]=='.')
//			continue;
//		int tmp=board[x][i]-'1';
//		if(A[tmp]==false)
//			A[tmp]=true;
//		else
//			return false;
//	}
//	fill(A,A+9,false);
//	for(int i=0;i<9;i++)
//	{
//		if(board[x][i]=='.')
//			continue;
//		int tmp=board[i][y]-'1';
//		if(A[tmp]==false)
//			A[tmp]=true;
//		else
//			return false;
//	}
//
//	int a,b;
//	a=x%3;
//	b=y%3;
//		fill(A,A+9,false);
//	for(int i=a*3;i<a*3+3;i++)
//		for(int j=b*3;b<b*3+1;b++)
//		{
//			if(board[i][j]=='.')
//				continue;
//			int tmp=board[i][j]-'1';
//			if(A[tmp]==false)
//				A[tmp]=true;
//			else
//				return false;
//		}
//}
