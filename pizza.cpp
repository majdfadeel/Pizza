#include<iostream>
using namespace std;
class pizza
{
	double price;
	int size;
	void set_price(double p) 
	{ price = p; }

    void set_size(int s) 
	{ size = s; }
	double get_price() 
	{ return price; }
     int get_size() 
	 { return _size; }
}
int main()
{
pizza p;
  p.set_price(9.99);
  p.set_size(8);
  cout << "Pizza size: " << p.get_size()<< endl;
  cout << "Pizza price: " << p.get_price() << endl;
return 0; 	
}
