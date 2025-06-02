/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cgen.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:31:02 by tbasak            #+#    #+#             */
/*   Updated: 2025/06/02 13:03:03 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


inline static bool	str_eq(const char *a, const char *b)
{
	return (!strcmp(a, b));
}

inline static bool	str_start_with(const char *a, const char *b)
{
	while (*a)
	{
		if (*a != *b)
			break ;
		a++;
		b++;
	}
	return (*b == '\0');
}

inline static int	str_len(const char *str)
{
	int	len;

	if (str == NULL)
		return (0);
	len = 0;
	while (str[len])
		len++;
	return (len);
}

static const char	*str_trim_start(const char *str, const char *nedle)
{
	while (str_start_with(str, nedle))
		str = str + str_len(nedle);
	return (str);
}

static char *str_clone(const char *src)
{
	int		len;
	char	*res;

	if (src == NULL)
		return (NULL);
	len = str_len(src);
	res = malloc(len + 1);
	if (res == NULL)
		return (NULL);
	memcpy(res, src, len + 1);
	return (res);
}

static char	*str_append(char *dst, const char *src)
{
	char	*res;
	int		dst_len;
	int		src_len;
	int		i;

	dst_len = str_len(dst);
	src_len = str_len(src);
	res = malloc(dst_len + src_len + 1);
	if (res == NULL)
		return (dst);
	memcpy(res, dst, dst_len);
	free(dst);
	dst = res;
	memcpy(dst + dst_len, src, src_len + 1);
	return (dst);
}

static bool	folder_has_file_recursive(const char *folderpath, const char *filename)
{
	//Find the folder
	//Check if it has filename as a file entry
	//call recursively on every subfolder
	return (false);
}

static char *normalize_type(const char *typename)
{
	char	*res;
	char	*tmp;
	int		len;

	typename = str_trim_start(typename, "const_");
	res = str_clone(typename);
	if (res == NULL)
		return (NULL);
	tmp = res;
	while (tmp[0] && tmp++);
	while (tmp > res && tmp[0] != ']')
		tmp--;
	if (tmp[0] != ']')
		return (res);
	while (tmp > res && tmp[0] != '[')
		tmp--;
	if (tmp[0] != '[')
	{
		free(res);
		printf("Bad type formatting, type: [%s]!", typename);
		return (NULL);
	}
	tmp[0] = '\0';
	return (res);
}

static bool	type_is_native(const char *typename)
{
	typename = str_trim_start(typename, "unsigned_");
	return (
		str_eq(typename, "char") ||
		str_eq(typename, "short") ||
		str_eq(typename, "int") ||
		str_eq(typename, "long") ||
		str_eq(typename, "long_long")
	);
}

static bool	type_is_defined(const char *typename)
{
	char	*normalized_typename;
	char	*typeheader;
	bool	typeheader_exists;

	normalized_typename = normalize_type(typename);
	if (normalized_typename == NULL)
		return (false);
	if (type_is_native(normalized_typename))
	{
		free(normalized_typename);
		return (true);
	}
	typeheader = str_clone("t_");
	typeheader = str_append(typeheader, normalized_typename);
	free(normalized_typename);
	typeheader = str_append(typeheader, ".h");
	typeheader_exists = folder_has_file_recursive("include", typeheader);
	free(typeheader);
	return (typeheader_exists);
}

static int	cmd_type(const char *typearg, const char *srctype)
{
	if (type_is_defined(srctype) == false)
	{
		printf("Source type [%s] is not defined!\n", srctype);
		return (1);
	}
	//Separate typearg to path and typename
	//Check if the typename is already in use, prompt to erase
	//check and create every sub folder in path as a module - namespace
	//If not existing create, create its header, and include it by the top module
	//Create the t_typename.h accordingly include srctype if it is not native
	//Create the typename.h next to it and include t_typename.h in it
	//Include typename.h in the top module
	return (0);
}

static int	cmd_struct(const char *structarg)
{
	//Similar to cmd_type
	//Prompt every struct fields and check etc...
	//Similar to cmd_type
	return (0);
}

int	main(int ac, char **av)
{
	char	*cmd;

	if (ac < 2)
	{
		printf("Usage: cgen cmd ...args\n");
		return (1);
	}
	cmd = av[1];
	if (str_eq(cmd, "type"))
	{
		if (ac != 4)
		{
			printf("Usage: cgen type [path/]typename sourcetype\n");
			return (1);
		}
		return (cmd_type(av[2], av[3]));
	}
	else if (str_eq(cmd, "struct"))
	{
		if (ac != 3)
		{
			printf("Usage: cgen struct [path/]structname\n");
			return (1);
		}
		return (cmd_struct(av[2]));
	}
	printf("Unknown command %s !\n", cmd);
	return (1);
}