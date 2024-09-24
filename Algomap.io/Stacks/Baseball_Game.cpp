class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> score;

        for(const string& op : operations){
            if(op == "+"){
                int top = score.top(); score.pop();
                int newTop = top + score.top();
                score.push(top);
                score.push(newTop);
            }else if(op == "D"){
                score.push(2 * score.top());
            }else if(op == "C"){
                score.pop();
            }else{
                score.push(stoi(op));
            }
        }

        int sum = 0;
        while(!score.empty()){
            sum += score.top(); 
            score.pop();
        }

        return sum;
    }
};
