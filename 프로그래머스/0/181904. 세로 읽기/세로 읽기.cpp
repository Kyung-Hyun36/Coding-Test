#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    int cnt = 0;
    
    for(const auto& ch : my_string){
        (cnt == m ? cnt = 1 : cnt++);
        if(cnt == c) answer += ch;
    }
    
    return answer;
}