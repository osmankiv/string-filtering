#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	string a[5];
	char remove='//';
	try{
	
		for(int i=0;i<1;i++){
			cout<<"Enter tha string"<<i+1<<":";
			cin>> a[i];
		
			for( int j=0;j<a[i].length();j++){
				if(a[i][j] !=remove ){
					cout<< a[i][j];
				
				
				}
				else{
					a[i][j]=' ';
					cout<< a[i][j];	
			}
		
			}
			
		}
				
	}
	catch(...){
		//error hndel
		cout<<"we have error";
		
	}
	return 0;
}

