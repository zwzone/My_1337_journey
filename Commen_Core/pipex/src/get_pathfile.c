/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pathfile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:32:29 by zwina             #+#    #+#             */
/*   Updated: 2022/02/16 11:19:52 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	free_strs(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		free(strs[i++]);
	free(strs);
}

char	*check_pathfile(char *location, char *filename)
{
	char	*pathfile;

	if (!location)
		ft_error(0, "malloc");
	pathfile = ft_strjoin(location, filename);
	if (!access(pathfile, X_OK))
		return (pathfile);
	free(pathfile);
	free(location);
	return (NULL);
}

char	*get_pathfile(char *filename, char **p)
{
	char	**locations;
	char	*pathfile;
	size_t	i;

	i = 0;
	while (ft_strncmp("PATH", p[i], 4) && p[i])
		i++;
	if (p[i] == NULL)
		ft_error(PATHEX, "PATH");
	locations = ft_split(p[i] + 5, ':');
	if (!locations)
		ft_error(0, "split");
	i = 0;
	while (locations[i])
	{
		pathfile = check_pathfile(ft_strjoin(locations[i], "/"), filename);
		if (pathfile)
			break ;
		i++;
	}
	if (!pathfile)
		ft_error(CNF, filename);
	free_strs(locations);
	return (pathfile);
}
