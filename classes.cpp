#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;


int main() {
	
	map<string, string> myClass;
	
	string classType,answer;
	
	do{
	
	cout << ">> Input: ";
    getline(cin, classType);
    
    if(classType == "exit"){
    	
    	cout << "See you later :)";
    	break;
	}
    
    
    if(myClass.find(classType) != myClass.end()){
    	
    	cout << ">> Class: " << myClass[classType] << endl;
   	    cout << endl;
	}else{
		cout << ">> I don't know . Which class ?: ";
		getline(cin, answer);
		
		cout << endl;
		
		myClass.insert(pair<string, string>(classType, answer));
		
	}
	
}while(classType != "exit");

	return 0;
}
