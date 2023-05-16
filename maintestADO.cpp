// azure devops sample

#include <iostream>

bool validateEvenNumber(int x){
 return x % 2 == 0; 
}

int main() {
 
  cout << validateEvenNumber(5) << endl;
  cout << validateEvenNumber(6) << endl;
  cout << validateEvenNumber(7) << endl;
  
}
