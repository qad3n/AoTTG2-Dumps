// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LightBakingOutput
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000CC")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/SharedLightData.h")]
public struct LightBakingOutput
{
	[Token(Token = "0x4000207")]
	[FieldOffset(Offset = "0x0")]
	public int probeOcclusionLightIndex;

	[Token(Token = "0x4000208")]
	[FieldOffset(Offset = "0x4")]
	public int occlusionMaskChannel;

	[Token(Token = "0x4000209")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.NativeName("lightmapBakeMode.lightmapBakeType")]
	public LightmapBakeType lightmapBakeType;

	[Token(Token = "0x400020A")]
	[FieldOffset(Offset = "0xC")]
	[UnityEngine.Bindings.NativeName("lightmapBakeMode.mixedLightingMode")]
	public MixedLightingMode mixedLightingMode;

	[Token(Token = "0x400020B")]
	[FieldOffset(Offset = "0x10")]
	public bool isBaked;
}
