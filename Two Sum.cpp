class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> ret;
        if(numbers.size()==0) return ret;
        int n=numbers.size();
        map<int,int> mapping;
        for(int i=0;i<n;i++)
            mapping[numbers[i]]=i;
        for(int i=0;i<n;i++)
        {
            if(mapping.find(target-numbers[i])!=mapping.end())
            {
                if(i!=mapping[target-numbers[i]])
                {
                    ret.push_back(min(i,mapping[target-numbers[i]])+1);
                    ret.push_back(max(i,mapping[target-numbers[i]])+1);
                    break;
                }
            }
        }
        return ret;
    }
};
