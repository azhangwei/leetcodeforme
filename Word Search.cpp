//#include <iostream>
//#include <vector>
//#include <unordered_set>
//#include <string>
//using namespace std;
//
//struct Point
//{
//	int x;
//	int y;
//	Point(int a,int b):x(a),y(b){};
//};
//
//bool exist(vector<vector<char> > &board, string word);
//bool ec(vector<vector<char> > &board,string word,int k,Point NO);
//
//
//
//int main()
//{
//	vector<vector<char> > board;
//	vector<char> b;
//	b.push_back('a');
//	b.push_back('b');
//	b.push_back('c');
//	b.push_back('f');
//	vector<char> bb;
//	bb.push_back('s');
//	bb.push_back('f');
//	bb.push_back('c');
//	bb.push_back('s');
//	vector<char> ab;
//	ab.push_back('a');
//	ab.push_back('b');
//	ab.push_back('e');
//	ab.push_back('e');
//	board.push_back(b);
//	board.push_back(bb);
//	board.push_back(ab);
//	//board.push_back(c);
//	string word="see";
//	bool ok=exist(board,word);
//	return 0;
//}
//
//bool exist(vector<vector<char> > &board, string word)
//{
//	
//	int height=board.size();
//	int width=board[0].size();
//	vector<Point>lu;
//    Point NO(0,0);
//	int k=0;
//	int mark;
//	for(int i=0;i<height;i++)
//		for(int j=0;j<width;j++)
//		{
//			if(board[i][j]==word[0])
//			{
//				k=1;
//		        Point tmp(i,j);
//				board[i][j]=' ';
//		        if(ec(board,word,k,tmp))
//					return true;
//				board[i][j]=word[0];
//			}
//			else
//				continue;
//		}
//		return false;
//}
//bool ec(vector<vector<char> > &board,string word,int k,Point NO)
//{
//	int height=board.size();
//	int width=board[0].size();
//
//	if(k==word.size())
//		return true;
//	if(NO.x-1>=0)
//		if(board[NO.x-1][NO.y]==word[k])
//		{
//			NO.x-=1;
//			board[NO.x][NO.y]=' ';
//			if(ec(board,word,++k,NO))
//			{
//				return true;
//			}
//			else
//			{
//				--k;
//				board[NO.x][NO.y]=word[k];
//				NO.x+=1;
//			}
//		}
//	if(NO.x+1<height)
//		if(board[NO.x+1][NO.y]==word[k])
//		{
//			NO.x+=1;
//			board[NO.x][NO.y]=' ';
//			if(ec(board,word,++k,NO))
//				if(ec(board,word,++k,NO))
//				{
//					return true;
//				}
//			else
//			{
//				--k;
//				board[NO.x][NO.y]=word[k];
//				NO.x-=1;
//			}
//		}
//	if(NO.y+1<width)
//		if(board[NO.x][NO.y+1]==word[k])
//		{
//			NO.y+=1;
//			board[NO.x][NO.y]=' ';
//			if(ec(board,word,++k,NO))
//				return true;
//			else
//			{
//				--k;
//				board[NO.x][NO.y]=word[k];
//				NO.y-=1;
//			}
//		}
//	if(NO.y-1>=0)
//		if(board[NO.x][NO.y-1]==word[k])
//		{
//			NO.y-=1;
//			board[NO.x][NO.y]=' ';
//			if(ec(board,word,++k,NO))
//				return true;
//			else
//			{
//				--k;
//				board[NO.x][NO.y]=word[k];
//				NO.y+=1;
//			}
//		}
//  return false;
//}