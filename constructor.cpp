#include <bits/stdc++.h>
using namespace std;

int rd(int x, int y){
	int r = 1ll*rand()*rand()%INT_MAX;
    return r%(y - x + 1) + x;
}

int toInt(char *s){
    int r = 0;
    for(int i=0;i<strlen(s);i++){
        r *= 10;
        r += s[i] - '0';
    }
    return r;
} 

int main(int argc, char *argv[]){
	//����Ϊ��������� 
    srand((int)time(0) * toInt(argv[1]) );
    //��������д������ݹ����� 

	cout << "1\n";
	cout << rd(-5, -1) << ' ' << rd(1, 5) << ' ' << rd(1, 5) << '\n';
	cout << rd(1, 5) << ' ' << rd(1, 5) << ' ' << rd(1, 5) << ' ' << rd(1, 5) << ' ' << rd(1, 5) << '\n';

}
