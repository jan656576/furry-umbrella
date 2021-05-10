#include <iostream>
#include <fstream>
using namespace std;
//66.4
class file
{
    ifstream inFile;
    
    public:
        file();
        ~file();
      
        void loop();
};


file::file()
{
    inFile.open("trojki.txt");
}

file::~file()
{
    inFile.close();
}
void file::loop(){
	int liczba;
	int a,b,c;
	int count = 0;
	while(!inFile.eof()){
		
		for(int i=0;i<3;i++){
			inFile >> liczba;
			if(i==0){
				a = liczba;
			
			}
			if(i==1){
				b = liczba;
				
			}
			if(i==2){
				c = liczba;
			}			
		}
		
		bool opcja = false;
		if(a > b+c || b > a+c || c > a+b){
			opcja = true;
		}
		
		if(opcja == true){
			 count++ ;
		}
	
	}
	cout << count;
}

int main()
{
    file f;
    f.loop();
    return 0;
}
