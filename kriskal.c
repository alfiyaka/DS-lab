#include<stdio.h>
#include<stdlib.h>
 int i,j,k,u,v,ru,rv,n,ne=1;
 int min,mincost=0,cost[9][9],parent[9];
 int find(int  u)
 {
 while(parent[u])
 u=parent[u];
 return u;
 }
 
