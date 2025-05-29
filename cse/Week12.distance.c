#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Point;

double calculate_distance(Point p1, Point p2) {

    double dx = (double)p1.x - p2.x;
    double dy = (double)p1.y - p2.y;

    return sqrt(pow(dx, 2) + pow(dy, 2));
}

int main() {
    
    int N = 0;
    scanf("%d", &N);

    if (N < 2 || N > 100) {
        return 1; 
    }

    Point points[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &points[i].x, &points[i].y);
    }

    double max_distance = 0.0;
    Point point1, point2; 

    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            double current_distance = calculate_distance(points[i], points[j]);
            if (current_distance > max_distance) {
                max_distance = current_distance;
                point1 = points[i];
                point2 = points[j];
            }
        }
    }

    printf("%d %d\n", point1.x, point1.y);

    printf("%d %d\n", point2.x, point2.y);
 
    printf("%.2lf\n", max_distance);

    return 0;
}
