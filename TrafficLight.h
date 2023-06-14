
// class header for TrafficLight

class TrafficLight 
{
   public:
        TrafficLight();
        void change();
        void printColor();
        void makeRed();
    private:
        int color;    // 0 is red, 1 is green, 2 is yellow
};
