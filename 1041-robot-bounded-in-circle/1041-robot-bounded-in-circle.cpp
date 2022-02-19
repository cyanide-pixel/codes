class Solution {
public:
    bool isRobotBounded(string instructions) {
        
        int x = 0;
        int y = 0;
        int dx = 0;
        int dy = 1;
        for(char c : instructions) {
            if(c == 'G') {
                x = x + dx;
                y = y + dy;
            }
            else if (c == 'L') {
                int temp = dy;
                dy = dx;
                dx = -temp;
            }
            else if (c == 'R') {
                int temp = dx;
                dx = dy;
                dy = -temp;
            }
        }
        return (x == 0 && y == 0) || dy != 1;
    }
};