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
	
	int pos;
	printf(" Enter the number of positions to be saved: ");
	scanf("%d", &pos);
	
	printf("\n\n ");
	system("pause");
	printf("\n Recording...");
	
	
	POINT a;
	
	
	ofstream file;
	
	file.open("positions.txt");
	
	for(int i=0; i<pos; i++){ //"i" defines how many positions are saved in the path
 		GetCursorPos(&a);
		file<<" "<<a.x<<"  "<<a.y<<"\n";
		Sleep(10); //this pause defines the 'distance' each position
	}
	
	printf("\n\n Finished. \n\n Now, open 'read.exe' to use this saved path.");
	return 0;
}




