#ifndef L2AUTH_GAME_ACTION_SAY_RESPONSE_H
#define L2AUTH_GAME_ACTION_SAY_RESPONSE_H

#include <core/l2_packet.h>
#include <core/l2_string.h>
#include <game/client.h>

l2_packet* game_action_say_response
(
        struct GameClient *client,
        l2_string* message
);

#endif
