#include<iostream>
#include<chrono>
#include<map>
#include<string>
#include<mutex>
#include<thread>

std::map<std::string,std::string>g_pages; //map g_pages
std::mutex g_pages_mutex;  //g_pages mutex

void save_page(const std::string &url)
{
	//simulate a long page fetch
	std::this_thread::sleep_for(std::chrono::seconds(2));
	
	std::string result = "fake content ";
	
	std::lock_guard<std::mutex > guard(g_pages_mutex);
	
	g_pages[url] = result;
	
	
}


int main()
{
	std::thread t1(save_page, "http://foo");
	std::thread t2(save_page, "http://bar");
	
	t1.join();
	t2.join();
	
	//safe to access a g_pages without lock() now as thread are joined
	
	for(const auto & [url,pages]: g_pages)
	{
		std::cout<<url<<" => "<<pages<<" => "<<"\n";
		
	}
	
	
	
	
	
}
