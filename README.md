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
once we define the function then we can create thread object and pass function name as parameter and remaining parameter after that by simply using , in paranthesis.
void fun(int x)
{
}
std::thread t1(fun,3);

# By Using Lambda Expression 
it is similar like function pointer. syntax to create thread using lambda function and function pointer is same.

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

# Static Member Function
we can also launch the thread using static member function
class A{
public:
static void fun(int x)
{
}
};
int main()
{
std::thread t1(&A::fun,parameter);
}


# thread Operations - join(), detach() and swap





# Join 
join() joining of a thread is done using join function of a thread class. It makes main thread and join thread intercommunicated. main thread terminates only after join thread terminates.
main thread waits for child thread to complete execution 

# detach()  
detach function detaches the threaad from parent thread. It allow both parent thread and thread execute independantly. detach thread will terminate after main terminated.
# swap()
std swap() algorithm exchanges the state of lhs and rhs effectively called lhs.swap(rhs) it change thread id of thread.



# Mutex 
Mutex is mutual exclusion .
it is used to avoid race condition explicitly(In C++, when multiple threads modify the same shared resources simultaneously may cause race conditions. It may produce unpredictable output or unexpected behavior while executing the program)
it contains mutex types, lock types and specific function
# race condition - is a condition where to or more processes happen to change same data at a time.
if there is race condition we have to protect it and protected section is called race section or region.
# Member function
1) lock
2) try_lock
3) unlock
4) constructor
5) destructor
# lock()
lock is a member function of mutex 
it lock/block the execution of calling function until unlock by another thread.

mutex is a class and lock is member function of that
when multiple go to execute same data that time we can use lock function with mutex object. it will block the execution of calling function until first thread execution is not done or 
unlock().

# unlock()
unlock() is also memebr function of mutex class. it is used to release lock()

# try_lock









