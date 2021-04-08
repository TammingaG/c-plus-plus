#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
//	class myClass{
//		public:
//		void subjects(){
//		if (i==""){
//			cout<<"Please Key In a name";
//		}
//		}
//		public :
//		void grade(g){
//			if (g>100){
//				cout<< "Invalid!"
//			}
//			
//			else if(g>=80 ){
//				cout<<"A";
//			}
//			else if(g>=60){
//				cout<<"B";
//				}
//			else if (g>=50){
//				cout <<"C";
//				
//			}	
//			else if (g>=40){
//				cout<<"D";
//				
//			}
//			else if (g>=0 || g<=29){
//				cout<< "E";
//			}
//			else {
//				cout<<"Invalid";
//			}
//		}
//	};
int main(int argc, char** argv) {
	// Declaring variables
	string fname;
	string sname;
	string nameOfSubjects[9]= {"Math","English","Kiswahili","Computer Science","Chemistry"};
	int math, english, kiswahili,computerScience,chemistry;
	int total;
	int average;
	int grade;
	// Print name first and second and input name
	cout<< "Enter Your First Name"<< endl;	
	cin >> fname;
	cout<< "Enter Your Second Name"<< endl;	
	cin >> sname;
	
	cout <<"Key in your Marks"<<endl;
	
	//prints subject and inputs Grades.
	cout<<nameOfSubjects[0]<<":";
	cin>> math;
	//Condition to prevent user for keying in marks more than 100%
	if(math>100){
		cout<<"Invalid";
	}else{
	
	cout<<nameOfSubjects[1]<<":";
	cin>> english;
	if (english>100){
		cout<<"Invalid";
	}
	else{
	
	cout<<nameOfSubjects[2]<<":";
	cin>>kiswahili;
	if(kiswahili>100){
			cout<<"Invalid";
	}
	else{
	
	cout<<nameOfSubjects[3]<<":";
	cin>> computerScience;
	cout<<nameOfSubjects[4]<<":";
	cin>>chemistry;
	if (chemistry>100){
			cout<<"Invalid";
	}
	else{
	// calculation of average and printing output
	total= math + english + kiswahili + computerScience + chemistry;
	average = total/5;
		cout<< "Hello"<<"  "<< fname<<" "<<sname<<"  "<< "Your average grade is:"<<" "<< average<<"% "<<"and your grade is ";
	// Assining of Grades to students
		if (average>100){
			 cout<< "Invalid!";
			}
			
			else if(average>=80 ){
			 cout<<"A";
			}
			else if(average>=60){
				 cout<<"B";
				}
			else if (average>=50){
				 cout <<"C";
				
			}	
			else if (average>=40){
				 cout<<"D";
				
			}
			else if (average>=0 || average<=29){
				 cout<< "E";
			}
			else {
				cout<<"Invalid";
			}
			
}
}
}
}
	

	return 0;
}
