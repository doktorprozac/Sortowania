#include <iostream>
#include <utility>
#include <string>
using namespace std;


int rand_number()
{
	int number;
	number = rand() % 100 + 10;

	return number;
}


//bubblesort
void sorting_table_bubble(int tab[], int size)
{	
	int i,j;
	for ( i = 0 ; i<size; i++)
	{
		for ( j = 0; j<size - 1; j++)
		{
			if (tab[j] > tab[j+1])
			swap (tab[j], tab[j+1]); 
			
			
		}
	}
	for (int k = 0; k<size; k++)
			{
			cout << "count: " << k << " = " << tab[k] << endl;
			}		
}

// selectionsort - sortowanie przez wstawianie

void selectionsort (int table[], int size)
{
	int i,j,k;

	/// min value

	int current_min;

	for (int i=0; i<size-1; i++)
	{
		current_min = i;
		for ( j = 1; j<size; j++)
		{
			if (table[j] < table[current_min])
			{
				swap(table[j] , table[current_min]);
				
			}

			if (current_min != i)
			{
			current_min = j;
			}
		}
		
	
	}
		for (int k = 0; k<10; k++)
		{
			cout << "count: " << k << " = " << table[k] << endl;
		}

	
}




int main()
{
	int table[10];
	int count = 0;
	int choice;





	do
	{
	cout << endl;
	cout << "Wylosowac liczby [1] " << endl;
	cout << "BubleSort [2] " << endl;
	cout << "Selectionsort [3] " << endl;
	cout << "Wyjscie z programu [4] " << endl;
	cout << endl;
	cout << "podaj co chcesz zrobic [1 2 3 4] : " << endl;
	cin >> choice;

	switch (choice)
	{
		case 1:
		do
		{
		table[count] = rand_number();
		cout << "drawn: " << table[count] << endl;
		count++;
		}

		while (count < 10);

		break;

		case 2:
		if (choice == 2)
		{
			cout << "najpierw wylosuj liczby !!!! - wybierz 1" << endl;
		}
		else
		{
		cout << endl;
		cout << "Bubble sort table: " << endl;
		cout << endl;
		sorting_table_bubble(table, 10);
		}

		break;

		case 3:
		if (choice == 3)
		{
		cout << "najpierw wylosuj liczby !!!! - wybierz 1" << endl;
		}
		else
		{
		cout << endl;
		cout << "Selection sort table: " << endl;
		selectionsort (table, 10);
		}
		
		break;

		case 4:
		int choice1;
		cout << "wyjscie z programu" << endl;
		
		break;

		default:
		cout << "wybrano inna liczbe, wybierz jedna z [1 2 3 4] " << endl;
	
		break;
	}

	}
	while (true);
	
	cin.get();
	cin.get();
	return 0;
}