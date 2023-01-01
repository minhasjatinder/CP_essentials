// seive of erathrosenes , we use an array to store the numbers 
// betweeen a particular range with value true for primes and not true for not primes 

#include<bits/stdc++.h>
using namespace std ; 
int main(){

 int n ; 
 cin>> n ; 

 vector<int>arr; 

for(int i =0 ; i<n ; i++){
          int temp ; 
          cin>>temp ; 
          arr.push_back(temp ) ;
}
// program to find distinct prime numbers in the product of the elements of the array 
 // first we need to make seive of erathrosenes upto the maximum limit of the number , it is given in the number
 // that the 2<arr[i]<=1000
 //
unordered_map<int , int >hmap ; 
 vector<int>seive(1000+1 , 1) ;
 for(int i = 2 ; i*i<=1000 ; i++){
          //means if the given number is prime and has not been cancelled by any number 
          //before is called seive of erathrosenes 

   if(seive[i]==1){
      for(int j = 2*i ; j <=1000 ; j= j+i){
          seive[j]= 0 ; 
      }
   }
 }
 

 for(int i = 0 ; i<seive.size(); i++){
          if(seive[i]==1){
                    for(auto  y:arr){
                              if(y%i==0){
                                        hmap[i]++ ;
                              }
                    }
          }
          
 }

 cout<<hmap.size()<<endl ;
}