#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52, 0);
    
    for(const auto& ch : my_string){
        if(ch >= 'A' && ch <= 'Z') answer[ch - 'A']++;
        else answer[ch - 'a' + 26]++;
    }
    
    return answer;
}