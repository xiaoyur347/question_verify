#include<string>
#include<iostream>
#include<cstdlib>

using namespace std;

class  cla1{
public:
	void fun1();
	void fun4(int x,string y);

private:
	int a;
	string b;
};

class cla2{
public:
	void fun2();
	void fun3(int x,string y);

private:
	cla1 *p;
};

void cla1::fun1(){
	a=1;
	b="welcome";
}

void cla1::fun4(int x,string y){
	a=x;
	b=y;
}

void cla2::fun2(){
	p=(cla1 *)malloc(sizeof(cla1)*10);
	for(int i=0;i<10;i++) {
		::new((void *)&p[i]) cla1();
		p[i].fun1();
	}
}

void cla2::fun3(int x,string y){
	p=(cla1 *)malloc(sizeof(cla1)*10);
	for(int i=0;i<10;i++) {
		::new((void *)&p[i]) cla1();
		p[i].fun4(x,y);
	}
}

int main(){
	cla2  test;
	test.fun2();
	return 0;
}
