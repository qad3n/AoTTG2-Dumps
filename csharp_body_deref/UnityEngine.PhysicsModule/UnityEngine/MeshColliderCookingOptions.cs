// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.MeshColliderCookingOptions
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000012")]
[Flags]
public enum MeshColliderCookingOptions
{
	[Token(Token = "0x400002C")]
	None = 0,
	[Token(Token = "0x400002D")]
	[Obsolete("No longer used because the problem this was trying to solve is gone since Unity 2018.3", true)]
	InflateConvexMesh = 1,
	[Token(Token = "0x400002E")]
	CookForFasterSimulation = 2,
	[Token(Token = "0x400002F")]
	EnableMeshCleaning = 4,
	[Token(Token = "0x4000030")]
	WeldColocatedVertices = 8,
	[Token(Token = "0x4000031")]
	UseFastMidphase = 0x10
}
