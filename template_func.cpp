#include<iostream>

using namespace std;

template<typename T>
T add(T num1, T num2)
{
    return(num1+num2);
}

template<typename T>
T multiply(T num1, T num2)
{
    return(num1* num2);
}




int main()
{
    int result1;
    double result2;

    result1 = add<int>(2,3);
    cout<<"2 + 3 = "<<result1<<endl;

    result2 = add<double>(4.3,5.3);
    cout<<"4.3 + 5.3 = "<<result2<<endl;

    float n1 = multiply(5.2, 4.1);
    cout<<"float multiplication: "<<n1<<endl;

    double n2 = multiply(123.2,9.1);
    cout<<"double multiplication: "<<n2<<endl;

    return 0;
}