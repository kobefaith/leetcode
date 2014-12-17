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
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
        int i=0;
        int j= intervals.size()-1;
        while(i<intervals.size()){
            if(newInterval.start > intervals[i].end){
                i++;
            }else{
                if(newInterval.start > intervals[i].start)
                    newInterval.start = intervals[i].start;
                break;
            }
        }
        while(j >=0){
            if(newInterval.end < intervals[j].start){
                j--;
            }else{
                if(newInterval.end <intervals[j].end)
                    newInterval.end =intervals[j].end;
                break;
            }
        }
        intervals.insert(intervals.begin()+i,newInterval);
        intervals.erase(intervals.begin()+i+1,intervals.begin()+j+2);
        return intervals;
    }
};