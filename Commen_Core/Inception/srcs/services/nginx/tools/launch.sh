#!/bin/bash

openssl req -x509 -nodes -days 365 -newkey rsa:2048 \
            -keyout $KEY_PATH \
            -out $CERT_PATH \
            -subj "/O=1337 School/CN=zwina.42.fr"

sed -i "s|CERT_PATH|$CERT_PATH|" /etc/nginx/conf.d/my_nginx.conf
sed -i "s|KEY_PATH|$KEY_PATH|"   /etc/nginx/conf.d/my_nginx.conf

nginx -g "daemon off;"
