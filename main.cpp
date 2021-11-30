#include<iostream>

int main()
{
	const int SIZE{5};
	int magicSquare[SIZE][SIZE]{};
	int value{ 1 };
	
	int x{ SIZE / 2 }, prevx{};
	int y{ 0 }, prevy{};

	magicSquare[y][x] = value;

	while(value <= SIZE * SIZE)
	{
		prevx = x;
		prevy = y;

		value++;
		y--;
		x++;

		if (y < 0)
		{
			y = SIZE - 1;
		}

		if (x >= SIZE)
		{
			x = 0;
		}

		if (magicSquare[y][x] != 0)
		{
			x = prevx;
			y = prevy;
			y++;
		}

		magicSquare[y][x] = value;
	}

	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = 0; j < SIZE; ++j)
		{
			std::cout.width(2);
			std::cout << magicSquare[i][j] << ' ';
		}
		std::cout << std::endl;
	}
}

//짝수 마방진에서는 사용불가. 가운데가 없음