#include <iomanip>
#include<iostream>
#include<fstream>
#include<string>
#include<cmath>

using namespace std;

int main(){
    int count=0;
    float sum=0,mean=0;
    float Mill=0;
    float deviation=0;
    ifstream source;
    source.open("score.txt");
    string Text;
	while(getline(source,Text)){
		sum+=stof(Text);
        Mill+=pow(stof(Text),2);
        count+=1;
	}
    source.close();
    mean=sum/count;
    deviation=sqrt((Mill/count)-pow((sum/count),2));
    cout << "Number of data = "<<count<<endl;
    cout << setprecision(3);
    cout << "Mean = "<<mean<<endl;
    cout << "Standard deviation = "<<deviation<<endl;
}