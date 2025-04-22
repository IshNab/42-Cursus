/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:37:45 by inabakka          #+#    #+#             */
/*   Updated: 2025/04/18 10:57:39 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

//input is pointer to the fractal
//when press ESC or x on the window --> closes window and no leaks
int	close_handler(t_fractal *fractal)
{
	mlx_destroy_image(fractal->mlx_connection, fractal->image.image_ptr);
	mlx_destroy_window(fractal->mlx_connection, fractal->mlx_window);
	mlx_destroy_display(fractal->mlx_connection);
	free(fractal->mlx_connection);
	exit(EXIT_SUCCESS);
}
//respond to specific keys in a particular way
int	key_handler(int keysym, t_fractal *fractal)
{
	if (keysym == XK_Escape)
		close_handler(fractal);
	else if (keysym == XK_Left)
		fractal->shift_x += (0.5 * fractal->zoom);
	else if (keysym == XK_Right)
		fractal->shift_x -= (0.5 * fractal->zoom);
	else if (keysym == XK_Up)
		fractal->shift_y -= (0.5 * fractal->zoom);
	else if (keysym == XK_Down)
		fractal->shift_y += (0.5 * fractal->zoom);
	else if (keysym == XK_plus)
		fractal->iterations_definition += 10;//increase itearation by 10
	else if (keysym == XK_minus)
		fractal->iterations_definition -= 10;
	//refresh the image
	fractal_render(fractal);
	return (0);
}

int	mouse_handler(int button, int x, int y, t_fractal *fractal)
{
	//zoom in
	if (button == Button5)
	{
		fractal->zoom *= 0.95;
	}
	//zoom out
	else if (button == Button4)
	{
		fractal->zoom *= 1.05;
	}
	//refresh with new data
	fractal_render(fractal);
	return (0);
}

//track mouse to change julia dynamically
int	track_julia(int x, int y, t_fractal *fractal)
{
	//if the string is julia
	if (!ft_strncmp(fractal->name, "julia", 5))
	{
		//take input coming from mouse, map them accordingly to zoom, and change new values of julia
		fractal->julia_x = (map(x, -2, +2, 0, WIDTH) * fractal->zoom) + fractal->shift_x;
		fractal->julia_y = (map(y, +2, -2, 0, HEIGHT) * fractal->zoom) + fractal->shift_y;
		fractal_render(fractal);
	}
	return (0);
}
