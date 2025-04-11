/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:41:18 by inabakka          #+#    #+#             */
/*   Updated: 2025/04/08 16:48:08 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

//actual meat of the code --> check if point in mandelbrot or julia set

void	handle_pixel(int x, int y, t_fractal *fractal)
{
	t_complex	z;
	t_complex	c;
	//on the first iteration
	z.x = 0.0;
	z.y = 0.0;
	
	c.x = map(x, -2, +2, 0, WIDTH);
	c.y = map(y, +2, -2, 0, HEIGHT);

	while ()
	{
		// z = z^2 + c
		z = sum_complex(square_complex(z), c);
		
		//is the value escaped?
		//if the hypotnuse > 2 assume the point has escaped
		if ()
		{
			my_pixel_put();
			return ;
		}
	}
}

//input is pointer to fractal struct
void	fractal_render(t_fractal *fractal)
{
	int x;
	int y;

	y = -1;
	while (y++ < HEIGHT)
	{
		while (x++ < WIDTH)
		{
			handle_pixel(x, y, fractal)
		}
	}
}
