# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 18:38:57 by zwina             #+#    #+#              #
#    Updated: 2023/06/15 13:13:20 by zwina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM debian:oldstable

RUN apt update -y && apt upgrade -y && \
    apt install nginx -y && \
    rm /var/www/html/*

COPY tools /var/www/html

COPY conf/nginx.conf /etc/nginx/conf.d

CMD [ "nginx", "-g", "daemon off;" ]
