//扣掉最大, 扣掉最小, 再算平均
class Solution {
public:
    double average(vector<int>& salary) {
        int max = salary[0]; //要找最大值, 先拿最前面的那個人, 當預設值
        int min = salary[0]; //要找最小值, 先拿最前面的那個人, 當預設值
        double total = 0;
        for(int i=0; i<salary.size(); i++) {
            if(salary[i]>max) max = salary[i]; //筆最大還大? 最大值換人當
            if(salary[i]<min) min = salary[i]; //筆最小還小? 最小值換人當
            total += salary[i];
        }
        return(total - max - min) / (salary.size()-2);
    }
};