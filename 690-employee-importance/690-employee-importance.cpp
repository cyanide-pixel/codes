/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int dfs(vector<Employee*> emp, int id, vector<bool> &vis) {
        int tot_sum=0;
        for(auto m:emp) {
            if(id == m->id) 
            {
                tot_sum+=m->importance;
                for(auto k:m->subordinates) 
                    tot_sum+= dfs(emp, k, vis);
            }
        }
        return tot_sum;
    }
    int getImportance(vector<Employee*> employees, int id) {
        vector<bool> vis(2001, false);
        int sum = dfs(employees, id, vis);
        return sum;
    }
};