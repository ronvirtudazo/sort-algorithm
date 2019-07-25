#include <iostream>

using namespace std;

void bubleSort(string &sort_string)
{ 
	unsigned int i{};
	unsigned int x{};

	for (i = 0; i < sort_string.length(); i++)
	{
		for (x = i + 1; x < sort_string.length(); x++)
		{ 
			if (sort_string[i] > sort_string[x])
			{
				char temp = sort_string[x];
				sort_string[x] = sort_string[i];
				sort_string[i] = temp;
			}  
		}				 
	} 
}

void insertionSort(string &sort_string)
{
	  
	int i = 1;
	while (i < sort_string.length())
	{
		int j = i;
		while (j > 0 and sort_string[j - 1] > sort_string[j])
		{
			char temp = sort_string[j];
			sort_string[j] = sort_string[j - 1];
			sort_string[j - 1] = temp;
			j = j - 1;
		}
		i = i + 1;
	} 
}

int main()
{
	string username = "";
	string sort_string;
	char sort_type;
	int comparison_count{};

	cout << "Enter your name: " << endl;
	cin >> username;
    cout << "Hello " << username << "!" << endl;
	cout << "Enter characters to sort: " << endl;
	cin >> sort_string;

	cout << "What sort algorthm you want, buble(b) or insertion(i) sort?" << endl;
	cin >> sort_type;
	if (sort_type == 'b')
	{
		bubleSort(sort_string);
	} else {
		insertionSort(sort_string);
	}
	cout << "Sorted  Characters: " << sort_string << endl;

}