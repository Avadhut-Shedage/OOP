#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream file;
	file.open("Sample.txt", ios::out);
	
	if(!file){
		cout<<"Error, file is not created.."<<endl;
		return 0;
	}else{
		cout<<"File created successfullly.."<<endl;
	}
	
	file<<"Avadhut shedage..";
	file.close();
	
	file.open("Sample.txt", ios::in);
	if(!file){
		cout<<"File is not Present.."<<endl;
		return 0;
	}
	
	char ch;
	cout<<"File content : "<<endl;
	while(!file.eof()){
		file>>ch;
		cout<<ch;
	}
	
	file.close();
	return 0;
}
