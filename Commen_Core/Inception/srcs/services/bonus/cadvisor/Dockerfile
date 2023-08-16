# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/23 23:16:24 by zwina             #+#    #+#              #
#    Updated: 2023/06/15 13:13:25 by zwina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM debian:oldstable

RUN apt update -y && apt upgrade -y && \
    apt install wget -y

RUN wget https://github.com/google/cadvisor/releases/download/v0.37.0/cadvisor && \
    chmod 744 cadvisor

CMD [ "./cadvisor" ]
