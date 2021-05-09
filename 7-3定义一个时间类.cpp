#include <bits/stdc++.h>
using namespace std;

class Time{
	public:
		Time(int a,int b,int c){
			h=a;
			m=b;
			s=c;
		}
		void setTime(int a,int b,int c){
			h=a;
			m=b;
			s=c;
		}
		void show(){
			printf("%02d-%02d-%02d\n",h,m,s);
		}
	private:
		int h,m,s;
};

int main(){
	int x,y,z;
	cin>>x>>y>>z;
	Time a(x,y,z);
	a.show();
	
}
