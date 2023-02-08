vector<string> bomberMan(int n, vector<string> grid) {
    int r = grid.size();
    int c = grid[0].size();
    vector<string> map1=grid;
    vector<string> map2; 
    vector<string> map3;

    for (int i=0;i<r;i++)
        for (int j=0;j<c;j++)
            map1[i][j]='O';
            map2=map3=map1;
            
            
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(grid[i][j]=='O')
            {
                if (i>0)    map2[i-1][j]='.';
                if (i<r-1)  map2[i+1][j]='.';
                if (j>0)    map2[i][j-1]='.';
                if (j<c-1)  map2[i][j+1]='.';
                map2[i][j]='.';
            }
            
            
    for (int i=0;i<r;i++)
        for (int j=0;j<c;j++)
            if (map2[i][j]=='O')
            {
                if (i>0)    map3[i-1][j]='.';
                if (i<r-1)  map3[i+1][j]='.';
                if (j>0)    map3[i][j-1]='.';
                if (j<c-1)  map3[i][j+1]='.';
                map3[i][j]='.';
            }
            
            
    if (n%2==0) return map1;
    if (n==1) return grid;
    if (n%4==3) return map2;
    return map3;
}
