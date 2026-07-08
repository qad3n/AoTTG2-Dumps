using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002EA")]
[Flags]
public enum PerObjectData
{
	[Token(Token = "0x40008BD")]
	None = 0,
	[Token(Token = "0x40008BE")]
	LightProbe = 1,
	[Token(Token = "0x40008BF")]
	ReflectionProbes = 2,
	[Token(Token = "0x40008C0")]
	LightProbeProxyVolume = 4,
	[Token(Token = "0x40008C1")]
	Lightmaps = 8,
	[Token(Token = "0x40008C2")]
	LightData = 0x10,
	[Token(Token = "0x40008C3")]
	MotionVectors = 0x20,
	[Token(Token = "0x40008C4")]
	LightIndices = 0x40,
	[Token(Token = "0x40008C5")]
	ReflectionProbeData = 0x80,
	[Token(Token = "0x40008C6")]
	OcclusionProbe = 0x100,
	[Token(Token = "0x40008C7")]
	OcclusionProbeProxyVolume = 0x200,
	[Token(Token = "0x40008C8")]
	ShadowMask = 0x400
}
