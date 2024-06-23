#include <iostream>
int main()
{
// Array Declaration 
int arr[100]; //arr-> Name of the array and 100 is Size of that array
std::string  cars[] = { "Volvo", "BMW", "Ford", "Mazda" };
std::cout << cars[0] << std::endl;
std::cout << cars[1] << std::endl;
std::cout << cars[2] << std::endl;
std::cout << cars[3] << std::endl;
//std::cout << cars[3] << std::endl;
int arr1[] = { 11,22,33,44,55,66 };
std::cout << arr1[0] << std::endl;
std::cout << arr1[1] << std::endl;
std::cout << arr1[2] << std::endl;
std::cout << arr1[3] << std::endl;
std::cout << arr1[4] << std::endl;
std::cout << arr1[5] << std::endl;

	//Array Initialization
int arr1[5] = { 6,8,5,1,9 };   // Name of the Array is arr and size is 5
int arr2[] = { 3,8,2,  9  };     //--> Without declaring the size 
int arr3[6] = { 19, 10, 8 }; //---> Remaining value will be zero
	return 0;
}
