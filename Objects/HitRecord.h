#ifndef HIT_RECORD_H
#define HIT_RECORD_H

#include "..\Math\Vector3.h"
#include "..\Math\Vector2.h"

class Material;

// TODO(Darren): Test layout in memory with timing.
struct HitRecord
{
	Vector3 point;		// 12 bytes
	Vector3 normal;		// 12 bytes
	Vector2 uv;			// 08 bytes
	float t;			// 04 bytes
	Material *material; // 04 bytes
						// --
						// 40 bytes
};

#endif