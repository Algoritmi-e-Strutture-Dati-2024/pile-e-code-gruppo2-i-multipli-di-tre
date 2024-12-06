	#include<iostream>
	template<typename T>
	
	class coda{
		private{
	T elemento[100];
	int lung;
		};
		
		
		public{
		
	    coda(){
		 	lung=0;
		};
		
		
		bool codavuota() const{
			if (lung==NULL){
				return true;
			}
			else{
				return false;
			};
		
		};
		
		
		int enqueue(t e){
			if (lung<100){
				elemento[lung]=e;
			}
			else{
				std::cout<<"La coda è piena" << std::endl;
				
			};	
		};
		
		
		
		t dequeue(t c){
			if (codavuota==true){
				std::cout << "la coda é vuota" << std::endl;
			}else{  
					elemento[lung]=c;
					lung--;
					return c;
			};
		}
			
			
		t front(t c){
			elemento[1]=c;
				return c
		};
		
		
		int size(){
			return lung;
    }
		
		
		}
