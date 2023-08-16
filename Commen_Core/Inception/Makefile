# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 15:50:59 by zwina             #+#    #+#              #
#    Updated: 2023/06/15 13:15:25 by zwina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VOLS	:= /home/zwina/data/wordpress_vol /home/zwina/data/mariadb_vol

build:
	mkdir -p ${VOLS}
	docker compose -f ./srcs/docker-compose.yml build
up:
	mkdir -p ${VOLS}
	docker compose -f ./srcs/docker-compose.yml up

down:
	docker compose -f ./srcs/docker-compose.yml down
down-img:
	docker compose -f ./srcs/docker-compose.yml down --rmi all
down-vol:
	docker compose -f ./srcs/docker-compose.yml down -v
	sudo rm -rf /home/zwina/data/*/*
down-all:
	docker compose -f ./srcs/docker-compose.yml down --rmi all -v
	sudo rm -rf /home/zwina/data/*/*
prune:
	docker system prune --all --force

clean: down-all prune
