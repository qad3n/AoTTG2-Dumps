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

[Token(Token = "0x2000377")]
[Flags]
public enum CullingOptions
{
	[Token(Token = "0x4000A3E")]
	None = 0,
	[Token(Token = "0x4000A3F")]
	ForceEvenIfCameraIsNotActive = 1,
	[Token(Token = "0x4000A40")]
	OcclusionCull = 2,
	[Token(Token = "0x4000A41")]
	NeedsLighting = 4,
	[Token(Token = "0x4000A42")]
	NeedsReflectionProbes = 8,
	[Token(Token = "0x4000A43")]
	Stereo = 0x10,
	[Token(Token = "0x4000A44")]
	DisablePerObjectCulling = 0x20,
	[Token(Token = "0x4000A45")]
	ShadowCasters = 0x40
}
