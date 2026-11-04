// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceComponentGroup
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000E2")]
[Flags]
internal enum InstanceComponentGroup : uint
{
	[Token(Token = "0x400041C")]
	Default = 1u,
	[Token(Token = "0x400041D")]
	Wind = 2u,
	[Token(Token = "0x400041E")]
	LightProbe = 4u,
	[Token(Token = "0x400041F")]
	Lightmap = 8u,
	[Token(Token = "0x4000420")]
	DefaultWind = Default | Wind,
	[Token(Token = "0x4000421")]
	DefaultLightProbe = Default | LightProbe,
	[Token(Token = "0x4000422")]
	DefaultLightmap = Default | Lightmap,
	[Token(Token = "0x4000423")]
	DefaultWindLightProbe = DefaultWind | LightProbe,
	[Token(Token = "0x4000424")]
	DefaultWindLightmap = DefaultWind | Lightmap
}
