#include<iostream>
using namespace std;
void header();
void primeFun(int n,int n2){	//passed value of n & n2 are stored in n, n2
	bool isPrime[n2+1];	//creating an array of size n+1
	for(int i=0;i<=n2;i++){	//making boolean for all values as true ,as it will be used-
		isPrime[i]=true;	//as prime by default (intial assumption for convenience)
	}
	isPrime[0]=false;	//*0* nor prime nor composite 
	isPrime[1]=false;	//*1* nor prime nor composite
	for(int i=2;i*i<=n2;i++){
		if(isPrime[i]==true){
			for(int j=i*i;j<=n2;j+=i){	//This is puting value of i's multiple's as false-
				isPrime[j]=false;	// as they will be composite, eg: 2 mltiple 4,6,8....;	3:3,6,9,...		
			}
		}
	}
	system("CLS");	//to clear screen 
//	header();
	cout<<"<------------------------Prime Numbers------------------------>\n";
	int count=0;
	for(int i=n;i<=n2;i++){
		if(isPrime[i]==true){
			cout<<i<<"\t";
			count++;	
		}
	}
	cout<<"\nTotal Prime numbers in this range is "<<count; 
}

int main(){
	int n,n2;
//	header();
	cout<<"<------------------------Prime Numbers------------------------>\n";
	cout<<"Starting Range : ";
	cin >> n;
	cout<<"Ending Range : ";
	cin>>n2;
	primeFun(n,n2);	//n is intial start of range and n2 as range's end
	return 0;
}
