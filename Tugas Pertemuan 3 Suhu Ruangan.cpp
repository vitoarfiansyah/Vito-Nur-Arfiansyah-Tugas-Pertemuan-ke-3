#include <iostream>

using namespace std;

int main()

{
	int suhu;
	
	cout<<"Suhu Ruangan = "; cin>>suhu;
	
	
	if (suhu > 33)
	{
	cout<< "Suhu Ruangan Panas" <<endl; 
	}
	else if(suhu <= 18) 
	{ 
	cout<< "Suhu Ruangan Dingin" <<endl;
	}
	else { cout<< "Suhu Ruangan Sejuk";
	}
	
	
	return 0;
}
