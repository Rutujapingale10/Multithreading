# Multithreading
thread of execution is a sequence of instruction that can be executed concurrently with other such sequences in multithreading enviornments, while sharing a same address space 
an initialized thread object represents an active thread of execution; such a thread object is joinable; and has a unique thread id.
# Idea is achieving parallelism by dividing process in multiple thread.



	Way to create threads in C++11
	1. Function pointer
	2. Functors
	3. Member functions
	4. Static member functions
# working of a thread 
 once we created thread object we can pass newly created thread to collable (coolable is part of executable code or simply we can say function or method that we want to execute with the help of thread)
 there are 3 diiferent ways to achive this 
 
# By using function Object -
 first we need class inside class we have to overload the operator. when thread is created code containing overloaded function is executed 
 class A{
 public:
 void operator()(int x)
 {
 	
 };
 int main()
 {
 	std::thread t1(classname(),4); // (A(),3)
}
# By function pointer

We can define collable function with the function pointer 
once we define the function then we can create thread object and pass function name as parameter and remaining parameter after that by simply using , in paranthesisi.

# By Using Lambda Expression 
it is similar like function pointer 

# launching thread using Non static member function
class A{
public:
	void fun1(param)
 {
 }
};
Base b; //object of class

int main()
{
std::thread t1(&A::fun1,&b,param)
// first parameter is the reference to the functionn
// and second paramter is reference of the object
// at last we have arguments
}









# Join 
join() joining of a thread is done using join function of a thread class. It makes main thread and join thread intercommunicated. main thread terminates only after join thread terminates.
main thread waits for child thread to complete execution 

# detach()  
detach function detaches the threaad from parent thread. It allow both parent thread and thread execute independantly. detach thread will terminate after main terminated.





