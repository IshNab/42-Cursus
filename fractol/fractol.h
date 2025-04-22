/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:52:32 by inabakka          #+#    #+#             */
/*   Updated: 2025/04/18 13:25:36 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdio.h> //debugging
# include <stdlib.h> //malloc free
# include <unistd.h> //write
# include <math.h>
# include <X11/X.h>
# include <X11/keysym.h>	//to toggle left/right/up/down arrows
# include "minilibx_linux/mlx.h"

# define ERROR_MESSAGE "Please enter \n\t\"./fractol mandelbrot\" or \n\t\"./fractol julia <real> <i>\"\n"

# define WIDTH 900
# define HEIGHT 900

# define PALETTE_SIZE (sizeof(warm_palette) / sizeof(warm_palette[0]))

# define BLACK           0x1C1C1C
# define WHITE           0xF8F8F8
# define SUNGLOW         0xFFCC33
# define BURNT_ORANGE    0xCC5500
# define AVOCADO_GREEN   0x568203
# define HARVEST_GOLD    0xDA9100
# define TUSCAN_RED      0x7C3030
# define RUST            0xB7410E
# define MUSTARD         0xFFDB58
# define OLIVE_DRAB      0x6B8E23
# define CLAY            0xB66E41
# define APRICOT         0xFBB982
# define CORAL_ROSE      0xF88379
# define MELLOW_MAUVE    0xC187A0
# define EARTH_BROWN     0x8B4513
# define RETRO_BEIGE     0xD8CAB8
# define FADED_TURMERIC  0xE9A64A
# define CREAMSICLE      0xFFDAB3

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
	char	*pixels_ptr; //pointer to change pixels in the image, point to pixels
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
	char	*name; //name of the fractol
	//MLX
	void	*mlx_connection; //mlx_init()
	void	*mlx_window; //mlx_new_window()
	//Image
	t_image	image;
	//Hooks member variables
	double	escape_value; //hypotnuese
	int		iterations_definition;	//value tied with the image quality and rendering speed
	double	shift_x;
	double	shift_y;
	double	zoom;
	double	julia_x;
	double	julia_y;
}	t_fractal;

//string utils
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		ft_putstr_fd(char *s, int fd);
double		atodbl(char *s);
//init
void		fractal_init(t_fractal *fractal);
//math functions
double		map(double unscaled_num, double new_min, double new_max, double old_min, double old_max);
t_complex	sum_complex(t_complex z1, t_complex z2);
t_complex	square_complex(t_complex z);
//render
void		fractal_render(t_fractal *fractal);
//hooks events
int			key_handler(int keysym, t_fractal *fractal);
//clean up functions
int			close_handler(t_fractal *fractal);
int			mouse_handler(int button, int x, int y, t_fractal *fractal);
int			track_julia(int x, int y, t_fractal *fractal);

#endif
