#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

void generateExpressions(const string& expr, const vector<pair<int, int>>& brackets, vector<bool>& to_remove, int index, set<string>& results);

int main() {
    string expr;
    cin>>expr;

    vector<pair<int, int>> brackets;
    vector<int> stack;

    for(int i = 0; i < expr.size(); i++){
        if(expr[i] == '(') {
            stack.push_back(i);
        }else if(expr[i] == ')'){
            if(!stack.empty()){
                int open_pos = stack.back();
                stack.pop_back();
                brackets.push_back({open_pos, i});
            }
        }
    }

    set<string> results;
    vector<bool> to_remove(brackets.size(), false);  
    
    generateExpressions(expr, brackets, to_remove, 0, results);

    for(const string& res : results){
        if (res != expr){
            cout<<res<<endl;
        }
    }

    return 0;
}

void generateExpressions(const string& expr, const vector<pair<int, int>>& brackets, vector<bool>& to_remove, int index, set<string>& results){
    if(index == brackets.size()) {
        string new_expr;
        for(int i = 0; i < expr.length(); i++){
            bool skip = false;
            for(int j = 0; j < brackets.size(); j++) {
                if(to_remove[j] && (i == brackets[j].first || i == brackets[j].second)){
                    skip = true;
                    break;
                }
            }
            if(!skip){
                new_expr += expr[i];
            }
        }
        results.insert(new_expr);
        return;
    }

    to_remove[index] = false;
    generateExpressions(expr, brackets, to_remove, index + 1, results);

    to_remove[index] = true;
    generateExpressions(expr, brackets, to_remove, index + 1, results);
}
