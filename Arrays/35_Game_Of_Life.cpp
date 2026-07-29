/* if(board[i-1][j-1]==0)|| board[i-1][j]==0 || board[i-1][j+1]==0 || board[i][j-1]==0 ||
 board[i][j+1]==0 || board[i+1][j-1]==0 || board[i+1][j]==0 || board[i+1][j+1] == 0 */

 
 
 /* WRONG FIRST SOLN
 class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) 
    {
        int count1,count0;
        int i,j,k,q;
        int m = board.size();
        int n = board[0].size();
        for(i=0;i<m;i++)
        {
            count1 = 0; // SHOULD BE INSIDE THE J LOOP
            count0 = 0;
            for(j=0;j<n;j++)
            {
                if(board[i-1][j-1]==1 || board[i-1][j-1]==0) // NO NEED 
                {
                    for(k=i-1;k<i+1;k++) // EQUAL SIGN IN CONDITION SHOULD BE INCLUDED 
                    {
                        for(q=j-1;q<j+1;q++)
                        {
                        if(board[k][q] == 0) // ONE MORE CONDN NEED TO BE CHECKED IF K AND Q ARE WITHIN BOUNDS
                          count0++;
                         else if(board[k][q] == 1)
                          count1++;
                        }
                    }
                 }
            }
            if (board[i-1][j-1]==1) //SHOULD BE INSIDE THE J LOOP
            {
                if(count1<2)
                    {
                        board[i-1][j-1]=0;
                    }
                 else if(count1>3)
                    {
                        board[i-1][j-1]=0;
                    }
            }
            else if (board[i-1][j-1]==0)
            {
                if (count0 == 3)
                board[i-1][j-1]=1;
            }
   // MAKE A NEW VECTOR AND STORE THE VALUES IN IT AND THEN COPY IT BACK TO BOARD

    }
};
*/

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) 
    {
        int count1,count0;
        int i,j,k,q;
        vector<vector<int>> answer;
        answer = board;
        int m = board.size();
        int n = board[0].size();
        for(i=0;i<m;i++) 
        {
            for(j=0;j<n;j++)
            {
                count1=0; // rows mei nhi ayega uh
                count0=0;
                    for(k=i-1;k<=i+1;k++) // if k=i compare it with i only and see <= its equal
                    {
                        for(q=j-1;q<=j+1;q++) // equal sign
                        {
                            if(k < 0 || k >= m || q < 0 || q >= n)
                            continue;

                            if(k==i && q==j)
                            continue;

                            if(board[k][q] == 0)
                                count0++;
                            else
                                count1++;
                        }
                    }
                if (board[i][j]==1)
                    {
                        if(count1<2)
                         {
                            answer[i][j]=0;
                         }
                        else if(count1>3)
                         {
                            answer[i][j]=0;
                         }
                    }
                else if (board[i][j]==0)
                    {
                         if (count1 == 3)
                         answer[i][j]=1;
                    }   
            }     
        }
    board = answer;
    }
};
