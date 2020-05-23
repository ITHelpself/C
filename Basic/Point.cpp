typedef struct Point{
    int x;
    int y;
};
void setPoint(Point *point, int x, int y);
void setX(Point *point, int x);
void setY(Point *point, int y);
int getX(Point *point);
int getY(Point *point);
int main(){
    Point *point = new Point();
    setPoint(point,3,4);
    return 0;
}
void setPoint(Point *point, int x, int y){
       point->x = x;
       point->y = y;
}
void setX(Point *point, int x){
       point->x = x;
}
void setY(Point *point, int y){
       point->y = y;
}