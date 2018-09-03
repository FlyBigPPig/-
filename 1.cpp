void init_mine()//初始化两个雷阵
{
    int i = 0;
    int j = 0;
    for (int i = 0; i < row; i++) 
    {
        for (j = 0; j < col; j++)
        {
            show_mine[i][j] = '*';
            real_mine[i][j] = '0';
        }
    }
}