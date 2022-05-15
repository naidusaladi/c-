//Breadth First Search algorithm :it is an iterative algorithm we can't use it recursively
//BFS-algo :it is mainly used to find the shortest path to reach a perticular node;

#include<bits/stdc++.h>
using namespace std;
bool vis[20];
vector<int>vt[20];
int level[20];
void bfs(int val)
{
    queue<int>q;//initilization of a queue;
    q.push(val);//pushing root node into the queue;
    vis[val]=true;//marking visited node as True;
    while(!q.empty())//checking queue is empty or not iteratively;
    {
        int front=q.front();//picking front element;
        q.pop();//removing front element from queue;
        cout<<front<<" ";//printing front element ;
        for(int x:vt[front])//for inserting child nodes of front into queue;
        {
            if(!vis[x])//checking whether the node is already visited or not
                      //we have only one node visited in each child that is parent of that node so we have to check for that,
                      //to avoid parent node
            {
              q.push(x);//pushing childs of front into queue
              vis[x]=true;//marking every child as visited because we alread put them into queue so to avoid them if they come again
                          //because they are treated as parents now,so they will be as childs for there childs so to avoid that ..
              level[x]=level[front]+1;//we did not printed level but if u want level you can print;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        vt[v1].push_back(v2);
        vt[v2].push_back(v1);
    }
    bfs(1);

}