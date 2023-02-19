#include <bits/stdc++.h>
using namespace std;
void design(char n[50], char d[30])
{
	cout<<("\n\n");
	cout<<"                      Welcome to the Shop      \n";
	cout<<"___________________________________________________________________\n\n\n";
	cout<<"Date : "<<d<<endl;
	cout<<"Bill To : "<<n<<endl;
	cout<<endl;
	cout<<"___________________________________________________________________\n\n";
	cout<<"Items\t\t\t";
	cout<<"Quantity\t\t\t";
	cout<<"Price\t\t\t\n"; 
	cout<<"____________________________________________________________________\n";
	cout<<"\n\n";
}
void print( char item[100], int q, float p)
{
	cout<<item<<"\t";
	cout<<"\t\t   "<<q<<"\t";
	cout<<"\t\t\t"<<q*p<<"\t";
	cout<<"\n\n";
}
void calculate(float total){
	cout<<"\n";
	cout<<"======================================================================\n";
	cout<<"Total Amount : "<<total<<endl;
}
struct res {
	char n[50];
	char d[30];
	char item[100];
	int noi;
	int uci;
	int qty;
	
};
int main()
{   
    float total;
	int n1;
	struct res r1[50];
	cout<<"\nEnter The Date : ";
	cin>>r1->d;
	cout<<"\nEnter The Name : ";
	cin>>r1->n;
	cout<<"\nEnter the number of order : ";
	cin>>n1;
	for(int i=0 ; i<n1; i++)
	 {
	 	cout<<"\nEnter " <<i+1<<" item : ";
	 	cin>>r1[i].item;
	 	cout<<"Enter Quantity of item : ";
	 	cin>>r1[i].noi;
	 	cout<<"Per Unit Charge of item : ";
	 	cin>>r1[i].uci;
	 	total +=r1[i].noi * r1[i].uci;
	 }
	 design(r1->n , r1->d);
	 for(int i=0;i<n1;i++)
	 {
	 	print(r1[i].item , r1[i].noi , r1[i].uci);
	 }
	 calculate(total);
	 cout<<"\n";
	 cout<<"=====================================================================\n\n";
	 cout<<"\t**********************Thank You***************************\n";
	 return 0;
}

