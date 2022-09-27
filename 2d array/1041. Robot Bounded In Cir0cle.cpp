class Solution 
{
public:
    bool isRobotBounded(string instructions) 
    {
        int dirs[4][2] = {{1,0}, {0,1}, {-1,0}, {0,-1}};    //顺时针 上右下左
        int di = 0;                 //开始时向“上”
        int r = 0,  c = 0;          //原点，起点
        for (auto ins: instructions)
        {
            if (ins == 'G')         //沿着当前方向走1步
            {
                r += dirs[di][0];
                c += dirs[di][1];
            }
            else if (ins == 'L')    //左转==逆时针转90度
            {
                di = (di - 1 + 4) % 4;
            }
            else
            {                       //右转==顺时针转90度
                di = (di + 1) % 4;
            }
        }
        return ( (r==0 && c==0) || (di != 0) ); //回到原点，或者方向变了
    }
};[LeetCode] 1041. Robot Bounded In Circle
