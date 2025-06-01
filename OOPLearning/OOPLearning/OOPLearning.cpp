#include <iostream>
using std::string;

class Employee //blueprint for Employee objects
{
private:
	string Name;
	string Company;
	int Age;
public:
	void SetName(string name) //method to set the name of the employee
	{
		Name = name;
	}
	string GetName()
	{
		return Name; //return the name of the employee
	}//method to get the name of the employee

	void SetCompany(string company) //method to set the company of the employee
	{
		Company = company;
	}

	string GetCompany()
	{
		return Company; //return the company of the employee
	} //method to get the company of the employee

	void SetAge(int age) //method to set the age of the employee
	{
		Age = age;
	}

	int GetAge()
	{
		return Age; //return the age of the employee
	} //method to get the age of the employee

	void Introduce () //method to introduce the employee
	{
		std::cout << "Hello, my name is " << Name << ", I work at " << Company << " and I am " << Age << " years old." << std::endl;
	}

	Employee(string name, string company, int age) {
		Name = name;
		Company = company;
		Age = age;
	}

};

int main()
{
	Employee employee1 = Employee("John Doe","Tech Support",25);//create an Employee objects
	employee1.Introduce(); 
	Employee employee2 = Employee("Jane Smith", "Software Development", 30);//create another Employee object
	employee2.Introduce(); //call the Introduce method for the second employee
}

