using namespace std;
 
 
vector<vector<int>> convert( vector<vector<int>> a)
{
    vector<vector<int>> adjList(a.size());
    for (int i = 0; i < a.size(); i++)
    {
         
        for (int j = 0; j < a[i].size(); j++)
        {
            if (a[i][j] == 1)
            {
                adjList[i].push_back(j);
            }
        }
    }
    return adjList;
}
     
int main()
{
    vector<vector<int>> a;
    vector<int> p({0, 0, 1});
    vector<int> q({0, 0, 1});
    vector<int> r({1, 1, 0}); 
    a.push_back(p);
    a.push_back(q);
    a.push_back(r);
    vector<vector<int>> AdjList = convert(a);
    cout<<"Adjacency List:"<<endl;
     
    for (int i = 0; i < AdjList.size(); i++)
    {
        cout << i;
        for(int j = 0; j < AdjList[i].size(); j++)
        {
            if(j == AdjList[i].size() - 1)
            {
                cout << " -> " << AdjList[i][j] << endl;
                break;
            }
            else
                cout << " -> " << AdjList[i][j];
        }
    }
}
