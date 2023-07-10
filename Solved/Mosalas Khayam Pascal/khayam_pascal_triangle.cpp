#include <iostream> 
using namespace std; 

int main() 
{ 
	int i, j, n; 
	cout << "Enter the size of rhombus\n";
	cin >> n;
	
	for (i = 1; i <= n; i++) { 
		for (j = 1; j <= n - i; j++)
  			cout << " "; 

		for (j = 1; j <= n; j++)
			cout << "*"; 
		for (j = 1; j <= i - 1; j++)
			cout << "*"; 
	
		cout << "  "; 
		
		for (j = 1; j <= n; j++) 
			cout << "*"; 

		for (j = 1; j <= n - i; j++) 
			cout << "*"; 
	
		cout << "\n"; 
	} 
		
	for (i = n - 1; i >= 1; i--) { 
		for (j = 1; j <= n - i; j++)
			cout << " "; 

		for (j = 1; j <= n; j++) 
			cout << "*"; 
		
		for (j = 1; j <= i - 1; j++) 
			cout << "*"; 
	
		cout << "  "; 
	
		for (j = 1; j <= n; j++) 
			cout << "*"; 
		for (j = 1; j <= n - i; j++) 
			cout << "*"; 
		
		cout << "\n"; 
	} 

	return 0; 
}
