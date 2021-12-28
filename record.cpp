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

void pathList();
void createPath();

int main(int argc, char **argv){
	
	//variables
	int menuChoice;
	char newPathName[10];
	
	ofstream createFile;
	ifstream readFile;
	
	//a menu to manage the saved positions
	printf(" Mouse Path Automation\n\n"); //title
	printf(" 1) List Saved Paths \n 2) Add A New Path \n 3) Delete A Path \n"); //actions
	printf(" \nType the desired action number and press Enter: ");
	scanf("%d", &menuChoice);
	
	if(menuChoice == 1){
		
	}else if(menuChoice == 2){
		printf(" \nType the path name and press enter: ");
		
		
	}
	
	return 0;
}

void pathList(){
	
}

void createPath(){
	
}


