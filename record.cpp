#include <stdio.h>
#include <windows.h>
#include <fstream>
#include <iostream>

using namespace std;

leftdown(){
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
}

leftup(){
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
}

int main(int argc, char **argv){
	
	system("pause");
	printf("\n Recording...");
	
	
	POINT a;
	
	
	ofstream file;
	
	file.open("positions.txt");
	
	for(int i=0; i<100; i++){ //"i" defines how many positions are saved in the path
 		GetCursorPos(&a);
		file<<" "<<a.x<<"  "<<a.y<<"\n";
		Sleep(10); //this pause defines the 'distance' between two positions
	}
	
	printf("\n\n Finished. \n\n Now, open 'read.exe' to use this saved path.");
	return 0;
}




