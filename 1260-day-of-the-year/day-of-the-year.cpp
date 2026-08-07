class Solution {
public:
    int dayOfYear(string date) {
        int total = stoi(date.substr(8,2)) , months = stoi(date.substr(5,2)) ;
        cout << total << endl;
        int year = stoi(date.substr(0,4));
        if((year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) && months > 2) total++;
        cout << total << endl;
        for(int i=1 ; i<months ; i++){
            if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 31) total += 31;
            else if(i == 4 || i == 6 || i == 9 || i == 11) total += 30;
            else if(i == 2) total += 28;
        }
        return total;
    }
};