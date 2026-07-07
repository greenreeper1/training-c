#include <microhttpd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PORT 8080

static int handle_request(void* cls, struct MHD_Connection* connection,
                        const char* url, const char* method,
                        const char* version, const char* upload_data,
                        size_t* upload_data_size, void** con_cls) 
{
    const char* response_text = "{\"message\": \"Hello, Microservices!\"\n}";
    struct MHD_Response* response = MHD_create_response_from_buffer(
        strlen(response_text), (void*) response_text, MHD_RESPMEM_PERSISTENT
    );

    int ret = MHD_queue_response(connection, MHD_HTTP_OK, response);
    MHD_destroy_response(response);
    return ret;
}

int main() {
    struct MHD_Daemon* server;

    server = MHD_start_daemon(MHD_USE_INTERNAL_POLLING_THREAD, PORT, NULL, NULL, 
        &handle_request, NULL, MHD_OPTION_END);

    if (server == NULL){
        fprintf(stderr, "Failed to start server \n");
        return EXIT_FAILURE;
    }

    printf("Server running on port %d \n", PORT);
    getchar(); // Keep the server running unti user input
    return EXIT_SUCCESS;
}