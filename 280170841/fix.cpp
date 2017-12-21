#include <iostream>
#include <cstring>
#include <locale>
using namespace std;
struct student{
	wchar_t name[4];
	int score;
};

int main()
{
	ios_base::sync_with_stdio(false);
	wcin.imbue(locale("en_US.UTF-8"));
	wcout.imbue(locale("en_US.UTF-8"));
	
	struct student p[4];

	wcin >> p[0].name;
	wcin >> p[1].name;
	wcin >> p[2].name;

	wcout << p[0].name<<endl;
	wcout << p[1].name<<endl;
   	wcout << p[2].name<<endl;
	return 0;
}
