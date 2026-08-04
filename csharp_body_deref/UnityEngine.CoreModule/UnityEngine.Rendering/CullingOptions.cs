// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CullingOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002DE")]
[Flags]
public enum CullingOptions
{
	[Token(Token = "0x400086E")]
	None = 0,
	[Token(Token = "0x400086F")]
	ForceEvenIfCameraIsNotActive = 1,
	[Token(Token = "0x4000870")]
	OcclusionCull = 2,
	[Token(Token = "0x4000871")]
	NeedsLighting = 4,
	[Token(Token = "0x4000872")]
	NeedsReflectionProbes = 8,
	[Token(Token = "0x4000873")]
	Stereo = 0x10,
	[Token(Token = "0x4000874")]
	DisablePerObjectCulling = 0x20,
	[Token(Token = "0x4000875")]
	ShadowCasters = 0x40
}
