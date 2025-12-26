#include <iostream>
#include <string>

class Phone
{
	private:
		std::string brand;
		double price;
	
	public:
		std::string getBrand()
		{
			return this->brand;
			
		}
		
	public:
		void setBrand(std::string val)
		{
			this->brand = val;
		}
		
	
	public:
		double getPrice()
		{
			return this->price;
		}
		
	public:
		void setPrice(double val)
		{
			this->price = val;
		}
		
	public:
		Phone()
		{
			setBrand("");
			setPrice(0.0);
		}
		
		Phone(std::string b)
		{
			setBrand(b);
			setPrice(0.0);
		}
		
		Phone(double d)
		{
			setBrand("");
			setPrice(d);
		}
		
		Phone(std::string b, double d)
		{
			setBrand(b);
			setPrice(d);
		}
		
};
