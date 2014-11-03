#include <iostream>
#include <string>
using namespace std;
int lengthOfLastWord(const char *s);
int main()
{
	const char *s="helo  ";
	int result=lengthOfLastWord(s);
	return 0;
}

int lengthOfLastWord(const char *s)
{
	int len=0;
	if(s==NULL)
		return len;
    int tmp=0;
	int last=0;
	while(*(s+tmp)!='\0')
	{
		if(*(s+tmp)==' ')
		{
			if(len!=0)
			  last=len;
			len=0;
		}
		else
		    len++;
		tmp++;
	}
	if(len==0)
		len=last;
	return len;

}