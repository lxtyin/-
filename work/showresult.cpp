#include <iostream>
#include <cstring>
#include <fstream>
#include <windows.h>
using namespace std;

void Color(int x) {
	/*	7ΪĬ�ϰ�ɫ
		0 = ��ɫ                8 = ��ɫ����
		1 = ��ɫ                9 = ����ɫ
		2 = ��ɫ                10 = ����ɫ
		3 = ����ɫ              11 = ��ǳ��ɫ
		4 = ��ɫ                12 = ����ɫ
		5 = ��ɫ                13 = ����ɫ
		6 = ��ɫ                14 = ����ɫ
		7 = ��ɫ                15 = ����ɫ	*/
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
}

int main(){
	ifstream fin;
	fin.open("tmp.txt");
	
	Color(7); 
	string s = "", sc;
	while(getline(fin, sc)){
		s += sc;
		s += '\n';
	}

	int num = s.size();
	for(int i=0;i<s.size();i++){
		if(s[i] == ']') Color(7);
		cout << s[i];
		if(s[i] == '['){
			if(s[i+1] == 'A') Color(10);
			else if(s[i+1] == 'W') Color(4);
		}
	}
	
	fin.seekg(0, ios_base::beg);
	fin.close();
    
	return 0;
}
