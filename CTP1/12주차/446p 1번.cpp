class Rectangle : public Point {
    int width, height; 

public:

    Rectangle(int xx, int yy, int w, int h) : Point(xx, yy), width(w), height(h) {}

    void draw() {
        std::cout << x << "," << y << "에 가로 " << width << " 세로 " << height << "인 사각형을 그려라.\n";
    }
};
