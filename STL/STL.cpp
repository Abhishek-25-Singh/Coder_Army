
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




return EXIT_SUCCESS;
}
