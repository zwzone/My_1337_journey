# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/06 07:46:12 by zwina             #+#    #+#              #
#    Updated: 2023/06/15 18:44:47 by zwina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM debian:oldstable

RUN apt update -y && apt upgrade -y && \
    apt install nginx -y && \
    apt install openssl -y

COPY conf/nginx.conf /etc/nginx/conf.d/my_nginx.conf
COPY tools/launch.sh /

RUN chmod 744 /launch.sh

CMD [ "/launch.sh" ]
