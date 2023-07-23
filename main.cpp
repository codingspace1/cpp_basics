#include<iostream>

bool test_num(int num)
{
    return (num > 5);
}


int main()
{
    int x = 10;
    int y = 20;
    int z = 3;
    int k = 4;

    bool result = test_num(3);
    std::cout<<result<<"\n";
    std::cout<<test_num(x)<<"\n";
    std::cout<<test_num(y)<<"\n";
    std::cout<<test_num(z)<<"\n";
    std::cout<<test_num(k)<<"\n";

std::cout<<"done testing \n";

return 0;
}
