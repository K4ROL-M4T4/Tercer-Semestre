#include <bits/stdc++.h>
using namespace std;

vector<int>get_prefix_count(string &s, char c){
    int n=s.size();
    vector<int>prefix_count(n+1);

    for(int i=1; i<=n; i++)
}

int main(){
    string adn;
    cin >> adn; //scanf("")
    int m;
    map<char, int> score = {
        {'A', 1},
        {'T', 2},
        {'G', 3},
        {'C', 4}
    };
    
    vector<int>prefix_sum_t=get_prefix_sum(adn, 'T');


    cin >> m;
    for(int i=0; i<m; ++i){
        int start, end;
        cin >> start>> end;
        
        map<char, int> freq={
                {'A', 0},
                {'T', 0},
                {'G', 0},
                {'C', 0}
        };
       //TODO: Resolver problema
       for(int c=start-1; c<=end-1; c++){
        char letter=adn[c];
        freq[letter]=freq[letter]+1;
       }

       

       for(auto &[letter, count]: freq){
            cout << letter << ' ' << count << '\n';
       }
       int anser;
       for(int t=0; t<4; ++t){
        int max_count=0;
        char max_count_letter='C';
        for(auto&[letter, count]: freq){
            if(count > max_count){
                max_count = count;
                max_count_letter = letter;
            } else if(count == max_count){
                if(score[letter] > score[max_count_letter]) {
                    max_count_letter=letter;
                }
            }
        }
       }
       anser += max_count_letter;
       freq.erase(max_count_letter);
       cout << answer << '\n'; 
    }return 0;
}