//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void solve(vector<vector<char>> &board);
//struct Point 
//{
//	int y;
//	int x;
//	Point(int yy,int xx):y(yy),x(xx){};
//};
//
//int main()
//{
//
//	return 0;
//}
//
//void solve(vector<vector<char>> &board)
//{
//	if(board.size()==0)
//		return;
//	int height=board.size();
//	int width=board[0].size();
//	vector<Point> Container;
//	char p;
//	for(int i=0;i<width;i++)
//	{
//		p=board[0][i];
//		if(p=='O')
//		{
//			board[0][i]='A';
//			Container.push_back(Point(0,i));
//		}
//	}
//	for(int i=0;i<width;i++)
//	{
//		p=board[height-1][i];
//		if(p=='O')
//		{
//			board[height-1][i]='A';
//			Container.push_back(Point(height-1,i));
//		}
//	}
//	for(int i=1;i<height-1;i++)
//	{
//		p=board[i][0];
//		if(p=='O')
//		{
//			board[i][0]='A';
//			Container.push_back(Point(i,0));
//		}
//	}
//	for(int i=1;i<height-1;i++)
//	{
//		p=board[i][width-1];
//		if(p=='O')
//		{
//			board[i][width-1]='A';
//			Container.push_back(Point(i,width-1));
//		}
//	}
//		Point loc(0,0);
//    while(Container.size()>0)
//	{
//		loc=Container.back();
//		Container.pop_back();
//		if(loc.y-1>=0)
//		{
//			if(board[loc.y-1][loc.x]=='O')
//			{
//				board[loc.y-1][loc.x]='A';
//				Container.push_back(Point(loc.y-1,loc.x));
//			}
//		}
//		if(loc.x-1>=0)
//		{
//			if(board[loc.y][loc.x-1]=='O')
//			{
//				board[loc.y][loc.x-1]='A';
//				Container.push_back(Point(loc.y,loc.x-1));
//			}
//		}
//		if(loc.y+1<height)
//		{
//			if(board[loc.y+1][loc.x]=='O')
//			{
//				board[loc.y+1][loc.x]='A';
//				Container.push_back(Point(loc.y+1,loc.x));
//			}
//		}
//		if(loc.x+1<width)
//		{
//			if(board[loc.y][loc.x+1]=='O')
//			{
//				board[loc.y][loc.x+1]='A';
//				Container.push_back(Point(loc.y,loc.x+1));
//			}
//		}
//	}
//	for(int i=0;i<height;i++)
//		for(int j=0;j<width;j++)
//		{
//			if(board[i][j]=='A')
//			{
//				board[i][j]='O';
//				continue;
//			}
//			if(board[i][j]=='O')
//			{
//				board[i][j]='X';
//				continue;
//			}
//		}
//}