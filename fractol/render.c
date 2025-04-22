/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:41:18 by inabakka          #+#    #+#             */
/*   Updated: 2025/04/18 13:11:16 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "libft.h"

//actual meat of the code --> check if point in mandelbrot or julia set

//put a pixel in my image buffer
static void	my_pixel_put(int x, int y, t_image *image, int color)
{
	int	offset;

	offset = (y * image->line_len) + (x * (image->bpp / 8));
	*(unsigned int *)(image->pixels_ptr + offset) = color;
}

static void	mandel_vs_julia(t_complex *z, t_complex *c, t_fractal *fractal)
{
	if (!ft_strncmp(fractal->name, "julia", 5))
	{
		c->x = fractal->julia_x;
		c->y = fractal->julia_y;
	}
	else
	{
		c->x = z->x;
		c->y = z->y;
	}
}

static const int	warm_palette[] = {
	SUNGLOW, BURNT_ORANGE, AVOCADO_GREEN, HARVEST_GOLD, TUSCAN_RED,
	RUST, MUSTARD, OLIVE_DRAB, CLAY, APRICOT,
	CORAL_ROSE, MELLOW_MAUVE, EARTH_BROWN, RETRO_BEIGE,
	FADED_TURMERIC, CREAMSICLE
};

static void	handle_pixel(int x, int y, t_fractal *fractal)
{
	t_complex	z;
	t_complex	c;
	int			i;
	int			color;

	i = 0;
	//pixel coordinate x && y scaled to fit mandel needs
	//all map values (-2, 2) ranger are going to be scaled depending on zoom factor
	z.x = (map(x, -2, +2, 0, WIDTH) * fractal->zoom) + fractal->shift_x;
	z.y = (map(y, +2, -2, 0, HEIGHT) * fractal->zoom) + fractal->shift_y;
	mandel_vs_julia(&z, &c, fractal);
	//times to iterate to check if the point escaped
	while (i < fractal->iterations_definition)
	{
		// z = z^2 + c
		//do the function
		z = sum_complex(square_complex(z), c);
		//is the value escaped?
		//if the hypotnuse > 2 assume the point has escaped
		//check if specific point is outside the boundaries
		if ((z.x * z.x) + (z.y * z.y) > fractal->escape_value)
		{
			color = warm_palette[i % PALETTE_SIZE];
			my_pixel_put(x, y, &fractal->image, color);
			return ;
		}
		i++;
	}
	//we are in mandelbrot set
	my_pixel_put(x, y, &fractal->image, TUSCAN_RED);
}

//input is pointer to fractal struct
void	fractal_render(t_fractal *fractal)
{
	int	x;
	int	y;

	y = -1;
	while (y++ < HEIGHT)
	{
		x = -1;
		while (x++ < WIDTH)
		{
			handle_pixel(x, y, fractal);
		}
	}
	mlx_put_image_to_window(fractal->mlx_connection,
		fractal->mlx_window,
		fractal->image.image_ptr, 0, 0);
}
