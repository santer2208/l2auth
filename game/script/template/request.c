#include "../headers.h"
#include "../session.h"
#include "../server_packet/REQUEST_LOWERCASE_NAME.h"
#include "REQUEST_LOWERCASE_NAME.h"

void client_request_REQUEST_LOWERCASE_NAME(
        int client,
        session_t *session,
        host_send_response_cb send_response
)
{
        assert(client > 0);
        assert(session);
        assert(send_response);

        packet response[SERVER_PACKET_REQUEST_UPPERCASE_NAME_FULL_SIZE] = {0};

        server_packet_REQUEST_LOWERCASE_NAME(response);
        session_encrypt_packet(
                session,
                response,
                response,
                (size_t) packet_get_size(response)
        );
        send_response(
                client,
                response,
                (size_t) packet_get_size(response)
        );
}
