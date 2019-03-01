#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
char alphabet[8][8];

void showAlphabet(char [][8]);
void randomAlphabet(char [][8]);

int main(){
	srand(time(0));	
	randomAlphabet(alphabet);
	showAlphabet(alphabet);
}

void showAlphabet(char a[8][8]){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << alphabet[i][j] << " ";
		}
		cout << "\n";
	}
}

void randomAlphabet(char b[8][8])
{
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			b[i][j]=rand()%122+96;
		}
	}
}
