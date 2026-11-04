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

[Token(Token = "0x20003B3")]
[Flags]
public enum PerObjectData
{
	[Token(Token = "0x4000BB6")]
	None = 0,
	[Token(Token = "0x4000BB7")]
	LightProbe = 1,
	[Token(Token = "0x4000BB8")]
	ReflectionProbes = 2,
	[Token(Token = "0x4000BB9")]
	LightProbeProxyVolume = 4,
	[Token(Token = "0x4000BBA")]
	Lightmaps = 8,
	[Token(Token = "0x4000BBB")]
	LightData = 0x10,
	[Token(Token = "0x4000BBC")]
	MotionVectors = 0x20,
	[Token(Token = "0x4000BBD")]
	LightIndices = 0x40,
	[Token(Token = "0x4000BBE")]
	ReflectionProbeData = 0x80,
	[Token(Token = "0x4000BBF")]
	OcclusionProbe = 0x100,
	[Token(Token = "0x4000BC0")]
	OcclusionProbeProxyVolume = 0x200,
	[Token(Token = "0x4000BC1")]
	ShadowMask = 0x400
}
