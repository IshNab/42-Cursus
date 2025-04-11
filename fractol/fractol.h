/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:52:32 by inabakka          #+#    #+#             */
/*   Updated: 2025/04/07 16:58:37 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdio.h> //debugging
# include <stdlib.h> //malloc free
# include <unistd.h> //write
# include <math.h>
# include "minilibx_linux/mlx.h"

#define ERROR_MESSAGE "Please enter \n\t\"./fractol mandelbrot\" or \n\t\"./fractol julia <real> <i>\"\n"

#define WIDTH 800
#define HEIGHT 800

//complex value
typedef struct s_complex
{
	//real
	double	x;
	//i
	double	y;
}	t_complex;

//Image is a pixels buffer --> wtf does that mean????
//values from mlx_get_data_addr()
typedef struct s_image
{
	void	*image_ptr; //pointer to image struct
	char	*pixels_ptr; //pointerr to change pixels in the image, point to pixels
	int		bpp;
	int		endian;
	int		line_len;
}	t_image;

/* Fractal ID
	MLX things
	Image
	Hook values
*/
typedef struct s_fractal
{
	char *name; //name of the fractol
	//MLX
	void *mlx_connection; //mlx_init()
	void *mlx_window; //mlx_new_window()
	//Image
	t_image	image;
	
	//Hooks member variables
}	t_fractal;

int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		ft_putstr_fd(char *s, int fd);
void		fractal_init(t_fractal *fractal);
double		map(double unscaled_num, double new_min, double new_max, double old_min, double old_max);
t_complex	sum_complex(t_complex z1, t_complex z2);
t_complex	square_complex(t_complex z);

#endif
