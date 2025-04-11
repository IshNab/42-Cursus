/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:52:55 by inabakka          #+#    #+#             */
/*   Updated: 2025/04/08 14:24:50 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*function: Julia and Mandelbrot
 Infinite zoom
 take command line arguments to display a particlar fractal
 esc closes the process with no leaks
 click on the X on the window --> close the process leak free
*/

#include "fractol.h"
#include "ft_printf.h"
#include "libft.h"

int main(int argc, char **argv)
{
	t_fractal	fractal;

	if (argc == 2 && !ft_strncmp(argv[1], "mandelbrot", 10)
			|| argc == 4 && !ft_strncmp(argv[1], "julia", 5))
	{
		fractal.name = argv[1]; //madelbrot or julia
		//If prompt is valid --> start application
		//initiate the data
		fractal_init(&fractal); fractal:
		//render the image (what does render mean?)
	//	fractal_render(&fractal);
		//enter loop, keep listening
		mlx_loop(fractal.mlx_connection);
	}
	else
	{
		ft_putstr_fd(ERROR_MESSAGE, STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
}
