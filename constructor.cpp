#include <iostream>
#include <cstdio>
#include <string.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

int rd(int x, int y){
    return rand()%(y - x + 1) + x;
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

    cout << rd(10, 30) << '\n';

}
