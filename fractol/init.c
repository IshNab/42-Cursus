/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:15:10 by inabakka          #+#    #+#             */
/*   Updated: 2025/04/08 14:35:55 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "minilibx_linux/mlx.h"

//if malloc goes bad
//static because this function is only for this file
static void	malloc_error(void)
{
	perror("Problems with malloc");
	exit (EXIT_FAILURE);
}


//Init
//~mlx
//~listening events
//hooks data

void	fractal_init(t_fractal *fractal)
{
	fractal->mlx_connection = mlx_init();
	if (fractal->mlx_connection == NULL)
		malloc_error();
	fractal->mlx_window = mlx_new_window(fractal->mlx_connection, WIDTH, HEIGHT, fractal->name);
	if (fractal->mlx_window == NULL)
	{
		mlx_destroy_display(fractal->mlx_connection);
		free (fractal->mlx_connection);
		malloc_error();
	}
	fractal->image.image_ptr = mlx_new_image(fractal->mlx_connection, WIDTH, HEIGHT);
	if (fractal->image.image_ptr == NULL)
	{
		mlx_destroy_window(fractal->mlx_connection, fractal->mlx_window);
		mlx_destroy_display(fractal->mlx_connection);
		free(fractal->mlx_connection);
		malloc_error();
	}
	fractal->image.pixels_ptr = mlx_get_data_addr(fractal->image.image_ptr, &fractal->image.bpp, &fractal->image.line_len, &fractal->image.endian);
	//events_init(fractal)
	//data_init(fractal)
}
