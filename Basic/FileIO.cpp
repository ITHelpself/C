#include <stdio.h>
#include <stdlib.h>
void setPath(char *path);
bool existFile(char *path);
void setSizeFromFile(char *path, int &n);
void setArrayFromFile(char *path, int *a, int n);
void getArray(int *a, int n);
int main()
{
    int *a;
    int n = 0;
    char *path;
    setPath(path);
    setSizeFromFile(path, n);
    a = (int *)malloc(n * sizeof(int));
    setArrayFromFile(path, a, n);
    getArray(a, n);
    return 0;
}
void setPath(char *path)
{
    fflush(stdin);
    printf("Path: ");
    gets(path);
    printf("\n output: %s", path);
}
bool existFile(char *path)
{
    FILE *file;
    bool flag = true;
    file = fopen(path, "r");
    if (file == NULL)
    {
        flag = false;
    }
    fclose(file);
    return flag;
}
void setSizeFromFile(char *path, int &n)
{
    if (existFile(path))
    {
        FILE *file;
        float m = 0;
        char c;
        file = fopen(path, "r");
        fscanf(file, "%d", &n);
        printf("%d \n", n);
        fclose(file);
    }
    else
    {
        printf("File's not exist!");
    }
}
void setArrayFromFile(char *path, int *a, int n)
{
    if (n > 0)// co phan tu
    {
        FILE *file;
        int temp;
         file = fopen(path, "r");
        fscanf(file, "%d", &temp);
        for (int i = 0; i < n; i++)
        {   
            fscanf(file, "%d", &temp);
            *(a + i) = temp;
        }
    }
}
void getArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));
    }
}