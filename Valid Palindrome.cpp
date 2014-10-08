//#include <iostream>
//#include <string>
//
//using namespace std;
//
//bool isPalindrome(string s);
//
//int main()
//{
//	string tmp="A man, a plan, a canal: Panama";
//	string tmp_two="race a car";
//	string kong="1a2";
//	bool kon=isPalindrome(kong);
//	bool one=isPalindrome(tmp);
//	bool two=isPalindrome(tmp_two);
//	return 0;
//}
//
//bool isPalindrome(string s)
//{
//     string s_sim;
//	 if(s.size()==0)
//		 return true;
//	 for(int i=0;i<s.size();i++)
//	 {
//		 if(s[i]>='a'&&s[i]<='z')
//		 {
//			 s_sim=s_sim+s[i];
//			 continue;
//		 }
//		 if(s[i]>='A'&&s[i]<='Z')
//		 {
//			 s[i]=s[i]-'A'+'a';
//			 s_sim=s_sim+s[i];
//			 continue;
//		 }
//		 if(s[i]>='0'&&s[i]<='9')
//		 {
//			 s_sim=s_sim+s[i];
//			 continue;
//		 }
//		 continue;
//	 }
//	 if(s_sim.size()==0)
//		 return false;
//	 for(int i=0;i<s_sim.size()/2;i++)
//	 {
//		 if(s_sim[i]!=s_sim[s_sim.size()-i-1])
//			 return false;
//	 }
//	 return true;
//}