
#include <bits/stdc++.h>     
using namespace std;
  
// function to generate random numbers in range [-100000 to 100000] :
int randomize() 
{   
    return (-100000+rand() % 200001); 
}
  
int main () 
{
  // for different values each time we run the code
  srand(time(NULL));
  // function to generate random numbers in range [1 to 10] :
  int t=1+rand()%10;
  cout<<t<<endl;
  while(t--){
  // function to generate random numbers in range [1 t0 100000] :
  int n=1+rand()%(100000);
  int k=1+rand()%10;
  cout<<n<<" "<<k<<endl;  
  vector<int> vect(n);
  
  // Fill all elements of vect using randomize()

  generate(vect.begin(), vect.end(), randomize);
  
  // displaying the content of vector
  for (int i=0; i<vect.size(); i++)
     cout << vect[i] << " " ;
    cout<<endl;
    }
  return 0;
}