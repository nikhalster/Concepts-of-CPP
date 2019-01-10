// If we do not use static keyword, the variable count, is reinitialized everytime when counter() function is called, and gets destroyed each time when counter() functions ends. But, if we make it static, once initialized count will have a scope till the end of main() function and it will carry its value through function calls too.
// If you don't initialize a static variable, they are by default initialized to zero.



#include <iostream>


void counter_with_static()
{
    static int count=0;
    std::cout << count++ <<" ";
}

void counter_without_static()
{
    int count=0;
    std::cout << count++;
}

int main()
{
    for(int i=0;i<5;i++)
    {
        counter_with_static();
	    counter_without_static();
        std::cout<<std::endl;

    }

}
