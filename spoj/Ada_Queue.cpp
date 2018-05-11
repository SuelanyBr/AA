#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int num;
	deque<int> queue;
	
	string p;
	int q;
	
	bool aux = false;

	cin >> num;
	
	
	for(int i = 0; i < num; i++){
		cin >> p;
		
		if(p == "push_back"){
			cin >> q;
			if(!aux){
				queue.push_back(q);
			}else{
				queue.push_front(q);
			}
			
			
		}
		
		else if( p == "toFront"){
			cin >> q;
			if(!aux){
				queue.push_front(q);
			}else{
				queue.push_back(q);
			}

		}
		
		else if(p == "reverse"){
			aux = !aux;
			
		}
		
		else if(p == "front"){
			if(queue.empty()){
				cout << "No job for Ada?" << endl;
			}else{
				if(!aux){
					cout << queue.front() << endl;
					queue.pop_front();
				}
				else{
					cout << queue.back() << endl;
					queue.pop_back();
					
				}	
			}				
		}
		
		else if(p =="back"){
			if(queue.empty()){
				cout << "No job for Ada?" << endl;
			}else{
				if(aux){
					cout << queue.front() << endl;
					queue.pop_front();
				}else{
					cout << queue.back() << endl;
					queue.pop_back();
					
				}
			}
		}
		
	}
	
	return 0;
}