#include<iostream>
	template<typename T>
	



	class pila{
		private{
			T elemento[100];
			int lung;
		
		public{
		
		pila(){
			lung=NULL;
		};
		
		bool pilavuota(){
			if (lung==NULL){
				return true;
			}
			else{ return false;
			};
			
		};
		
		void push(e){
			
			elemento[lung]=e;	
			lung++;
		};
		
		
		void pop(elemento){
			elemento[lung]=NULL;
			lung--;
			if (pilavuota==true){
				std::cout << "la pila é vuota" << std::endl;
			};
		};
		
		
		T top(elemento){
		 	if (pilavuota==true){
				std::cout << "la pila é vuota" << std::endl;
			}else{  
				std::cout << "Il primo elemento è:" << elemento[1] << std::endl;
				
			};
			
		};
		
		
		int lunghezzapila(lung){
			std::cout << "la lunghezza della pila è: " << lung << std::endl;
		};
		

		
		}
		
	};
