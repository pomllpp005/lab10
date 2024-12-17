#include<iostream>
#include<string>
using namespace std;

int main(){
char grade;
	int count[5] = {};
	int i=0;
	int total=0;
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
	    i+=1;
		cout << "Student [" <<i<< "]: ";
		cin >> grade; 
		
		if(grade=='0') {
		    break;
		} 
		if(grade=='A'){
		    count[0]+=1;
		    total+=1;
		}else if(grade=='B'){ 
		    count[1]+=1;
		    total+=1;
		}
		else if(grade=='C'){ 
		    count[2]+=1;
		    total+=1;
		}
		else if(grade=='D'){ 
		    count[3]+=1;
		    total+=1;
		}
		else if(grade=='F'){ 
		    count[4]+=1;
		    total+=1;
		}
		else { 
		    cout<<"Wrong input. Please input again."<<endl;
		     i-=1;
		} 
		
	}while(true);

	cout << "In total " <<total<< " students."<<endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;
	return 0;
}