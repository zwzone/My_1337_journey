# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/21 16:17:59 by zwina             #+#    #+#              #
#    Updated: 2023/06/15 13:13:23 by zwina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM debian:oldstable

RUN apt update -y && apt upgrade -y && \
    apt install vsftpd -y && \
    mkdir -p /var/run/vsftpd && mkdir -p /var/run/vsftpd/empty && \
    mkdir -p /ftp

COPY conf/vsftpd.conf /etc/vsftpd.conf

COPY tools/launch.sh /

RUN chmod 744 /launch.sh

CMD [ "/launch.sh" ]
