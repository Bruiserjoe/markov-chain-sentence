#include "stdafx.h"


int main1::loop1(){
	//parse space as new line
	lastword = textlines[0];
	attachedword.emplace_back(lastword);
	sort(textlines.begin(), textlines.end());
	frick = 0;
	//count words
	for (int b = 0; b <= lamo; b++) {
		ptrdiff_t countw = find(textlines.begin(), textlines.end(), textlines[b]) - textlines.begin();
		drownin = countw;
		
		att = textlines[b];
	
			
			if (att != lastword) {
				
				frick++;
				//std::cout << att << std::endl;
				attachedword.push_back(att);
			}
			genattached[frick]++;
			
			
			//std::cout << frick << std::endl;
			//std::cout << genattached[frick] << std::endl;
			lastword = textlines[b];
			//std::cout << att << std::endl;
	}
	
	attsize = attachedword.size() - 1;
	//std::cout << attachedword.size() << std::endl;
	int lastk = 1;
	for (int k = 1; k <= attsize; k++) {
		//std::cout << genattached[k] << std::endl;
		spawn = rand() % 10;
		if (genattached[lastk] == spawn) {
			
			std::cout << attachedword[k] << std::endl;
			
		}
		else if (genattached[lastk] < spawn) {
			
			std::cout << attachedword[lastk] << std::endl;
			
		}
		
		lastk = k;
	}



	//std::cout << textlines.size() << std::endl;
	
	std::cin.get();
	return 0;
}