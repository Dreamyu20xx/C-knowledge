#include<iostream>
#include<sstream>
#include<string>
#include<limits>
#include<algorithm>


using namespace std;

std::string FormatDbl(double d)
{
	d = d + 0.005;
	ostringstream out;
	int prec = numeric_limits<double>::digits10; // 15
	cout<<"prrec is "<<prec<<endl;

	out.precision(prec);//覆盖默认精度

	out<<d;
	string str = out.str(); //从流中取出字符串
	size_t n = str.find('.');
	if ((n != string::npos) //有小数点
	&& (str.size() > n + 3)) //后面至少还有decplaces位吗？
	{
		if(str[n + 2] == '0')
		{
			if(str[n + 1] == '0')
			{
				str[n] ='\0';
			}else{
				str[n + 2] ='\0';
			}
		}else
		{
			str[n + 3]='\0';//覆盖第一个多余的数
		}

		cout<<"n = "<<n<<endl;
	}
	string str1(str.c_str());
	swap(str,str1);
//	str.swap(string(str1));
	return str1;
}
class bar{};
class foo{
private:
protected:
public:
		int s;
		const static  char b=2 ;
		const bar b3;
		static bar b1;
		static int hello(void);
		const int s1;
		foo():b3(b1),s1(8)
		{
//		 b3=b1;
		}
		void print(void) const
		{
			int p1= 10;
			p1= 20;
//			s1 = 1;
		}
};
bar foo:: b1;
//bar foo:: b3;
int foo::hello(void)
{
	cout<<"hello"<<endl;
//	cout<<s<<endl;
}

int main()
{
//	cout<<sizeof(long int);
//	std::string s;
//	s= FormatDbl(37484854233.015);
//	cout<<s<<endl;
	foo::hello();
return 0;
}
