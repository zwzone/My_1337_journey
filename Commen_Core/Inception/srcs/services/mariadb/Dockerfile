# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/06 07:46:03 by zwina             #+#    #+#              #
#    Updated: 2023/06/15 13:13:18 by zwina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM debian:oldstable

RUN apt update -y && apt upgrade -y && \
    apt install mariadb-server -y

COPY tools/launch.sh /

RUN chmod 744 /launch.sh

CMD [ "/launch.sh" ]
