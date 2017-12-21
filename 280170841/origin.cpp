#include <iostream>
using namespace std;
struct student{
	wchar_t name[4];
	int score;
};

int main()
{
	struct student p[4];

	wcin >> p[0].name;
	wcin >> p[1].name;
	wcin >> p[2].name;

	wcout << p[0].name<<endl;
	wcout << p[1].name<<endl;
   	wcout << p[2].name<<endl;
	return 0;
}
