#include <stdio.h>

#define MAX 10

int graph[MAX][MAX];
int color[MAX];
int n, m;

int isSafe(int v, int c)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(graph[v][i] && color[i] == c)
            return 0;
    }

    return 1;
}

int graphColoring(int v)
{
    int c;

    if(v == n)
        return 1;

    for(c = 1; c <= m; c++)
    {
        if(isSafe(v, c))
        {
            color[v] = c;

            if(graphColoring(v + 1))
                return 1;

            color[v] = 0;
        }
    }

    return 0;
}

int main()
{
    int i;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");

    for(i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    printf("Enter number of colors: ");
    scanf("%d", &m);

    if(graphColoring(0))
    {
        printf("Color Assignment:\n");

        for(i = 0; i < n; i++)
            printf("Vertex %d -> Color %d\n", i, color[i]);
    }
    else
    {
        printf("Solution not possible.\n");
    }

    return 0;
}
