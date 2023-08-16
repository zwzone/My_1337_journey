#include "includes.hpp"

std::string findErrorPage(const Response &response,const Server &srv) {
	std::string response_Body;
	std::string errorPagePath;
	std::ostringstream ss;
	Server tmp = srv;
	std::map<short, std::string>::iterator it = tmp.error_pages.find(response.request->_error);
	if (it != tmp.error_pages.end()) { //error page path was found
		errorPagePath = it->second;
		std::ifstream file(errorPagePath.c_str());
		if (file) { //was able to open the error page file.
			ss << file.rdbuf();
			response_Body = ss.str();
		}
	}
	std::ifstream file("src/Response/DefaultErrorPage/index.html"); //mal9inach error page li me7tajin so kanservi default
	ss << file.rdbuf();
	response_Body = ss.str();
	return response_Body;
}

void	buildErrorResponse(const Server &server, Response *response) {
	std::map<short, std::string>::const_iterator it = server.error_pages.find(response->request->_error);
	if (it == server.error_pages.end()) {
		response->serveErrorPage(server, it->first, statusCodeMap[it->first]);
		return;
	}
	response->errorPageHtml();
}

void servingFileGet(Response *response ,const Server &server, const Location *loc, File &file) {
	if (file.existing) { //file does exists
		if (!file.directory) { //resource is a file
			response->fillBodyFile(server);
			response->getbodySize();
			response->buildResponseHeaders();
		}
		else { //file is a directory
			if (file.indexFound) { // check autoindex
				response->fillBodyFile(server);
				response->getbodySize();
				response->buildResponseHeaders();
			}
			else { //no index should check autoindex here
				if (!loc->autoindex) {
					response->serveErrorPage(server, 403, statusCodeMap[403]);
				}
				else {// auto index
					response->setResponsefields(200, "OK");
					response->generateIndexPage();
					response->getbodySize();
					response->buildResponseHeaders();
				}
			}
		}
	}
	else {
		response->serveErrorPage(server, 404, statusCodeMap[404]);
	}
}

void	postFile(Response	*response, const Server	&server, const Location	*loc, const File	&file) {
	UNUSED(server);
	if (!loc->upload_pass.empty()) {
		if (resourceExists(loc->upload_pass)) {
			response->nameUploadFile();
			response->uploadContent(server, loc);
			return;
		}
		response->serveErrorPage(server, 404, statusCodeMap[404]);
		return;
	}
	//upload not supported
	if (file.existing) { //path kayn
		if (!file.directory) { //path file
			response->serveErrorPage(server, 403, statusCodeMap[403]);
		}
		else { //path directory
			if (file.endWithSlash) { //dir ends with slash
				response->serveErrorPage(server, 403, statusCodeMap[403]);
			}
			else {
				response->serveErrorPage(server, 301, statusCodeMap[301]);
			}
		}
	}
	else { //path makaynch
		response->serveErrorPage(server, 404, statusCodeMap[404]);
	}
}

void    deletingFile(Response *response, const Server &server, const Location *loc, const File &file) {
	UNUSED(loc);
	if (file.existing) {
		if (!file.directory) {
			response->removeFile(server);
		}
		else {//directory
			response->deleteAllDirContent(response->request->_path, server);
			response->serveErrorPage(server, response->statusCode, response->statusMessage);
		}
	}
	else {
		response->serveErrorPage(server, 404, statusCodeMap[404]);
	}
}
