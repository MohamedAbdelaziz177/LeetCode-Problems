
using namespace std;
class BrowserHistory {
public:

    stack<string>history, forwardhistory;
    BrowserHistory(string homepage) {
        history.push(homepage);
    }
    
    void visit(string url) {

        while (!forwardhistory.empty()) {
            forwardhistory.pop();
        }
        history.push(url);
    }
    
    string back(int steps) {

        while(steps-- && history.size() > 1)
        {
            forwardhistory.push(history.top());
            history.pop();
        }

        return history.top();
    }
    
    string forward(int steps) {

        while(steps-- && forwardhistory.size() > 0)
        {
            history.push(forwardhistory.top());
            forwardhistory.pop();
        }

        return history.top();
       
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */