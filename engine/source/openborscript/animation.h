/*
 * OpenBOR - http://www.chronocrash.com
 * -----------------------------------------------------------------------
 * All rights reserved. See LICENSE in OpenBOR root for license details.
 *
 * Copyright (c) 2004 - 2019 OpenBOR Team
 */

 // Entity Properties
 // 2018-04-02
 // Caskey, Damon V.

typedef enum
{		
	_ANIMATION_PROP_ATTACK_ONE, 
	_ANIMATION_PROP_BOUNCE_FACTOR,       
	_ANIMATION_PROP_CANCEL,      
	_ANIMATION_PROP_CHARGE_TIME,   
	_ANIMATION_PROP_COUNTER_ACTION,
	_ANIMATION_PROP_ENERGY_COST,
	_ANIMATION_PROP_FLIP_FRAME,
	_ANIMATION_PROP_FOLLOW_UP_ANIMATION_SELECT,
	_ANIMATION_PROP_FOLLOW_UP_CONDITION,
	_ANIMATION_PROP_FRAME_SET_DROP,
	_ANIMATION_PROP_FRAME_SET_LAND,
	_ANIMATION_PROP_HIT_COUNT,
	_ANIMATION_PROP_INDEX,
	_ANIMATION_PROP_JUMPFRAME,
	_ANIMATION_PROP_LOOP,
	_ANIMATION_PROP_MODEL_INDEX,
	_ANIMATION_PROP_NUMFRAMES,
	_ANIMATION_PROP_PROJECTILE,
	_ANIMATION_PROP_QUAKEFRAME,		
	_ANIMATION_PROP_RANGE,			
	_ANIMATION_PROP_SIZE,			
	_ANIMATION_PROP_SPAWNFRAME,		
	_ANIMATION_PROP_SUB_ENTITY_MODEL_INDEX,	
	_ANIMATION_PROP_SUBJECT_TO_GRAVITY,
	_ANIMATION_PROP_SUMMONFRAME,	
	_ANIMATION_PROP_SYNC,			
	_ANIMATION_PROP_UNSUMMONFRAME,	
	_ANIMATION_PROP_WEAPONFRAME,    
	_ANIMATION_PROP_END				// End cap. ALWAYS last!				
} e_animation_properties;

HRESULT openbor_get_animation_property(ScriptVariant** varlist, ScriptVariant** pretvar, int paramCount);
HRESULT openbor_set_animation_property(ScriptVariant** varlist, ScriptVariant** pretvar, int paramCount);

int mapstrings_animation_property(ScriptVariant** varlist, int paramCount);

// Animation frame properties

typedef enum
{
	_ANIMATION_FRAME_PROP_ATTACK,
	_ANIMATION_FRAME_PROP_BODY_COLLISION,
	_ANIMATION_FRAME_PROP_ENTITY_COLLISION,
	_ANIMATION_FRAME_PROP_DELAY,
	_ANIMATION_FRAME_PROP_DRAWMETHODS,
	_ANIMATION_FRAME_PROP_IDLE,
	_ANIMATION_FRAME_PROP_MOVE,	
	_ANIMATION_FRAME_PROP_OFFSET,
	_ANIMATION_FRAME_PROP_PLATFORM,
	_ANIMATION_FRAME_PROP_SHADOW,
	_ANIMATION_FRAME_PROP_SOUNDTOPLAY,	
	_ANIMATION_FRAME_PROP_SPRITE,
	_ANIMATION_FRAME_PROP_VULNERABLE,	
	_ANIMATION_FRAME_PROP_END			// End cap. ALWAYS last!
} e_animation_frame_properties;

HRESULT openbor_get_animation_frame_property(ScriptVariant** varlist, ScriptVariant** pretvar, int paramCount);
HRESULT openbor_set_animation_frame_property(ScriptVariant** varlist, ScriptVariant** pretvar, int paramCount);

int mapstrings_animation_frame_property(ScriptVariant** varlist, int paramCount);

// Frame set (drop frame, land frame) properties

typedef enum
{
	_FRAME_SET_PROP_FRAME,
	_FRAME_SET_PROP_MODEL_INDEX,
	_FRAME_SET_PROP_END			// End cap. ALWAYS last!
} e_frame_set_properties;

HRESULT openbor_get_frame_set_property(ScriptVariant** varlist, ScriptVariant** pretvar, int paramCount);
HRESULT openbor_set_frame_set_property(ScriptVariant** varlist, ScriptVariant** pretvar, int paramCount);
HRESULT openbor_allocate_frame_set(ScriptVariant** varlist, ScriptVariant** pretvar, int paramCount);

int mapstrings_frame_set_property(ScriptVariant** varlist, int paramCount);

// Energy cost properties

typedef enum
{
	_ENERGY_COST_PROP_COST,
	_ENERGY_COST_PROP_DISABLE,
	_ENERGY_COST_PROP_MP_ONLY,
	_ENERGY_COST_PROP_END
} e_energy_cost_properties;

HRESULT openbor_get_energy_cost_property(ScriptVariant** varlist, ScriptVariant** pretvar, int paramCount);
HRESULT openbor_set_energy_cost_property(ScriptVariant** varlist, ScriptVariant** pretvar, int paramCount);
HRESULT openbor_allocate_energy_cost(ScriptVariant** varlist, ScriptVariant** pretvar, int paramCount);

int mapstrings_energy_cost_property(ScriptVariant** varlist, int paramCount);