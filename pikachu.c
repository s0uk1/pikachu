#include <mlx.h>


typedef struct s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
} t_data;

void	my_mlx_put_pixel(t_data *data, int x, int y, int color)
{
	char	*dst;
	y *= 6;
	x *= 6;
	y += 4;
	x += 4;
	dst = data->addr + (y * data->line_length  + x  * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}
void print_bg(t_data *data,int x, int y)
{
	
	while(y < 29)
	{
		while(x <= 44)
		{
			my_mlx_put_pixel(data, x, y , 0xffffff);
						x++;
		}
		x = 0;
		y++;
	}
}

int main()
{
	void 	*mlx;
	t_data 	img;
	void 	*mlx_win;
	int 	i;
	int 	j;
	unsigned int white;
	unsigned int black;
	unsigned int yellow;
	unsigned int red;
	unsigned int pink;
	black = 0x000000;
	white = 0xffffff;
	yellow = 0xeef10a;
	red = 0xfc0000;
	pink = 0xe955d5;


	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx,270, 180, "pika!");
	img.img = mlx_new_image(mlx, 270, 180);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel,
			&img.line_length, &img.endian);
	i = 0;
	j = 0;	
	print_bg(&img,i,j);

	my_mlx_put_pixel(&img, 9, 3,black);
	my_mlx_put_pixel(&img, 10, 3,black);
	my_mlx_put_pixel(&img, 9, 4,black);
	my_mlx_put_pixel(&img, 9, 5,black);
	my_mlx_put_pixel(&img, 9, 6,black);
	my_mlx_put_pixel(&img, 10, 4,black);
	my_mlx_put_pixel(&img, 10, 5,black);
	my_mlx_put_pixel(&img, 10, 6,black);
	my_mlx_put_pixel(&img, 10, 7,black);
	my_mlx_put_pixel(&img, 10, 8,black);
	my_mlx_put_pixel(&img, 11, 4,black);
	my_mlx_put_pixel(&img, 11, 5,black);
	my_mlx_put_pixel(&img, 11, 6,black);
	my_mlx_put_pixel(&img, 11, 7,black);
	my_mlx_put_pixel(&img, 11, 8,black);
	my_mlx_put_pixel(&img, 11, 9,black);
	my_mlx_put_pixel(&img, 11, 10,black);
	my_mlx_put_pixel(&img, 12, 4,black);
	my_mlx_put_pixel(&img, 12, 11,black);
	my_mlx_put_pixel(&img, 13, 5,black);
	my_mlx_put_pixel(&img, 13, 12,black);
	my_mlx_put_pixel(&img, 14, 6,black);
	my_mlx_put_pixel(&img, 15, 6,black);
	my_mlx_put_pixel(&img, 14, 13,black);
	my_mlx_put_pixel(&img, 14, 14,black);
	my_mlx_put_pixel(&img, 15, 12,black);
	my_mlx_put_pixel(&img, 16, 7,black);
	my_mlx_put_pixel(&img, 13, 15,black);
	my_mlx_put_pixel(&img, 13, 16,black);
	my_mlx_put_pixel(&img, 13, 17,black);
	my_mlx_put_pixel(&img, 13, 18,black);
	my_mlx_put_pixel(&img, 12, 19,black);
	my_mlx_put_pixel(&img, 12, 20,black);
	my_mlx_put_pixel(&img, 12, 21,black);
	my_mlx_put_pixel(&img, 17, 8,black);
	my_mlx_put_pixel(&img, 18, 8,black);
	my_mlx_put_pixel(&img, 19, 9,black);
	my_mlx_put_pixel(&img, 20, 9,black);
	my_mlx_put_pixel(&img, 21, 8,black);
	my_mlx_put_pixel(&img, 22, 8,black);
	my_mlx_put_pixel(&img, 23, 8,black);
	my_mlx_put_pixel(&img, 24, 8,black);
	my_mlx_put_pixel(&img, 25, 9,black);
	my_mlx_put_pixel(&img, 26, 9,black);
	my_mlx_put_pixel(&img, 27, 8,black);
	my_mlx_put_pixel(&img, 28, 8,black);
	my_mlx_put_pixel(&img, 29, 7,black);
	my_mlx_put_pixel(&img, 30, 6,black);
	my_mlx_put_pixel(&img, 31, 6,black);
	my_mlx_put_pixel(&img, 32, 5,black);
	my_mlx_put_pixel(&img, 33, 4,black);
	my_mlx_put_pixel(&img, 34, 4,black);
	my_mlx_put_pixel(&img, 35, 3,black);
	my_mlx_put_pixel(&img, 34, 5,black);
	my_mlx_put_pixel(&img, 34, 6,black);
	my_mlx_put_pixel(&img, 34, 7,black);
	my_mlx_put_pixel(&img, 34, 8,black);
	my_mlx_put_pixel(&img, 34, 9,black);
	my_mlx_put_pixel(&img, 34, 10,black);
	my_mlx_put_pixel(&img, 35, 4,black);
	my_mlx_put_pixel(&img, 35, 5,black);
	my_mlx_put_pixel(&img, 35, 6,black);
	my_mlx_put_pixel(&img, 35, 8,black);
	my_mlx_put_pixel(&img, 36, 3,black);
	my_mlx_put_pixel(&img, 36, 4,black);
	my_mlx_put_pixel(&img, 36, 6,black);
	my_mlx_put_pixel(&img, 33, 11,black);
	my_mlx_put_pixel(&img, 32, 12,black);
	my_mlx_put_pixel(&img, 31, 13,black);
	my_mlx_put_pixel(&img, 31, 14,black);
	my_mlx_put_pixel(&img, 30, 12,black);
	my_mlx_put_pixel(&img, 32, 15,black);
	my_mlx_put_pixel(&img, 32, 16,black);
	my_mlx_put_pixel(&img, 32, 17,black);
	my_mlx_put_pixel(&img, 32, 18,black);
	my_mlx_put_pixel(&img, 33, 19,black);
	my_mlx_put_pixel(&img, 33, 20,black);
	my_mlx_put_pixel(&img, 33, 21,black);
	my_mlx_put_pixel(&img, 32, 22,black);
	my_mlx_put_pixel(&img, 31, 23,black);
	my_mlx_put_pixel(&img, 30, 24,black);
	my_mlx_put_pixel(&img, 29, 24,black);
	my_mlx_put_pixel(&img, 28, 25,black);
	my_mlx_put_pixel(&img, 27, 25,black);
	my_mlx_put_pixel(&img, 26, 25,black);
	my_mlx_put_pixel(&img, 25, 26,black);
	my_mlx_put_pixel(&img, 24, 26,black);
	my_mlx_put_pixel(&img, 23, 26,black);
	my_mlx_put_pixel(&img, 22, 26,black);
	my_mlx_put_pixel(&img, 21, 26,black);
	my_mlx_put_pixel(&img, 20, 26,black);
	my_mlx_put_pixel(&img, 19, 25,black);
	my_mlx_put_pixel(&img, 18, 25,black);
	my_mlx_put_pixel(&img, 17, 25,black);
	my_mlx_put_pixel(&img, 16, 24,black);
	my_mlx_put_pixel(&img, 15, 24,black);
	my_mlx_put_pixel(&img, 14, 23,black);
	my_mlx_put_pixel(&img, 13, 22,black);
	my_mlx_put_pixel(&img, 12, 21,black);
	my_mlx_put_pixel(&img, 12, 20,black);
	my_mlx_put_pixel(&img, 12, 19,black);
	my_mlx_put_pixel(&img, 12, 18,black);
	my_mlx_put_pixel(&img, 12, 5,yellow);
	my_mlx_put_pixel(&img, 12, 6,yellow);
	my_mlx_put_pixel(&img, 12, 7,yellow);
	my_mlx_put_pixel(&img, 12, 8,yellow);
	my_mlx_put_pixel(&img, 12, 9,yellow);
	my_mlx_put_pixel(&img, 12, 10,yellow);
	my_mlx_put_pixel(&img, 13, 6,yellow);
	my_mlx_put_pixel(&img, 13, 7,yellow);
	my_mlx_put_pixel(&img, 13, 8,yellow);
	my_mlx_put_pixel(&img, 13, 9,yellow);
	my_mlx_put_pixel(&img, 13, 10,yellow);
	my_mlx_put_pixel(&img, 13, 11,yellow);
	my_mlx_put_pixel(&img, 14, 7,yellow);
	my_mlx_put_pixel(&img, 14, 8,yellow);
	my_mlx_put_pixel(&img, 14, 9,yellow);
	my_mlx_put_pixel(&img, 14, 10,yellow);
	my_mlx_put_pixel(&img, 14, 11,yellow);
	my_mlx_put_pixel(&img, 14, 12,yellow);
	my_mlx_put_pixel(&img, 15, 7,yellow);
	my_mlx_put_pixel(&img, 15, 8,yellow);
	my_mlx_put_pixel(&img, 15, 9,yellow);
	my_mlx_put_pixel(&img, 15, 10,yellow);
	my_mlx_put_pixel(&img, 15, 11,yellow);
	my_mlx_put_pixel(&img, 16, 8,yellow);
	my_mlx_put_pixel(&img, 16, 9,yellow);
	my_mlx_put_pixel(&img, 16, 10,yellow);
	my_mlx_put_pixel(&img, 16, 11,yellow);
	my_mlx_put_pixel(&img, 16, 12,yellow);
	my_mlx_put_pixel(&img, 16, 13,yellow);
	my_mlx_put_pixel(&img, 16, 14,yellow);
	my_mlx_put_pixel(&img, 16, 15,yellow);
	my_mlx_put_pixel(&img, 16, 18,yellow);
	my_mlx_put_pixel(&img, 16, 23,yellow);
	my_mlx_put_pixel(&img, 15, 13,yellow);
	my_mlx_put_pixel(&img, 15, 14,yellow);
	my_mlx_put_pixel(&img, 15, 15,yellow);
	my_mlx_put_pixel(&img, 15, 16,yellow);
	my_mlx_put_pixel(&img, 15, 17,yellow);
	my_mlx_put_pixel(&img, 15, 18,yellow);
	my_mlx_put_pixel(&img, 15, 23,yellow);
	my_mlx_put_pixel(&img, 14, 15,yellow);
	my_mlx_put_pixel(&img, 14, 16,yellow);
	my_mlx_put_pixel(&img, 14, 17,yellow);
	my_mlx_put_pixel(&img, 14, 18,yellow);
	my_mlx_put_pixel(&img, 13, 19,yellow);
	my_mlx_put_pixel(&img, 13, 20,yellow);
	my_mlx_put_pixel(&img, 13, 21,yellow);
	my_mlx_put_pixel(&img, 17, 9,yellow);
	my_mlx_put_pixel(&img, 17, 10,yellow);
	my_mlx_put_pixel(&img, 17, 11,yellow);
	my_mlx_put_pixel(&img, 17, 12,yellow);
	my_mlx_put_pixel(&img, 17, 13,yellow);
	my_mlx_put_pixel(&img, 17, 14,yellow);
	my_mlx_put_pixel(&img, 17, 19,yellow);
	my_mlx_put_pixel(&img, 17, 22,yellow);
	my_mlx_put_pixel(&img, 17, 23,yellow);
	my_mlx_put_pixel(&img, 17, 24,yellow);
	my_mlx_put_pixel(&img, 18, 9,yellow);
	my_mlx_put_pixel(&img, 18, 10,yellow);
	my_mlx_put_pixel(&img, 18, 11,yellow);
	my_mlx_put_pixel(&img, 18, 12,yellow);
	my_mlx_put_pixel(&img, 18, 13,yellow);
	my_mlx_put_pixel(&img, 18, 14,yellow);
	my_mlx_put_pixel(&img, 18, 19,yellow);
	my_mlx_put_pixel(&img, 18, 20,yellow);
	my_mlx_put_pixel(&img, 18, 21,yellow);
	my_mlx_put_pixel(&img, 18, 22,yellow);
	my_mlx_put_pixel(&img, 18, 23,yellow);
	my_mlx_put_pixel(&img, 18, 24,yellow);
	my_mlx_put_pixel(&img, 19, 10,yellow);
	my_mlx_put_pixel(&img, 19, 11,yellow);
	my_mlx_put_pixel(&img, 19, 12,yellow);
	my_mlx_put_pixel(&img, 19, 13,yellow);
	my_mlx_put_pixel(&img, 19, 14,yellow);
	my_mlx_put_pixel(&img, 19, 15,yellow);
	my_mlx_put_pixel(&img, 19, 18,yellow);
	my_mlx_put_pixel(&img, 19, 19,yellow);
	my_mlx_put_pixel(&img, 19, 20,yellow);
	my_mlx_put_pixel(&img, 19, 21,yellow);
	my_mlx_put_pixel(&img, 19, 22,yellow);
	my_mlx_put_pixel(&img, 19, 23,yellow);
	my_mlx_put_pixel(&img, 19, 24,yellow);
	my_mlx_put_pixel(&img, 20, 10,yellow);
	my_mlx_put_pixel(&img, 20, 11,yellow);
	my_mlx_put_pixel(&img, 20, 12,yellow);
	my_mlx_put_pixel(&img, 20, 13,yellow);
	my_mlx_put_pixel(&img, 20, 14,yellow);
	my_mlx_put_pixel(&img, 20, 15,yellow);
	my_mlx_put_pixel(&img, 20, 16,yellow);
	my_mlx_put_pixel(&img, 20, 17,yellow);
	my_mlx_put_pixel(&img, 20, 18,yellow);
	my_mlx_put_pixel(&img, 20, 19,yellow);
	my_mlx_put_pixel(&img, 20, 21,yellow);
	my_mlx_put_pixel(&img, 20, 22,yellow);
	my_mlx_put_pixel(&img, 20, 23,yellow);
	my_mlx_put_pixel(&img, 20, 24,yellow);
	my_mlx_put_pixel(&img, 21, 9,yellow);
	my_mlx_put_pixel(&img, 21, 10,yellow);
	my_mlx_put_pixel(&img, 21, 11,yellow);
	my_mlx_put_pixel(&img, 21, 12,yellow);
	my_mlx_put_pixel(&img, 21, 13,yellow);
	my_mlx_put_pixel(&img, 21, 14,yellow);
	my_mlx_put_pixel(&img, 21, 15,yellow);
	my_mlx_put_pixel(&img, 21, 16,yellow);
	my_mlx_put_pixel(&img, 21, 17,yellow);
	my_mlx_put_pixel(&img, 21, 18,yellow);
	my_mlx_put_pixel(&img, 21, 19,yellow);
	my_mlx_put_pixel(&img, 21, 24,yellow);
	my_mlx_put_pixel(&img, 21, 25,yellow);
	my_mlx_put_pixel(&img, 22, 9,yellow);
	my_mlx_put_pixel(&img, 22, 10,yellow);
	my_mlx_put_pixel(&img, 22, 11,yellow);
	my_mlx_put_pixel(&img, 22, 12,yellow);
	my_mlx_put_pixel(&img, 22, 13,yellow);
	my_mlx_put_pixel(&img, 22, 14,yellow);
	my_mlx_put_pixel(&img, 22, 15,yellow);
	my_mlx_put_pixel(&img, 22, 16,yellow);
	my_mlx_put_pixel(&img, 22, 17,yellow);
	my_mlx_put_pixel(&img, 22, 19,yellow);
	my_mlx_put_pixel(&img, 22, 25,yellow);
	my_mlx_put_pixel(&img, 23, 9,yellow);
	my_mlx_put_pixel(&img, 23, 10,yellow);
	my_mlx_put_pixel(&img, 23, 11,yellow);
	my_mlx_put_pixel(&img, 23, 12,yellow);
	my_mlx_put_pixel(&img, 23, 13,yellow);
	my_mlx_put_pixel(&img, 23, 14,yellow);
	my_mlx_put_pixel(&img, 23, 15,yellow);
	my_mlx_put_pixel(&img, 23, 16,yellow);
	my_mlx_put_pixel(&img, 23, 17,yellow);
	my_mlx_put_pixel(&img, 23, 19,yellow);
	my_mlx_put_pixel(&img, 23, 25,yellow);
	my_mlx_put_pixel(&img, 24, 9,yellow);
	my_mlx_put_pixel(&img, 24, 10,yellow);
	my_mlx_put_pixel(&img, 24, 11,yellow);
	my_mlx_put_pixel(&img, 24, 12,yellow);
	my_mlx_put_pixel(&img, 24, 13,yellow);
	my_mlx_put_pixel(&img, 24, 14,yellow);
	my_mlx_put_pixel(&img, 24, 15,yellow);
	my_mlx_put_pixel(&img, 24, 16,yellow);
	my_mlx_put_pixel(&img, 24, 17,yellow);
	my_mlx_put_pixel(&img, 24, 18,yellow);
	my_mlx_put_pixel(&img, 24, 19,yellow);
	my_mlx_put_pixel(&img, 24, 20,yellow);
	my_mlx_put_pixel(&img, 24, 24,yellow);
	my_mlx_put_pixel(&img, 24, 25,yellow);
	my_mlx_put_pixel(&img, 25, 10,yellow);
	my_mlx_put_pixel(&img, 25, 11,yellow);
	my_mlx_put_pixel(&img, 25, 12,yellow);
	my_mlx_put_pixel(&img, 25, 13,yellow);
	my_mlx_put_pixel(&img, 25, 14,yellow);
	my_mlx_put_pixel(&img, 25, 15,yellow);
	my_mlx_put_pixel(&img, 25, 16,yellow);
	my_mlx_put_pixel(&img, 25, 17,yellow);
	my_mlx_put_pixel(&img, 25, 18,yellow);
	my_mlx_put_pixel(&img, 25, 19,yellow);
	my_mlx_put_pixel(&img, 25, 21,yellow);
	my_mlx_put_pixel(&img, 25, 22,yellow);
	my_mlx_put_pixel(&img, 25, 23,yellow);
	my_mlx_put_pixel(&img, 25, 24,yellow);
	my_mlx_put_pixel(&img, 25, 25,yellow);
	my_mlx_put_pixel(&img, 26, 10,yellow);
	my_mlx_put_pixel(&img, 26, 11,yellow);
	my_mlx_put_pixel(&img, 26, 12,yellow);
	my_mlx_put_pixel(&img, 26, 12,yellow);
	my_mlx_put_pixel(&img, 26, 13,yellow);
	my_mlx_put_pixel(&img, 26, 14,yellow);
	my_mlx_put_pixel(&img, 26, 15,yellow);
	my_mlx_put_pixel(&img, 26, 18,yellow);
	my_mlx_put_pixel(&img, 26, 19,yellow);
	my_mlx_put_pixel(&img, 26, 20,yellow);
	my_mlx_put_pixel(&img, 26, 21,yellow);
	my_mlx_put_pixel(&img, 26, 22,yellow);
	my_mlx_put_pixel(&img, 26, 23,yellow);
	my_mlx_put_pixel(&img, 26, 24,yellow);
	my_mlx_put_pixel(&img, 27, 9,yellow);
	my_mlx_put_pixel(&img, 27, 10,yellow);
	my_mlx_put_pixel(&img, 27, 11,yellow);
	my_mlx_put_pixel(&img, 27, 12,yellow);
	my_mlx_put_pixel(&img, 27, 13,yellow);
	my_mlx_put_pixel(&img, 27, 14,yellow);
	my_mlx_put_pixel(&img, 27, 19,yellow);
	my_mlx_put_pixel(&img, 27, 20,yellow);
	my_mlx_put_pixel(&img, 27, 21,yellow);
	my_mlx_put_pixel(&img, 27, 22,yellow);
	my_mlx_put_pixel(&img, 27, 23,yellow);
	my_mlx_put_pixel(&img, 27, 24,yellow);
	my_mlx_put_pixel(&img, 28, 9,yellow);
	my_mlx_put_pixel(&img, 28, 10,yellow);
	my_mlx_put_pixel(&img, 28, 11,yellow);
	my_mlx_put_pixel(&img, 28, 12,yellow);
	my_mlx_put_pixel(&img, 28, 13,yellow);
	my_mlx_put_pixel(&img, 28, 14,yellow);
	my_mlx_put_pixel(&img, 28, 19,yellow);
	my_mlx_put_pixel(&img, 28, 22,yellow);
	my_mlx_put_pixel(&img, 28, 23,yellow);
	my_mlx_put_pixel(&img, 28, 24,yellow);
	my_mlx_put_pixel(&img, 29, 8,yellow);
	my_mlx_put_pixel(&img, 29, 9,yellow);
	my_mlx_put_pixel(&img, 29, 10,yellow);
	my_mlx_put_pixel(&img, 29, 11,yellow);
	my_mlx_put_pixel(&img, 29, 12,yellow);
	my_mlx_put_pixel(&img, 29, 13,yellow);
	my_mlx_put_pixel(&img, 29, 14,yellow);
	my_mlx_put_pixel(&img, 29, 15,yellow);
	my_mlx_put_pixel(&img, 29, 18,yellow);
	my_mlx_put_pixel(&img, 29, 23,yellow);
	my_mlx_put_pixel(&img, 30, 7,yellow);
	my_mlx_put_pixel(&img, 30, 8,yellow);
	my_mlx_put_pixel(&img, 30, 9,yellow);
	my_mlx_put_pixel(&img, 30, 10,yellow);
	my_mlx_put_pixel(&img, 30, 11,yellow);
	my_mlx_put_pixel(&img, 30, 13,yellow);
	my_mlx_put_pixel(&img, 30, 14,yellow);
	my_mlx_put_pixel(&img, 30, 15,yellow);
	my_mlx_put_pixel(&img, 30, 16,yellow);
	my_mlx_put_pixel(&img, 30, 17,yellow);
	my_mlx_put_pixel(&img, 30, 18,yellow);
	my_mlx_put_pixel(&img, 30, 23,yellow);
	my_mlx_put_pixel(&img, 31, 8,yellow);
	my_mlx_put_pixel(&img, 31, 9,yellow);
	my_mlx_put_pixel(&img, 31, 10,yellow);
	my_mlx_put_pixel(&img, 31, 11,yellow);
	my_mlx_put_pixel(&img, 31, 12,yellow);
	my_mlx_put_pixel(&img, 31, 15,yellow);
	my_mlx_put_pixel(&img, 31, 16,yellow);
	my_mlx_put_pixel(&img, 31, 17,yellow);
	my_mlx_put_pixel(&img, 31, 18,yellow);
	my_mlx_put_pixel(&img, 31, 19,yellow);
	my_mlx_put_pixel(&img, 31, 22,yellow);
	my_mlx_put_pixel(&img, 32, 6,yellow);
	my_mlx_put_pixel(&img, 32, 7,yellow);
	my_mlx_put_pixel(&img, 32, 8,yellow);
	my_mlx_put_pixel(&img, 32, 9,yellow);
	my_mlx_put_pixel(&img, 32, 10,yellow);
	my_mlx_put_pixel(&img, 32, 11,yellow);
	my_mlx_put_pixel(&img, 32, 19,yellow);
	my_mlx_put_pixel(&img, 32, 20,yellow);
	my_mlx_put_pixel(&img, 32, 21,yellow);
	my_mlx_put_pixel(&img, 33, 5,yellow);
	my_mlx_put_pixel(&img, 33, 6,yellow);
	my_mlx_put_pixel(&img, 33, 7,yellow);
	my_mlx_put_pixel(&img, 33, 8,yellow);
	my_mlx_put_pixel(&img, 33, 9,yellow);
	my_mlx_put_pixel(&img, 33, 10,yellow);
	my_mlx_put_pixel(&img, 33, 11,yellow);
	my_mlx_put_pixel(&img, 15, 19,red);
	my_mlx_put_pixel(&img, 16, 19,red);
	my_mlx_put_pixel(&img, 14, 20,red);
	my_mlx_put_pixel(&img, 15, 20,red);
	my_mlx_put_pixel(&img, 16, 20,red);
	my_mlx_put_pixel(&img, 17, 20,red);
	my_mlx_put_pixel(&img, 14, 21,red);
	my_mlx_put_pixel(&img, 15, 21,red);
	my_mlx_put_pixel(&img, 16, 21,red);
	my_mlx_put_pixel(&img, 17, 21,red);
	my_mlx_put_pixel(&img, 15, 22,red);
	my_mlx_put_pixel(&img, 16, 22,red);
	my_mlx_put_pixel(&img, 22, 22,red);
	my_mlx_put_pixel(&img, 23, 22,red);
	my_mlx_put_pixel(&img, 22, 23,red);
	my_mlx_put_pixel(&img, 23, 23,red);
	my_mlx_put_pixel(&img, 29, 19,red);
	my_mlx_put_pixel(&img, 30, 19,red);
	my_mlx_put_pixel(&img, 28, 20,red);
	my_mlx_put_pixel(&img, 29, 20,red);
	my_mlx_put_pixel(&img, 30, 20,red);
	my_mlx_put_pixel(&img, 31, 20,red);
	my_mlx_put_pixel(&img, 28, 21,red);
	my_mlx_put_pixel(&img, 29, 21,red);
	my_mlx_put_pixel(&img, 30, 21,red);
	my_mlx_put_pixel(&img, 31, 21,red);
	my_mlx_put_pixel(&img, 29, 22,red);
	my_mlx_put_pixel(&img, 30, 22,red);
	my_mlx_put_pixel(&img, 17, 15,black);
	my_mlx_put_pixel(&img, 18, 15,black);
	my_mlx_put_pixel(&img, 16, 16,black);
	my_mlx_put_pixel(&img, 18, 16,black);
	my_mlx_put_pixel(&img, 19, 16,black);
	my_mlx_put_pixel(&img, 16, 17,black);
	my_mlx_put_pixel(&img, 17, 17,black);
	my_mlx_put_pixel(&img, 18, 17,black);
	my_mlx_put_pixel(&img, 19, 17,black);
	my_mlx_put_pixel(&img, 17, 18,black);
	my_mlx_put_pixel(&img, 18, 18,black);
	my_mlx_put_pixel(&img, 22, 18,black);
	my_mlx_put_pixel(&img, 23, 18,black);
	my_mlx_put_pixel(&img, 22, 20,black);
	my_mlx_put_pixel(&img, 23, 20,black);
	my_mlx_put_pixel(&img, 20, 20,black);
	my_mlx_put_pixel(&img, 25, 20,black);
	my_mlx_put_pixel(&img, 21, 21,black);
	my_mlx_put_pixel(&img, 22, 21,black);
	my_mlx_put_pixel(&img, 23, 21,black);
	my_mlx_put_pixel(&img, 24, 21,black);
	my_mlx_put_pixel(&img, 21, 22,black);
	my_mlx_put_pixel(&img, 24, 22,black);
	my_mlx_put_pixel(&img, 21, 23,black);
	my_mlx_put_pixel(&img, 21, 24,black);
	my_mlx_put_pixel(&img, 24, 23,black);
	my_mlx_put_pixel(&img, 24, 24,black);
	my_mlx_put_pixel(&img, 22, 24,black);
	my_mlx_put_pixel(&img, 23, 24,black);
	my_mlx_put_pixel(&img, 27, 15,black);
	my_mlx_put_pixel(&img, 28, 15,black);
	my_mlx_put_pixel(&img, 26, 16,black);
	my_mlx_put_pixel(&img, 27, 16,black);
	my_mlx_put_pixel(&img, 29, 16,black);
	my_mlx_put_pixel(&img, 26, 17,black);
	my_mlx_put_pixel(&img, 27, 17,black);
	my_mlx_put_pixel(&img, 28, 17,black);
	my_mlx_put_pixel(&img, 29, 17,black);
	my_mlx_put_pixel(&img, 27, 18,black);
	my_mlx_put_pixel(&img, 28, 18,black);
	my_mlx_put_pixel(&img, 33, 11,black);
	my_mlx_put_pixel(&img, 34, 10,black);
	my_mlx_put_pixel(&img, 32, 12,black);
	my_mlx_put_pixel(&img, 35, 6,pink);
	my_mlx_put_pixel(&img, 36, 6,pink);
	my_mlx_put_pixel(&img, 35, 7,pink);
	my_mlx_put_pixel(&img, 36, 7,pink);
	my_mlx_put_pixel(&img, 35, 8,pink);
	my_mlx_put_pixel(&img, 36, 8,pink);
	my_mlx_put_pixel(&img, 36, 9,pink);
	my_mlx_put_pixel(&img, 37, 9,pink);
	my_mlx_put_pixel(&img, 38, 9,pink);
	my_mlx_put_pixel(&img, 37, 8,pink);
	my_mlx_put_pixel(&img, 38, 8,pink);
	my_mlx_put_pixel(&img, 39, 8,pink);
	my_mlx_put_pixel(&img, 37, 7,pink);
	my_mlx_put_pixel(&img, 38, 7,pink);
	my_mlx_put_pixel(&img, 39, 7,pink);
	my_mlx_put_pixel(&img, 38, 6,pink);
	my_mlx_put_pixel(&img, 39, 6,pink);
	my_mlx_put_pixel(&img, 37, 10,pink);
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0,0);
	mlx_loop(mlx);
}