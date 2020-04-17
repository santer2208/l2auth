#ifndef L2AUTH_GAME_DTO_CHAR_H
#define L2AUTH_GAME_DTO_CHAR_H

#include <game/dto/location.h>

struct GameDtoChar
{
        unsigned char name[14];
        unsigned char login[14];

        int char_id;
        int race_id;
        int class_id;
        int sex;
        int active;

        int clan_id;

        struct GameDtoLocation current_location;
        struct GameDtoLocation target_location;

        double current_hp;
        double current_mp;
        double max_hp;
        double max_mp;

        int sp;
        int exp;
        int level;
        int karma;

        int under_obj_id;
        int r_ear_obj_id;
        int l_ear_obj_id;
        int neck_obj_id;
        int r_finger_obj_id;
        int l_finger_obj_id;
        int head_obj_id;
        int r_hand_obj_id;
        int l_hand_obj_id;
        int gloves_obj_id;
        int chest_obj_id;
        int legs_obj_id;
        int feet_obj_id;
        int back_obj_id;
        int lr_hand_obj_id;
        int hair_obj_id;

        int under;
        int r_ear;
        int l_ear;
        int neck;
        int r_finger;
        int l_finger;
        int head;
        int r_hand;
        int l_hand;
        int gloves;
        int chest;
        int legs;
        int feet;
        int back;
        int lr_hand;
        int hair;

        int hair_style;
        int hair_color;
        int face;

        int delete_days;

        int auto_select;
        int enchant_effect;
};


#endif
