#include <iostream>
#include <vector>

using namespace std;
unsigned int warOfNumbers(vector<int>lst){
	vector<int>::iterator ptr;
    int evenSum = 0, oddSum = 0;
	for (ptr = lst.begin(); ptr != lst.end(); ptr++){
		if(*ptr % 2 == 0){
			evenSum += *ptr;
		}else{
			oddSum += *ptr;
		}
	}
    return abs(evenSum - oddSum);
};

int main(){
    vector<int> lst = {5, 9, 45, 6, 2, 7, 34, 8, 6, 90, 5, 243};

    cout << warOfNumbers(lst);

    return 0;
}

// biggest issue for this problem was that I did not initialize my int variables, by not initializing my int variables I was += it's address with *ptr dereferenced value
// which probably resulted in some weird addressing logic.
// In this problem I learned a little bit about how to iterate through a vector using an iterator, * symbol means to dereference and will give the address' value.
// ptr = lst.begin(); ptr != lst.end(); ptr++ is exactly like a for (int i = 0; i < lst.size(); i++)