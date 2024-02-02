#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &x,int &y,int &z,int &w){
	int m[4],j;
	m[0]=x;
	m[1]=y;
	m[2]=z;
	m[3]=w;
	j=rand()%4;
	x=m[j];
	do{
		j=rand()%4;
	}while(m[j]==x);
	y=m[j];
	do{
		j=rand()%4;
	}while(m[j]==x||m[j]==y);
	z=m[j];
	do{
		j=rand()%4;
	}while(m[j]==x||m[j]==y||m[j]==z);
	w=m[j];
}
