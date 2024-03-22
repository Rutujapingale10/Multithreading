#include<iostream>
#include<thread>
using namespace std;
//function to be used in collable 
void func_dummy(int N)
{
	for(int i=0;i<N;i++)
	{
		cout<<"Thread 1 collable => function pointer \n";
		
	}
}
//A collable object
class thread_obj{
	public:
		void operator()(int N)
		{
			for(int i=0;i<N;i++)
			{
				cout<<"Thread 2 collable function object \n";
			}
		 } 
};
int main()
{
	
	//Define a lambda Expression
	auto f = [](int n)
	{
		for(int i=0;i<n;i++)
		{
			 cout<<"thread 3 collable lambda expression \n";	
		}	
	};	
	
	//launch thread using function pointer as collable 
	thread th1(func_dummy,2);
	
	//launch thread using function object as collable
	thread th2(thread_obj(),2);
	
	//launch thread using lambda expression as collable
	
	thread th3(f,2);
	
	
	
	//wait thread t1 to finish
	th1.join();
	//wait thread t2 to finish
	th2.join();
	//wait thread t3 to finish
	th3.join();
	
	
	
	
	return 0;
	
}
