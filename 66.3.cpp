#include <iostream>
#include <fstream>
using namespace std;
//66.3
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
	int a1,b1,c1;
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
		if((a*a)+(b*b) == c*c){
			opcja = true;
		}else if((b*b)+(c*c) == a*a){
			opcja = true;
		}else if(((a*a)+(c*c) == b*b)){
			opcja == true;
		}
		
		if(opcja == true){
			cout<<a<<" "<<b<<" "<<c<<"\n";
		}
	
	}
}

int main()
{
    file f;
    f.loop();
    return 0;
}
