#ifndef OBJ_FBZSTORM_H
#define OBJ_FBZSTORM_H

#include "../SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    int array1[20]; //= { 64, 128, 192, 256, 256, 128, 0, 32, 64, 128, 192, 256, 256, 192, 128, 96, 64, 32, 16, 0 };
    Vector2 positions[PLAYER_MAX * 0x40];
    ushort aniFrames;
    ushort sfxRain;
    byte playingRainSFX;
    ushort sfxThunder;
    byte srcPal; //= 1;
} ObjectFBZStorm;

// Entity Class
typedef struct {
    RSDK_ENTITY
    StateMachine(state);
    int timer;
    int blendAmount;
    int stormAngle[4];
    int screenPosX[4];
    bool32 flag;
    Animator animator;
} EntityFBZStorm;

// Object Struct
extern ObjectFBZStorm *FBZStorm;

// Standard Entity Events
void FBZStorm_Update(void);
void FBZStorm_LateUpdate(void);
void FBZStorm_StaticUpdate(void);
void FBZStorm_Draw(void);
void FBZStorm_Create(void* data);
void FBZStorm_StageLoad(void);
void FBZStorm_EditorDraw(void);
void FBZStorm_EditorLoad(void);
void FBZStorm_Serialize(void);

// Extra Entity Functions
void FBZStorm_Unknown1(void);
void FBZStorm_Unknown2(void);
void FBZStorm_Unknown3(void);
void FBZStorm_Unknown4(void);
void FBZStorm_Unknown5(void);

#endif //!OBJ_FBZSTORM_H
