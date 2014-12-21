/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<Interval> merge(vector<Interval> &intervals) {
       int i=0,j;
    if(intervals.size() <=1)
        return intervals;
	vector<Interval> result	;
	while(i<intervals.size()){
		if(i == 0){
			result.push_back(intervals[0]);
		}else{
			j=0;
			while(j<result.size()){
				if(intervals[i].start > result[j].end)
					j++;
				else if(intervals[i].end < result[j].start){
					result.insert(result.begin()+j,intervals[i]);
					break;
				}else{
					intervals[i].start = min(intervals[i].start,result[j].start);
					intervals[i].end = max(intervals[i].end,result[j].end);
					result.erase(result.begin()+j);
				}
			}
			if(j == result.size())
				result.push_back(intervals[i]);
		}
		i++;
	}
	
    return result; 
    }
};