#include<iostream>
using namespace std;
bool primeFun(int num){	//passed value of user are stored in num
	bool isPrime[num+1];	//creating an array of size n+1
	for(int i=0;i<=num;i++){	//making boolean for all values as true ,as it will be used-
		isPrime[i]=true;	//as prime by default (intial assumption for convenience)
	}
	isPrime[0]=false;	//*0* nor prime nor composite 
	isPrime[1]=false;	//*1* nor prime nor composite
	for(int i=2;i*i<=num;i++){
		if(isPrime[i]==true){
			for(int j=i*i;j<=num;j+=i){	//This is puting value of i's multiple's as false-
				isPrime[j]=false;	// as they will be composite, eg: 2 mltiple 4,6,8....;	3:3,6,9,...		
			}
		}
	}
	system("CLS");	//to clear screen 
	cout<<"<------------------------Prime Numbers------------------------>\n";
	return isPrime[num];
}

int main(){
	int num;
	bool Prim=false;
//	header();
	cout<<"<------------------------Prime Numbers------------------------>\n";
	cout<<"Inter a value to check it's prime or not : ";
	cin >> num;
	Prim=primeFun(num);	//n is intial start of range and n2 as range's end
	if(Prim==true){	//checking if the number is 0 or 1
		cout<<num<<" is a Prime Number";
	}else{
		cout<<num<<" is not a Prime Number";
	}
	return 0;
}
