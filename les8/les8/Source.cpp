#include <iostream>
#include <vector>
#include<Windows.h>

using namespace std;






void showtab(vector<vector<int>>& tab) {
	for (int i = 0; i < tab.size(); i++)
	{
		for (int j = 0; j < tab[i].size(); j++)
		{
			cout << tab[i][j];
			
		}
		cout << endl;
	}

}


int main() {


	int c = 8;
	int l = 8;
	int nbQueen = 4;
	vector<vector<int>> tab;
	for (int i = 0; i < c; i++) {
		tab.push_back(vector<int>(l));
		for (int j = 0; j < c; j++) {
			tab[i][j] = 0;

		}
	}



	showtab(tab);




	for (int e = 0; e < tab.size(); e++)
	{
		for (int f = 0; f < tab[e].size(); f++)
		{
			if (tab[e][f] == 0) {
				if (e > 0 && f > 0)
				{
					cout << "rentre dans le if" << endl;
					

					if (tab[e][f - 1] == 1 || tab[e][f - 1] == 2) {
						tab[e][f] = 2;
					}
					if (tab[e - 1][f] == 1 || tab[e - 1][f] == 2) {
						tab[e][f] = 2;
					}
					
					if (tab[f - 1][e] == 0)
					{
						tab[f][e] = 1;
					}
					

					if(tab[e-1][f] == 0)
					{
						tab[e][f] = 1;
					}

				}
				else
				{

					cout << "rentre dans le else" << endl;

				}
				/*tab[e][f] = 1;
				*/
			}
			
			else
			{
				tab[e][f] = 2;
			}

		}

	}

	
	showtab(tab);
	Sleep(100000);
	
}
