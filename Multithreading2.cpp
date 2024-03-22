#include<iostream> //std cout
#include<thread>   //std::thrad std::this_thread::sleep_for
#include<chrono>	//std::chrono::seconds 
void pause_thread(int n)
{
	std::this_thread ::sleep_for(std::chrono::seconds(n));
	std::cout<<"pause of "<<n<<"second ended \n";
	
}
int main()
{
	std::cout<<"Spawning and detaching 3 thread \n";
	std::thread t1 (pause_thread , 1);
	std::thread t2 (pause_thread , 2);
	std::thread t3 (pause_thread , 3);
	t1.detach();
	t2.detach();
	t3.detach();
	
	std::cout<<"Done spawning thread ";
	std::cout<<"(The main thread will now pause for 5 sec ) \n";
	//give detach threads time to finish (but not guaranteed!)
	
	pause_thread(5);
	
	return 0; 
		
}
