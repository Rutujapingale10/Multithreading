# Multithreading
thread of execution is a sequence of instruction that can be executed concurrently with other such sequences in multithreading enviornments, while sharing a same address space 
an initialized thread object represents an active thread of execution; such a thread object is joinable; and has a unique thread id.

	Way to create threads in C++11
	1. Function pointer
	2. Functors
	3. Member functions
	4. Static member functions

#Join 
join() joining of a thread is done using join function of a thread class. It makes main thread and join thread intercommunicated. main thread terminates only after join thread terminates.
main thread waits for child thread to complete execution 

detach() - detach function detaches the threaad from parent thread. It allow both parent thread and thread execute independantly. detach thread will terminate after main terminated.

