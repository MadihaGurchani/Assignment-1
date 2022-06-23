#include <iostream>
using namespace std;
int main()
{
	int tCourses,id,loop,sum;
	tCourses = 0;
	id = 0;
	loop = 1;
	sum = 0;
	cout<<"My name is Madiha Gurchnai"<<endl;
	cout<<"My vu id is BC210428930"<<endl;
	cout<<" \nCourses list in current semester"<<endl;
	cout<<"1. Introduction to Programming"<<endl;
	cout<<"2. Introduction to Programming Practical"<<endl;
	cout<<"3. Digital Logic Design"<<endl;
	cout<<"4. Digital Logic Design Practical"<<endl;
	cout<<"5. Calculus II"<<endl;
	cout<<"6. Economics"<<endl;
	cout<<"7. Business and Technical English Writing"<<endl;
	cout<<"Total number of courses = ";
	cin>>tCourses;
	cout<<"First digit of VU ID =";
	cin>>id;
	sum = tCourses + id;
	cout<<"Sum of First digit of VUID and total courses = "<<sum<<endl;
	cout<<endl;
	while (loop <= sum)
	{
		cout<<loop<<": Welcome to CS201-Introduction to Programming"<<endl;
		loop = loop + 1;
	}
}

