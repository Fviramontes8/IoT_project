#include <stdio.h>
#include <curl/curl.h>

#define OK 0
#define INIT_ERR 1
#define REQ_ERR 2

#define URL "http://10.0.0.74:8000"

int main(int argc, char *argv[]) {
	//printf("S\n\tU\n\t\tC\n\t\t\tC\n");
	CURL *curl;
	//CURLcode res;

	curl = curl_easy_init();
	int i;
	for(i=0; i < argc; i++) {
		printf("Argument %d: %s\n", i, argv[i]);
	}
	if(curl) {
		/*
		curl_easy_setopt(curl, CURLOPT_URL, URL);
		curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
		res = curl_easy_perform(curl);
		if(res != CURLE_OK) {
			return REQ_ERR;
		}
		*/
		curl_easy_cleanup(curl);
	}
	else {
		return INIT_ERR;
	}

	return OK;
}
