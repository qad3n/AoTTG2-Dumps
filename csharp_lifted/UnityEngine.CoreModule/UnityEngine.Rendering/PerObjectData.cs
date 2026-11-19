// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PerObjectData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000387")]
[Flags]
public enum PerObjectData
{
	[Token(Token = "0x4000A96")]
	None = 0,
	[Token(Token = "0x4000A97")]
	LightProbe = 1,
	[Token(Token = "0x4000A98")]
	ReflectionProbes = 2,
	[Token(Token = "0x4000A99")]
	LightProbeProxyVolume = 4,
	[Token(Token = "0x4000A9A")]
	Lightmaps = 8,
	[Token(Token = "0x4000A9B")]
	LightData = 0x10,
	[Token(Token = "0x4000A9C")]
	MotionVectors = 0x20,
	[Token(Token = "0x4000A9D")]
	LightIndices = 0x40,
	[Token(Token = "0x4000A9E")]
	ReflectionProbeData = 0x80,
	[Token(Token = "0x4000A9F")]
	OcclusionProbe = 0x100,
	[Token(Token = "0x4000AA0")]
	OcclusionProbeProxyVolume = 0x200,
	[Token(Token = "0x4000AA1")]
	ShadowMask = 0x400
}
