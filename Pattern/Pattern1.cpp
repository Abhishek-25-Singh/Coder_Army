/*

                               *Coder Army *                                   Date:2/4/24 time:4:42pm
*Lecture 06: Solve Any Pattern Problem With Simple Trick Part-1

*/



#include <iostream>

int main(){

int n;
std::cout<<"enter The Value of n:";
std::cin>>n;
for (int i = 1 ; i<=n ; i++){
    for(int j = 1; j<=n; j++){
        std::cout<<"10"<<" ";

    }
    std::cout<<std::endl;
}
   
  /*int row , col;
    for (int row = 1 ; row<= 5 ; row++){
        for(int col = 1 ; col<= 5 ; col++){
            std::cout<<row<<" ";
        }
        std::cout<<std::endl;
    }
    */
/*int row , col;
for (int row = 1; row<=5 ; row=row+1){
    for(int col = 1 ; col <= 5 ; col=col+1){
        std::cout<<col<<" ";
    }
    std::cout<<std::endl;
}
*/
 
  /*
 int row ,col;
   for (row = 1;row<=5;row=row+1){
    char Alphabet = 'a' + (row - 1); ;
    for(col=1;col<=5;col=col+1){
     
        std::cout << Alphabet<<" ";

    }
    std::cout<<std::endl;
   }
   */


return 0 ; 
}
