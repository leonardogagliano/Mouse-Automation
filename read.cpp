#include <stdio.h>
#include <windows.h>
#include <fstream>
#include <iostream>

leftdown(){
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
}

leftup(){
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
}

using namespace std;
int main(void){
	
	ifstream file;
	string linha;
	file.open("positions.txt");
	system("pause");
	
	if(file.is_open()){
		while(getline(file, linha)){
		
		cout<<linha<<"\n";
		
		char x[3], y[3];
		
		for(int i=0; i<4; i++){
			x[i]=linha[i];
		}
	
		for(int f=6; f<10; f++){
		
			y[f-6]=linha[f];
		}
		
		int a=atoi(x);
		int b=atoi(y);
		
		
	
		

				SetCursorPos(a, b);
		
		Sleep(1);
	
		
		cout<<"\n--> "<<a<<", "<<b<<"\n";
		
	
				}
	}
}
