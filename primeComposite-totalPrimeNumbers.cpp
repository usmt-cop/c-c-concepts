#include<iostream>
using namespace std;

void primeFun(int n){
	bool isPrime[n+1];	//creating an array of size n+1
	for(int i=0;i<=n;i++){	//making boolean for all values as true ,as it will be used-
		isPrime[i]=true;	//as prime by default (intial assumption for convenience)
	}
	isPrime[0]=false;	//*0* nor prime nor composite 
	isPrime[1]=false;	//*1* nor prime nor composite
	for(int i=2;i*i<=n;i++){
		if(isPrime[i]==true){
			for(int j=i*i;j<=n;j+=i){	//This is puting value of i's multiple's as false-
				isPrime[j]=false;	// as they will be composite, eg: 2 mltiple 4,6,8....;	3:3,6,9,...		
			}
		}
	}
	int primeCount=0,comCount=0;
	system("CLS");	//to clear screen
	cout<<"<------------------------Prime Numbers------------------------>\n";
	for(int i=2;i<=n;i++){
		if(isPrime[i]==true){
		primeCount++;
		}
//		else{
//			comCount++; //for composite number count
//		}
	}
//	cout<<comCount;
	cout<<"Total Prime numbers are "<<primeCount;
}

int main(){
	int n;
	cout<<"<------------------------Prime Numbers------------------------>\n";
	cout<<"Enter a value";
	cin >> n;
	primeFun(n);	//
	return 0;
}
