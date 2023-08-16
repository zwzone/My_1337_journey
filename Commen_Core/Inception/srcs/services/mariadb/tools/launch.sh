#!/bin/bash

sed -i 's/^bind-address\s*=.*/bind-address\t\t= 0.0.0.0/' /etc/mysql/mariadb.conf.d/50-server.cnf

service mariadb start

mariadb -u root -e "CREATE DATABASE IF NOT EXISTS $MARIADB_NAME;"
mariadb -u root -e "CREATE USER IF NOT EXISTS '$MARIADB_USER'@'%' IDENTIFIED BY '$MARIADB_PASS';"
mariadb -u root -e "GRANT ALL PRIVILEGES ON $MARIADB_NAME.* TO '$MARIADB_USER'@'%';"
mariadb -u root -e "FLUSH PRIVILEGES;"

service mariadb stop

mariadbd
