
#include <iostream> 
#include <vector>

using namespace std;
int main(){
/*
                        Declare Vector                 
  Vector<Data_type> Vector_Name ;

   The issue in the code you provided lies in the re-declaration of the variable v.
   In C++, you cannot declare the same variable twice in the same scope.
 
 vector <int> v;
vector <int> v(4);
   cout << "Size of V :" << v.size() << endl;
   vector <int> v(4, 2);


*/
  vector <int> v1;
  vector <int> v2(4);
     cout << "Size of V :" << v2.size() << endl;
     vector <int> v3(4, 2);  //    vector <int> v3 (size,value) ;
     for (int i = 0; i < v3.size(); i++) {
         std::cout << v3[i] << " ";
     }
cout << endl;

vector <int > V;
cout << "Size Of The V :" << V.size() <<endl;
cout << "Capacity of the V : " << V.capacity() << endl;
cout << endl; 
       V.push_back(2);
       cout << "Size Of The V :" << V.size() << endl;
       cout << "Capacity of the V : " << V.capacity() << endl;
       cout << endl;

       V.push_back(4);
       cout << "Size of The V : " << V.size() << endl;
       cout << "Capacity of The V : " << V.capacity() << endl;
       cout << endl;

       V.push_back(5);
       cout << "Size of The V : " << V.size() << endl;
       cout << "Capacity of The V : " << V.capacity() << endl;
       cout << endl;

       vector<int> V2(5, 1);
       cout << "Size of The V : " << V2.size() << endl;
       cout << "Capacity of The V2 : " << V2.capacity() << endl;
       cout << endl;

       V2.push_back(2);
       cout << "Size of The V2 : " << V2.size() << endl;
       cout << "Capacity of The V2 : " << V2.capacity() << endl;
       cout << endl;


return EXIT_SUCCESS;
}