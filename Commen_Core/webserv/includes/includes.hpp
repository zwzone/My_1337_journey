/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:44:35 by zwina             #+#    #+#             */
/*   Updated: 2023/08/13 15:24:50 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

// Includes
#include <iostream>
#include <locale>
#include <utility>

#include <algorithm>
#include <iterator>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include <map>
#include <set>

#include <cstdlib>
#include <cstring>
#include <cerrno>
#include <ctime>

#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <sys/stat.h>
#include <signal.h>
#include <dirent.h>
#include <netdb.h>
#include <fcntl.h>
#include <poll.h>

#include "prototypes.hpp"

// Classes Definitions
#include "classes/Config/Location.hpp"
#include "classes/Config/Server.hpp"
#include "classes/Config/Config.hpp"
#include "classes/Connection/Cgi.hpp"
#include "classes/Connection/Request.hpp"
#include "classes/Connection/Response.hpp"
#include "classes/Connection/Connection.hpp"
#include "classes/Connection/File.hpp"
#include "classes/WebServ.hpp"

#endif // HEADER_HPP
