#include <iostream>
using std::string;

class AbstractEmployee //abstract class for Employee objects
{
	virtual void AskForPromotion() = 0; //pure virtual function to ask for promotion
};



class Employee:AbstractEmployee //blueprint for Employee objects
{
private:
	string Company;
	int Age;
protected:
	string Name;
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

	void AskForPromotion() 
	{
		if (Age >= 30)
			std::cout << Name << " got promoted!" << std::endl;
		else
			std::cout << Name << ", sorry no promotion for you!" << std::endl;
	}

	virtual void Work() 
	{
		std::cout << Name << " Checking emails, other staff" << std::endl;
	}


};

class Developer : public Employee //subclass of Employee for Developer objects
{
public:
	string FavProgrammingLanguage;

	Developer(string name, string company, int age, string FavProgrammingLanguage) : Employee(name, company, age) //constructor for Developer class
	{
		this->FavProgrammingLanguage = FavProgrammingLanguage; //initialize the favorite programming language
	}

	void FixBug() //method to fix a bug
	{
		std::cout << Name << " fixed a bug using " << FavProgrammingLanguage << std::endl;
	}
	
	void Work() //method to work
	{
		std::cout << Name << " is working on " << FavProgrammingLanguage << std::endl;
	}
};

class Teacher : public Employee {
	//subclass of Employee for Teacher objects
public:
	string Subject;
	void PrepareLesson() //method to prepare a lesson
	{
		std::cout << Name << " is preparing a lesson on " << Subject << std::endl;
	}
	Teacher(string name, string company, int age, string subject) : Employee(name, company, age) //constructor for Teacher class
	{
		Subject = subject; //initialize the subject
	}

	void Work() {
		std::cout << Name << " is teaching " << Subject << std::endl;
	}
};

int main()
{
	Developer d = Developer("Alice", "TechCorp", 28, "C++"); //create a Developer object
	Teacher t = Teacher("Bob", "EduCenter", 35, "Mathematics"); //create a Teacher object
	
	Employee* e1 = &d; //create a pointer to Employee and assign it to the Developer object
	Employee* e2 = &t; //create a pointer to Employee and assign it to the Teacher object
	e1->Work(); //call the Work method for the Developer object
	e2->Work(); //call the Work method for the Teacher object
}

