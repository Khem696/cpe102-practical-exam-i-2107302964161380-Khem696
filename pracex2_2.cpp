#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>

using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] > x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	
	int i=0;
	int N=20;
	float x[N];
	ifstream source;
	source.open("score3.txt");
	string score;
	while(getline(source,score))
	{
		x[i]=atof(score.c_str());
		i++;		
	}
	sort(x,N);
	ofstream copy("rank.txt");
	ofstream dest("result.txt");
	for(int i=0;i<N;i++)
	{
		if(x[i-1]==x[i])
		{
			cout<<x[i]<<"="<<i<<endl;
			copy<<x[i]<<" "<<i<<endl;
			dest<<x[i]<<"="<<i<<endl;	
		}
		else
		{
			cout<<x[i]<<"="<<i+1<<endl;
			copy<<x[i]<<" "<<i+1<<endl;
			dest<<x[i]<<"="<<i+1<<endl;
		}
	}
	copy.close();
	dest.close();
	return 0;
}
