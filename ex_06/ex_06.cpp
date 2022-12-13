#include <iostream>
using namespace std;

class Box
{
	float width; //幅
	float heigth; //高さ
	float depth; //奥行

    public: Box(float width, float heigth, float depth)
    {
	        this->width = width;//幅
	        this->heigth = heigth;//高さ
	        this->depth = depth;//奥行
    }
    public: float GetSurface()//表面積
    {
	        return this->width * this->heigth * this->depth;
    }
    public: float GetVolume()//体積
    {
	        return (this->width * this->heigth + this->heigth * this->depth + this->depth * this->width) * 2;
    }
};

int main()
{
	float width; //幅
	float heigth; //高さ
	float depth; //奥行

	cout << "幅を入力してください:";
	cin >> width;
	cout << "高さを入力してください:";
	cin >> heigth;
	cout << "奥行を入力してください;";
	cin >> depth;

	Box* box = new Box(width, heigth, depth);
	cout << "表面積は" << box->GetSurface() << endl;
	cout << "体積は" << box->GetVolume() << endl;
	return 0;
}