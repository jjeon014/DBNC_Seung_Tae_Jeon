#include <iostream>
#include <vector>
#include <map>
using std::vector;
using std::cout;
using std::endl;
using std::map;

map<int, char> finalMap = {    //this is the full table 
        {0,'C'},        
        {1,'7'},        
        {2,'x'},        
        {3,'i'},        
        {4,'c'},        
        {5,'P'},        
        {6,'M'},        
        {7,'G'},        
        {8,'v'},        
        {9,'z'},        
        {10,'A'},
        {11,'Z'},
        {12,'y'},
        {13,'T'},
        {14,'N'},
        {15,'o'},
        {16,'d'},
        {17,'m'},
        {18,'w'},
        {19,'n'},
        {20,'V'},
        {21,'5'},
        {22,'D'},
        {23,'3'},
        {24,'B'},
        {25,'6'},
        {26,'H'},
        {27,'0'},
        {28,'O'},
        {29,'u'},
        {30,'p'},
        {31,'8'},
        {32,'E'},
        {33,'2'},
        {34,'1'},
        {35,'W'},
        {36,'9'},
        {37,'s'},
        {38,'q'},
        {39,'L'},
        {40,'Q'},
        {41,'X'},
        {42,'4'},
        {43,'Y'},
        {44,'j'},
        {45,'S'},
        {46,'e'},
        {47,'U'},
        {48,'h'},
        {49,'I'},
        {50,'R'},
        {51,'J'},
        {52,'g'},
        {53,'a'},
        {54,'f'},
        {55,'F'},
        {56,'t'},
        {57,'r'},
        {58,'K'},
        {59,'l'},
        {60,'b'},
        {61,'k'}
};

vector<char>  mappingFunction(int input){

    vector<char> res;
    int quotient3844 = (input / 3844);
    auto it3 = finalMap.find(quotient3844);
    res.push_back(it3->second);

    int modQuotient62 = (input / 62) % 62;
    auto it2 = finalMap.find(modQuotient62);
    res.push_back(it2->second);

    int mod62 = input % 62;
    auto it1 = finalMap.find(mod62);
    res.push_back(it1->second);

    
    return res;
   
}

int main(){

    for(auto i : mappingFunction(30001)){
        cout << i;
    }
    cout << endl;

    for(auto i : mappingFunction(55555)){
        cout << i;
    }
    cout << endl;

    for(auto i : mappingFunction(77788)){
        cout << i;
    }
    cout << endl;


}
