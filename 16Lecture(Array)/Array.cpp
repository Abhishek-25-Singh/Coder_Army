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

	//Taking input from user
int arr3[10];
for (int i = 0; i < 10  ; i++) {
	std::cin >> arr3[i] ;
}
	//Print the value taken from the user
for (int i = 0; i < 10; i++) {
	std::cout<< arr3[i]<<" ";
}

/*

int arr4[] = { 0 }; //Valid for 0 not for all value
int arr5[5] = { 0 }; //--> Output = 0 0 0 0 0
for (int i = 0; i < 10; i++) {
	std::cout << arr5[i] << " ";
}
*/

/*
int arr6[5] = { 1 };  //--> Output = 1 0 0 0 0
for (int i = 0; i < 10; i++) {
	std::cout << arr6[i] << " ";
}
*/
//Find the Maximumm element from the Array
	int arr[] = { 11,22,33,880,44,33,111 };
int n = sizeof(arr) / sizeof(arr[0]);
int ans = INT8_MIN;
for (int i = 0; i < n; i++) {
	if (arr[i] > ans) {
		ans = arr[i];
	}
}
std::cout << ans;

		//Find the Minimum VAlue from the Array 
	int arr[] = { 11,22,33,0,44,-8,-4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int ans = INT8_MAX;
	for (int i = 0; i < n; i++) {
		if (arr[i] < ans) {
			ans = arr[i];
		}
	}
	std::cout << ans;
	return 0;
}
